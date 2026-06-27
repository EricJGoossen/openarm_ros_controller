// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_tolerance.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__BUILDER_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartesian_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianTolerance_acceleration_error
{
public:
  explicit Init_CartesianTolerance_acceleration_error(::cartesian_control_msgs::msg::CartesianTolerance & msg)
  : msg_(msg)
  {}
  ::cartesian_control_msgs::msg::CartesianTolerance acceleration_error(::cartesian_control_msgs::msg::CartesianTolerance::_acceleration_error_type arg)
  {
    msg_.acceleration_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTolerance msg_;
};

class Init_CartesianTolerance_twist_error
{
public:
  explicit Init_CartesianTolerance_twist_error(::cartesian_control_msgs::msg::CartesianTolerance & msg)
  : msg_(msg)
  {}
  Init_CartesianTolerance_acceleration_error twist_error(::cartesian_control_msgs::msg::CartesianTolerance::_twist_error_type arg)
  {
    msg_.twist_error = std::move(arg);
    return Init_CartesianTolerance_acceleration_error(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTolerance msg_;
};

class Init_CartesianTolerance_orientation_error
{
public:
  explicit Init_CartesianTolerance_orientation_error(::cartesian_control_msgs::msg::CartesianTolerance & msg)
  : msg_(msg)
  {}
  Init_CartesianTolerance_twist_error orientation_error(::cartesian_control_msgs::msg::CartesianTolerance::_orientation_error_type arg)
  {
    msg_.orientation_error = std::move(arg);
    return Init_CartesianTolerance_twist_error(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTolerance msg_;
};

class Init_CartesianTolerance_position_error
{
public:
  Init_CartesianTolerance_position_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianTolerance_orientation_error position_error(::cartesian_control_msgs::msg::CartesianTolerance::_position_error_type arg)
  {
    msg_.position_error = std::move(arg);
    return Init_CartesianTolerance_orientation_error(msg_);
  }

private:
  ::cartesian_control_msgs::msg::CartesianTolerance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartesian_control_msgs::msg::CartesianTolerance>()
{
  return cartesian_control_msgs::msg::builder::Init_CartesianTolerance_position_error();
}

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__BUILDER_HPP_
