// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartesian_control_msgs/msg/detail/cartesian_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartesian_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianTrajectory_controlled_frame
{
public:
  explicit Init_CartesianTrajectory_controlled_frame(::cartesian_control_msgs::msg::CartesianTrajectory & msg)
  : msg_(msg)
  {}
  ::cartesian_control_msgs::msg::CartesianTrajectory controlled_frame(::cartesian_control_msgs::msg::CartesianTrajectory::_controlled_frame_type arg)
  {
    msg_.controlled_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectory msg_;
};

class Init_CartesianTrajectory_points
{
public:
  explicit Init_CartesianTrajectory_points(::cartesian_control_msgs::msg::CartesianTrajectory & msg)
  : msg_(msg)
  {}
  Init_CartesianTrajectory_controlled_frame points(::cartesian_control_msgs::msg::CartesianTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_CartesianTrajectory_controlled_frame(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectory msg_;
};

class Init_CartesianTrajectory_header
{
public:
  Init_CartesianTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianTrajectory_points header(::cartesian_control_msgs::msg::CartesianTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CartesianTrajectory_points(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartesian_control_msgs::msg::CartesianTrajectory>()
{
  return cartesian_control_msgs::msg::builder::Init_CartesianTrajectory_header();
}

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_
