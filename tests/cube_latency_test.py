import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from sensor_msgs.msg import JointState
import time
import threading


LEFT_JOINTS = [f"openarm_left_joint{i}" for i in range(1, 8)]
RIGHT_JOINTS = [f"openarm_right_joint{i}" for i in range(1, 8)]
LEFT_GRIPPER = ["openarm_left_finger_joint1"]
RIGHT_GRIPPER = ["openarm_right_finger_joint1"]


# Final grasp pose (index 0-6 == joint1-7)
LEFT_FINAL = [-0.3, -0.15, 0.0, 0.0, 1.6, 0.0, -1.6]
RIGHT_FINAL = [0.35, 0.1, 0.0, 0.0, -1.6, 0.0, 1.6]


GRIPPER_OPEN_LEFT = 0.0     # left gripper: 0.0 = open
GRIPPER_CLOSED_LEFT = -0.044
GRIPPER_OPEN_RIGHT = 0.044    # right gripper: 0.044 = open
GRIPPER_CLOSED_RIGHT = 0.0

# NOTE: this threshold was tuned for TORQUE (effort), not velocity.
# Velocity noise floor has not been characterized -- run a noise probe
# on /joint_states velocity before trusting this value.
VELOCITY_CHANGE_THRESHOLD = 0.08


class LatencyTest(Node):
    def __init__(self):
        super().__init__('latency_test')

        self.left_arm_client = ActionClient(
            self, FollowJointTrajectory, '/left_joint_trajectory_controller/follow_joint_trajectory')
        self.right_arm_client = ActionClient(
            self, FollowJointTrajectory, '/right_joint_trajectory_controller/follow_joint_trajectory')
        self.left_gripper_client = ActionClient(
            self, FollowJointTrajectory, '/left_gripper_controller/follow_joint_trajectory')
        self.right_gripper_client = ActionClient(
            self, FollowJointTrajectory, '/right_gripper_controller/follow_joint_trajectory')

        self.right_velocity = {name: 0.0 for name in RIGHT_JOINTS}
        self.right_velocity_lock = threading.Lock()
        self.joint_state_sub = self.create_subscription(
            JointState, '/joint_states', self._joint_state_cb, 50)

    def _joint_state_cb(self, msg: JointState):
        with self.right_velocity_lock:
            for name, velocity in zip(msg.name, msg.velocity):
                if name in self.right_velocity:
                    self.right_velocity[name] = velocity

    def get_right_velocity_snapshot(self):
        with self.right_velocity_lock:
            return dict(self.right_velocity)

    def get_right_velocity_averaged(self, duration_s=0.5, poll_interval_s=0.02):
        """Sample velocity repeatedly over duration_s and return the per-joint mean,
        to avoid a single noisy/fluke sample being used as the baseline."""
        sums = {name: 0.0 for name in RIGHT_JOINTS}
        count = 0
        start = time.time()
        while time.time() - start < duration_s:
            rclpy.spin_once(self, timeout_sec=poll_interval_s)
            current = self.get_right_velocity_snapshot()
            for name in RIGHT_JOINTS:
                sums[name] += current[name]
            count += 1
        if count == 0:
            return self.get_right_velocity_snapshot()
        return {name: sums[name] / count for name in RIGHT_JOINTS}

    def send_trajectory(self, client: ActionClient, joint_names, positions, duration_sec=0, duration_nsec=0, wait=True):
        client.wait_for_server()
        goal = FollowJointTrajectory.Goal()
        goal.trajectory.joint_names = joint_names
        point = JointTrajectoryPoint()
        point.positions = positions
        point.time_from_start.sec = duration_sec
        point.time_from_start.nanosec = duration_nsec
        goal.trajectory.points = [point]

        send_time = time.time()
        future = client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self, future)
        goal_handle = future.result()

        if wait:
            result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self, result_future)

        return send_time, goal_handle


