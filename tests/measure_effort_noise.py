import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
import time
import statistics


SAMPLE_DURATION_S = 5.0


class EffortNoiseProbe(Node):
    def __init__(self):
        super().__init__('effort_noise_probe')
        self.samples = {}  # joint_name -> list of effort readings
        self.sub = self.create_subscription(
            JointState, '/joint_states', self._cb, 50)

    def _cb(self, msg: JointState):
        for name, effort in zip(msg.name, msg.effort):
            self.samples.setdefault(name, []).append(effort)


def main():
    rclpy.init()
    node = EffortNoiseProbe()

    print(f"Sampling /joint_states effort for {SAMPLE_DURATION_S} seconds...")
    print("(Make sure the arms are holding still in their current pose.)\n")

    start = time.time()
    while time.time() - start < SAMPLE_DURATION_S:
        rclpy.spin_once(node, timeout_sec=0.02)

    if not node.samples:
        print("No /joint_states messages received. Is the launch running?")
        node.destroy_node()
        rclpy.shutdown()
        return

    print(f"{'Joint':35s} {'N':>5s} {'Mean':>10s} {'Std':>10s} {'Min':>10s} {'Max':>10s} {'P2P':>10s}")
    print("-" * 95)

    worst_std = 0.0
    worst_p2p = 0.0

    for name in sorted(node.samples.keys()):
        vals = node.samples[name]
        n = len(vals)
        mean = statistics.fmean(vals)
        std = statistics.pstdev(vals) if n > 1 else 0.0
        vmin = min(vals)
        vmax = max(vals)
        p2p = vmax - vmin

        worst_std = max(worst_std, std)
        worst_p2p = max(worst_p2p, p2p)

        print(f"{name:35s} {n:5d} {mean:10.4f} {std:10.4f} {vmin:10.4f} {vmax:10.4f} {p2p:10.4f}")

    print("\n" + "=" * 95)
    print(f"Worst-case std across all joints:        {worst_std:.4f}")
    print(f"Worst-case peak-to-peak across all joints: {worst_p2p:.4f}")
    print(f"\nSuggested EFFORT_CHANGE_THRESHOLD (3x worst std): {3 * worst_std:.4f}")
    print(f"Suggested EFFORT_CHANGE_THRESHOLD (1.5x worst p2p): {1.5 * worst_p2p:.4f}")

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


