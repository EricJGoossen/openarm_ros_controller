FROM ros:jazzy-ros-base

ENV DEBIAN_FRONTEND=noninteractive

# Install ROS2 Jazzy packages (repo already configured in base image)
RUN apt-get update && apt-get install -y \
  tree \
  ros-jazzy-desktop \
  ros-jazzy-controller-manager \
  ros-jazzy-gripper-controllers \
  ros-jazzy-hardware-interface \
  ros-jazzy-joint-state-broadcaster \
  ros-jazzy-joint-trajectory-controller \
  ros-jazzy-joint-state-publisher \
  ros-jazzy-joint-state-publisher-gui \
  ros-jazzy-xacro \
  ros-jazzy-ros2-controllers \
  ros-jazzy-ros2-control-test-assets \
  software-properties-common \
  python3-rosdep \
  python3-colcon-common-extensions \
  && rm -rf /var/lib/apt/lists/*

# Install openarm_can via PPA
RUN add-apt-repository -y ppa:openarm/main \
  && apt-get update && apt-get install -y \
  libopenarm-can-dev \
  openarm-can-utils \
  && rm -rf /var/lib/apt/lists/*

RUN echo "source /opt/ros/jazzy/setup.bash" >> /root/.bashrc

WORKDIR /openarm_ws
CMD ["bash"]