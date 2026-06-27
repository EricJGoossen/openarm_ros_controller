// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory_point.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/accel__traits.hpp"
// Member 'posture'
#include "cartesian_control_msgs/msg/detail/cartesian_posture__traits.hpp"

namespace cartesian_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianTrajectoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_from_start
  {
    out << "time_from_start: ";
    to_flow_style_yaml(msg.time_from_start, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: jerk
  {
    out << "jerk: ";
    to_flow_style_yaml(msg.jerk, out);
    out << ", ";
  }

  // member: posture
  {
    out << "posture: ";
    to_flow_style_yaml(msg.posture, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_from_start:\n";
    to_block_style_yaml(msg.time_from_start, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jerk:\n";
    to_block_style_yaml(msg.jerk, out, indentation + 2);
  }

  // member: posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posture:\n";
    to_block_style_yaml(msg.posture, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianTrajectoryPoint & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cartesian_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cartesian_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cartesian_control_msgs::msg::CartesianTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartesian_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartesian_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartesian_control_msgs::msg::CartesianTrajectoryPoint & msg)
{
  return cartesian_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartesian_control_msgs::msg::CartesianTrajectoryPoint>()
{
  return "cartesian_control_msgs::msg::CartesianTrajectoryPoint";
}

template<>
inline const char * name<cartesian_control_msgs::msg::CartesianTrajectoryPoint>()
{
  return "cartesian_control_msgs/msg/CartesianTrajectoryPoint";
}

template<>
struct has_fixed_size<cartesian_control_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<cartesian_control_msgs::msg::CartesianPosture>::value && has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<cartesian_control_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<cartesian_control_msgs::msg::CartesianPosture>::value && has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<cartesian_control_msgs::msg::CartesianTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
