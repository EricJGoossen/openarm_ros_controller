// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory_point.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartesian_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianTrajectoryPoint_posture
{
public:
  explicit Init_CartesianTrajectoryPoint_posture(::cartesian_control_msgs::msg::CartesianTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::cartesian_control_msgs::msg::CartesianTrajectoryPoint posture(::cartesian_control_msgs::msg::CartesianTrajectoryPoint::_posture_type arg)
  {
    msg_.posture = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectoryPoint msg_;
};

class Init_CartesianTrajectoryPoint_jerk
{
public:
  explicit Init_CartesianTrajectoryPoint_jerk(::cartesian_control_msgs::msg::CartesianTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_CartesianTrajectoryPoint_posture jerk(::cartesian_control_msgs::msg::CartesianTrajectoryPoint::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_CartesianTrajectoryPoint_posture(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectoryPoint msg_;
};

class Init_CartesianTrajectoryPoint_acceleration
{
public:
  explicit Init_CartesianTrajectoryPoint_acceleration(::cartesian_control_msgs::msg::CartesianTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_CartesianTrajectoryPoint_jerk acceleration(::cartesian_control_msgs::msg::CartesianTrajectoryPoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_CartesianTrajectoryPoint_jerk(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectoryPoint msg_;
};

class Init_CartesianTrajectoryPoint_twist
{
public:
  explicit Init_CartesianTrajectoryPoint_twist(::cartesian_control_msgs::msg::CartesianTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_CartesianTrajectoryPoint_acceleration twist(::cartesian_control_msgs::msg::CartesianTrajectoryPoint::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_CartesianTrajectoryPoint_acceleration(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectoryPoint msg_;
};

class Init_CartesianTrajectoryPoint_pose
{
public:
  explicit Init_CartesianTrajectoryPoint_pose(::cartesian_control_msgs::msg::CartesianTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_CartesianTrajectoryPoint_twist pose(::cartesian_control_msgs::msg::CartesianTrajectoryPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CartesianTrajectoryPoint_twist(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectoryPoint msg_;
};

class Init_CartesianTrajectoryPoint_time_from_start
{
public:
  Init_CartesianTrajectoryPoint_time_from_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianTrajectoryPoint_pose time_from_start(::cartesian_control_msgs::msg::CartesianTrajectoryPoint::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return Init_CartesianTrajectoryPoint_pose(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartesian_control_msgs::msg::CartesianTrajectoryPoint>()
{
  return cartesian_control_msgs::msg::builder::Init_CartesianTrajectoryPoint_time_from_start();
}

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_
