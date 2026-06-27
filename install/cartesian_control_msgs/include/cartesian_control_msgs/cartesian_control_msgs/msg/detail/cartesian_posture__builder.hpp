// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_posture.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__BUILDER_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartesian_control_msgs/msg/detail/cartesian_posture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartesian_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianPosture_posture_joint_values
{
public:
  explicit Init_CartesianPosture_posture_joint_values(::cartesian_control_msgs::msg::CartesianPosture & msg)
  : msg_(msg)
  {}
  ::cartesian_control_msgs::msg::CartesianPosture posture_joint_values(::cartesian_control_msgs::msg::CartesianPosture::_posture_joint_values_type arg)
  {
    msg_.posture_joint_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianPosture msg_;
};

class Init_CartesianPosture_posture_joint_names
{
public:
  Init_CartesianPosture_posture_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianPosture_posture_joint_values posture_joint_names(::cartesian_control_msgs::msg::CartesianPosture::_posture_joint_names_type arg)
  {
    msg_.posture_joint_names = std::move(arg);
    return Init_CartesianPosture_posture_joint_values(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianPosture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartesian_control_msgs::msg::CartesianPosture>()
{
  return cartesian_control_msgs::msg::builder::Init_CartesianPosture_posture_joint_names();
}

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__BUILDER_HPP_
