import rclpy
from rclpy.action import ActionClient
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
import time

rclpy.init()
node = rclpy.create_node('latency_test')
client = ActionClient(node, FollowJointTrajectory, '/left_joint_trajectory_controller/follow_joint_trajectory')
client.wait_for_server()

joint_names = [f"openarm_left_joint{i}" for i in range(1, 8)]

STEP = -0.01  # rad, single loop step (negative direction for left arm)
HORIZON_S = 0.05  # time_from_start for this single point, ~one 20Hz loop period

# Single loop iteration: one goal, starting from 0.0
start = time.time()
goal = FollowJointTrajectory.Goal()
goal.trajectory.joint_names = joint_names
point = JointTrajectoryPoint()
point.positions = [STEP] * 7
point.time_from_start.sec = 0
point.time_from_start.nanosec = int(HORIZON_S * 1e9)
goal.trajectory.points = [point]

future = client.send_goal_async(goal)
rclpy.spin_until_future_complete(node, future)
goal_handle = future.result()
accept_elapsed = time.time() - start
print(f"Goal accepted in {accept_elapsed*1000:.2f} ms")

result_future = goal_handle.get_result_async()
rclpy.spin_until_future_complete(node, result_future)
total_elapsed = time.time() - start
print(f"Full result received in {total_elapsed*1000:.2f} ms")

node.destroy_node()
rclpy.shutdown()


