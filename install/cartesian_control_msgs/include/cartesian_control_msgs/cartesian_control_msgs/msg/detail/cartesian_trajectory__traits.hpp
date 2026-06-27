// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__TRAITS_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartesian_control_msgs/msg/detail/cartesian_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'points'
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__traits.hpp"

namespace cartesian_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: controlled_frame
  {
    out << "controlled_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.controlled_frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: controlled_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controlled_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.controlled_frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianTrajectory & msg, bool use_flow_style = false)
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
  const cartesian_control_msgs::msg::CartesianTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartesian_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartesian_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartesian_control_msgs::msg::CartesianTrajectory & msg)
{
  return cartesian_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartesian_control_msgs::msg::CartesianTrajectory>()
{
  return "cartesian_control_msgs::msg::CartesianTrajectory";
}

template<>
inline const char * name<cartesian_control_msgs::msg::CartesianTrajectory>()
{
  return "cartesian_control_msgs/msg/CartesianTrajectory";
}

template<>
struct has_fixed_size<cartesian_control_msgs::msg::CartesianTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartesian_control_msgs::msg::CartesianTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartesian_control_msgs::msg::CartesianTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__TRAITS_HPP_
