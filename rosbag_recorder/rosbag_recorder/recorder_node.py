#!/usr/bin/env python3
"""ROS 2 node for recording rosbag files with dynamic topic discovery."""

import os
from datetime import datetime

import rclpy
import rosbag2_py
from rclpy.node import Node
from rclpy.qos import (
    QoSDurabilityPolicy,
    QoSHistoryPolicy,
    QoSProfile,
    QoSReliabilityPolicy,
)
from rclpy.serialization import serialize_message
from rosidl_runtime_py.utilities import get_message
from std_srvs.srv import Trigger


class RosbagRecorderNode(Node):
    """ROS 2 node that records topics to a rosbag file."""

    def __init__(self):
        """Initialize the rosbag recorder node."""
        super().__init__('rosbag_recorder')

        self.declare_parameter('output_dir', os.path.expanduser('~/rosbags'))
        self.declare_parameter('storage_id', 'mcap')  # 'mcap' or 'sqlite3'
        self.declare_parameter('discovery_period_sec', 1.0)

        output_dir_param = self.get_parameter('output_dir').value
        assert isinstance(output_dir_param, str), \
            'output_dir parameter must be a string'
        self.output_dir: str = output_dir_param

        storage_id_param = self.get_parameter('storage_id').value
        assert isinstance(storage_id_param, str), \
            'storage_id parameter must be a string'
        self.storage_id: str = storage_id_param

        os.makedirs(self.output_dir, exist_ok=True)

        self.writer = None
        self.recording = False
        self.subscriptions_map = {}   # topic_name -> subscription
        self.known_topics = set()     # topics already added to the writer

        # Periodically discover new topics while recording
        period_param = self.get_parameter('discovery_period_sec').value
        assert isinstance(period_param, float), \
            'discovery_period_sec parameter must be a float'
        self.discovery_timer = self.create_timer(
            period_param, self._discover_topics)

        self.start_srv = self.create_service(
            Trigger, '~/start', self.start_cb)
        self.stop_srv = self.create_service(
            Trigger, '~/stop', self.stop_cb)
        self.save_srv = self.create_service(
            Trigger, '~/save', self.save_cb)

        info_msg = (
            'Rosbag recorder ready. Services: ~/start ~/stop ~/save')
        self.get_logger().info(info_msg)

    # ---------- bag lifecycle ----------

    def _new_bag_uri(self) -> str:
        """Generate a new bag URI with timestamp."""
        stamp = datetime.now().strftime('%Y%m%d_%H%M%S')
        return os.path.join(self.output_dir, f'recording_{stamp}')

    def _open_writer(self) -> None:
        """Open a new rosbag2 writer."""
        uri = self._new_bag_uri()
        writer = rosbag2_py.SequentialWriter()
        storage_options = rosbag2_py.StorageOptions(
            uri=uri, storage_id=self.storage_id)
        converter_options = rosbag2_py.ConverterOptions(
            input_serialization_format='cdr',
            output_serialization_format='cdr')
        writer.open(storage_options, converter_options)
        self.writer = writer
        self.current_uri = uri
        self.known_topics = set()
        self.get_logger().info(f'Opened bag: {uri}')

    def _register_topic(self, topic_name: str, type_name: str) -> None:
        """Register a topic with the rosbag writer."""
        if topic_name in self.known_topics:
            return
        if self.writer is None:
            return
        topic_meta = rosbag2_py.TopicMetadata(
            id=len(self.known_topics),
            name=topic_name,
            type=type_name,
            serialization_format='cdr')
        self.writer.create_topic(topic_meta)
        self.known_topics.add(topic_name)

    # ---------- topic discovery + subscription ----------

    def _discover_topics(self) -> None:
        """Discover and subscribe to new topics."""
        if not self.recording:
            return
        for topic_name, type_names in self.get_topic_names_and_types():
            if topic_name in self.subscriptions_map:
                continue
            if not type_names:
                continue
            type_name = type_names[0]
            self._subscribe(topic_name, type_name)

    def _subscribe(self, topic_name: str, type_name: str) -> None:
        """Subscribe to a topic and record its messages."""
        try:
            msg_type = get_message(type_name)
        except (ModuleNotFoundError, AttributeError, ValueError) as e:
            self.get_logger().warning(f'Skipping {topic_name} ({type_name}): {e}')
            return

        # Best-effort QoS that tolerates most publishers
        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=100)

        def callback(msg, tn=topic_name, tname=type_name):
            if not self.recording or self.writer is None:
                return
            self._register_topic(tn, tname)
            self.writer.write(
                tn,
                serialize_message(msg),  # type: ignore[arg-type]
                int(self.get_clock().now().nanoseconds))

        sub = self.create_subscription(msg_type, topic_name, callback, qos)
        self.subscriptions_map[topic_name] = sub
        self.get_logger().info(f'Subscribed: {topic_name} [{type_name}]')

    # ---------- service callbacks ----------

    def start_cb(self, request, response) -> object:
        """Handle start recording service call."""
        if self.recording:
            response.success = False
            response.message = 'Already recording.'
            return response
        self._open_writer()
        self.recording = True
        self._discover_topics()
        response.success = True
        response.message = f'Recording started: {self.current_uri}'
        return response

    def stop_cb(self, request, response) -> object:
        """Handle stop recording service call."""
        if not self.recording:
            response.success = False
            response.message = 'Not recording.'
            return response
        self.recording = False
        for sub in self.subscriptions_map.values():
            self.destroy_subscription(sub)
        self.subscriptions_map.clear()
        if self.writer is not None:
            self.writer.close()
            self.writer = None
        response.success = True
        response.message = 'Recording stopped and bag finalized.'
        return response

    def save_cb(self, request, response) -> object:
        """Handle save/segment service call."""
        # Finalize the current segment and immediately open a new one,
        # keeping subscriptions alive so recording continues uninterrupted.
        if not self.recording:
            response.success = False
            response.message = 'Not recording; nothing to save.'
            return response
        saved_uri = self.current_uri
        if self.writer is not None:
            self.writer.close()
            self.writer = None
        self._open_writer()  # known_topics reset; re-registered lazily on next write
        response.success = True
        response.message = f'Saved {saved_uri}; continuing in {self.current_uri}'
        return response


def main() -> None:
    """Main entry point for the rosbag recorder node."""
    rclpy.init()
    node = RosbagRecorderNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node.recording:
            for sub in node.subscriptions_map.values():
                node.destroy_subscription(sub)
            if node.writer is not None:
                node.writer.close()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()