#!/usr/bin/env bash
set -e

# === Config — adjust if your paths/interfaces change ===
PROJECT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

WORKSPACE_DIR="/openarm_ws"

echo "==> Bringing up CAN interfaces (can4, can5)..."
sudo ip link set can4 down 2>/dev/null || true
sudo ip link set can4 type can bitrate 1000000 dbitrate 5000000 fd on
sudo ip link set can4 up

sudo ip link set can5 down 2>/dev/null || true
sudo ip link set can5 type can bitrate 1000000 dbitrate 5000000 fd on
sudo ip link set can5 up

echo "==> CAN interface status:"
ip -br link show type can

echo "==> Starting/attaching devcontainer..."
devcontainer up --workspace-folder "$PROJECT_DIR"

echo "==> Building workspace and dropping into shell..."
devcontainer exec --workspace-folder "$PROJECT_DIR" bash -lc "
  cd $WORKSPACE_DIR &&
  colcon build --packages-ignore openarm_bimanual_moveit_config &&
  source install/setup.bash &&
  cd ./src && 
  echo '=== Ready. Run your ros2 launch command now. ===' &&
  exec bash 
"