def main():
    rclpy.init()
    node = LatencyTest()

    try:
        print("=== Stage 0: opening both grippers ===")
        node.send_trajectory(node.left_gripper_client, LEFT_GRIPPER, [GRIPPER_OPEN_LEFT])
        node.send_trajectory(node.right_gripper_client, RIGHT_GRIPPER, [GRIPPER_OPEN_RIGHT])
        print("Both grippers commanded open.")

        print("=== Stage 1: moving joint1 + joint2 on both arms ===")
        left_stage1 = [LEFT_FINAL[0], LEFT_FINAL[1], 0.0, 0.0, 0.0, 0.0, 0.0]
        right_stage1 = [RIGHT_FINAL[0], RIGHT_FINAL[1], 0.0, 0.0, 0.0, 0.0, 0.0]
        node.send_trajectory(node.left_arm_client, LEFT_JOINTS, left_stage1, wait=False)
        node.send_trajectory(node.right_arm_client, RIGHT_JOINTS, right_stage1)
        print("Stage 1 complete.")
        time.sleep(0.5)

        print("=== Stage 2: moving joint5 + joint7 on both arms (final grasp pose) ===")
        node.send_trajectory(node.left_arm_client, LEFT_JOINTS, LEFT_FINAL, wait=False)
        node.send_trajectory(node.right_arm_client, RIGHT_JOINTS, RIGHT_FINAL)
        print("Stage 2 complete. Arms should be in final grasp pose.")

        input("\nPosition the cube between the grippers, then press Enter to close both grippers over 5 seconds...")

        print("=== Closing both grippers over 5 seconds ===")
        node.send_trajectory(node.left_gripper_client, LEFT_GRIPPER, [GRIPPER_CLOSED_LEFT], duration_sec=5, wait=False)
        node.send_trajectory(node.right_gripper_client, RIGHT_GRIPPER, [GRIPPER_CLOSED_RIGHT], duration_sec=5)
        print("Grippers closed (or commanded closed).")

        input("\nConfirm both grippers have a secure grasp on the cube, then press Enter to begin the latency test...")

        # Capture baseline velocity on the right arm before any retraction motion,
        # averaged over a window to avoid a single noisy/fluke sample
        print("\nCapturing baseline velocity (averaged over 0.5s)...")
        baseline_velocity = node.get_right_velocity_averaged(duration_s=0.5)
        print("\nBaseline right-arm velocity (before retraction):")
        for name, val in baseline_velocity.items():
            print(f"  {name}: {val:.4f}")

        # Retraction target: left arm's joint2 goes from -0.15 back to -0.5
        retract_positions = list(LEFT_FINAL)
        retract_positions[1] = -0.5  # joint2 index

        print("\n=== Sending retraction command to LEFT arm, timing right-arm velocity response ===")
        send_time, _ = node.send_trajectory(
            node.left_arm_client, LEFT_JOINTS, retract_positions, wait=False)

        detected = False
        detect_time = None
        timeout_s = 5.0
        poll_start = time.time()

        while time.time() - poll_start < timeout_s:
            rclpy.spin_once(node, timeout_sec=0.005)
            current = node.get_right_velocity_snapshot()
            for name in RIGHT_JOINTS:
                delta = abs(current[name] - baseline_velocity[name])
                if delta > VELOCITY_CHANGE_THRESHOLD:
                    detect_time = time.time()
                    print(f"  Detected velocity change on {name}: "
                          f"baseline={baseline_velocity[name]:.4f}, now={current[name]:.4f}, delta={delta:.4f}")
                    detected = True
                    break
            if detected:
                break

        if detected:
            latency_ms = (detect_time - send_time) * 1000.0
            print(f"\n*** Latency from command send to detected right-arm velocity change: {latency_ms:.2f} ms ***")
        else:
            print(f"\nNo velocity change above threshold ({VELOCITY_CHANGE_THRESHOLD}) detected within {timeout_s}s.")
            final = node.get_right_velocity_snapshot()
            for name, val in final.items():
                delta = val - baseline_velocity[name]
                print(f"  {name}: {val:.4f} (delta from baseline: {delta:+.4f})")

        input("\nLatency measurement complete. Press Enter to return both arms to zero position...")

        print("\n=== Opening both grippers before retracting ===")
        node.send_trajectory(node.left_gripper_client, LEFT_GRIPPER, [GRIPPER_OPEN_LEFT])
        node.send_trajectory(node.right_gripper_client, RIGHT_GRIPPER, [GRIPPER_OPEN_RIGHT])
        print("Both grippers commanded open.")
        time.sleep(0.25)

        print("\n=== Returning arms to zero (staged) ===")
        print("--- Retracting joint5 + joint7 first ---")
        left_unwind1 = [retract_positions[0], retract_positions[1], 0.0, 0.0, 0.0, 0.0, 0.0]
        right_unwind1 = [RIGHT_FINAL[0], RIGHT_FINAL[1], 0.0, 0.0, 0.0, 0.0, 0.0]
        node.send_trajectory(node.left_arm_client, LEFT_JOINTS, left_unwind1, wait=False)
        node.send_trajectory(node.right_arm_client, RIGHT_JOINTS, right_unwind1)
        print("Stage complete.")
        time.sleep(0.5)

        print("--- Retracting joint2 to zero ---")
        joint2_zero = [retract_positions[0], 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        node.send_trajectory(node.left_arm_client, LEFT_JOINTS, joint2_zero, wait=False)
        right_joint2_zero = [RIGHT_FINAL[0], 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        node.send_trajectory(node.right_arm_client, RIGHT_JOINTS, right_joint2_zero)
        print("Stage complete.")
        time.sleep(0.5)

        print("--- Retracting joint1 to zero ---")
        zero_pose = [0.0] * 7
        node.send_trajectory(node.left_arm_client, LEFT_JOINTS, zero_pose, wait=False)
        node.send_trajectory(node.right_arm_client, RIGHT_JOINTS, zero_pose)
        print("Both arms at zero position.")

    except Exception as e:
        print(f"\nERROR during test: {e}")
    finally:
        print("\n=== Cleaning up ===")
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()


