// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_tolerance.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__TRAITS_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position_error'
// Member 'orientation_error'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'twist_error'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration_error'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace cartesian_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianTolerance & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_error
  {
    out << "position_error: ";
    to_flow_style_yaml(msg.position_error, out);
    out << ", ";
  }

  // member: orientation_error
  {
    out << "orientation_error: ";
    to_flow_style_yaml(msg.orientation_error, out);
    out << ", ";
  }

  // member: twist_error
  {
    out << "twist_error: ";
    to_flow_style_yaml(msg.twist_error, out);
    out << ", ";
  }

  // member: acceleration_error
  {
    out << "acceleration_error: ";
    to_flow_style_yaml(msg.acceleration_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_error:\n";
    to_block_style_yaml(msg.position_error, out, indentation + 2);
  }

  // member: orientation_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_error:\n";
    to_block_style_yaml(msg.orientation_error, out, indentation + 2);
  }

  // member: twist_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_error:\n";
    to_block_style_yaml(msg.twist_error, out, indentation + 2);
  }

  // member: acceleration_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_error:\n";
    to_block_style_yaml(msg.acceleration_error, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianTolerance & msg, bool use_flow_style = false)
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
  const cartesian_control_msgs::msg::CartesianTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartesian_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartesian_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartesian_control_msgs::msg::CartesianTolerance & msg)
{
  return cartesian_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartesian_control_msgs::msg::CartesianTolerance>()
{
  return "cartesian_control_msgs::msg::CartesianTolerance";
}

template<>
inline const char * name<cartesian_control_msgs::msg::CartesianTolerance>()
{
  return "cartesian_control_msgs/msg/CartesianTolerance";
}

template<>
struct has_fixed_size<cartesian_control_msgs::msg::CartesianTolerance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<cartesian_control_msgs::msg::CartesianTolerance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<cartesian_control_msgs::msg::CartesianTolerance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__TRAITS_HPP_
