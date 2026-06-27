// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_posture.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__TRAITS_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartesian_control_msgs/msg/detail/cartesian_posture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cartesian_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianPosture & msg,
  std::ostream & out)
{
  out << "{";
  // member: posture_joint_names
  {
    if (msg.posture_joint_names.size() == 0) {
      out << "posture_joint_names: []";
    } else {
      out << "posture_joint_names: [";
      size_t pending_items = msg.posture_joint_names.size();
      for (auto item : msg.posture_joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: posture_joint_values
  {
    if (msg.posture_joint_values.size() == 0) {
      out << "posture_joint_values: []";
    } else {
      out << "posture_joint_values: [";
      size_t pending_items = msg.posture_joint_values.size();
      for (auto item : msg.posture_joint_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianPosture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posture_joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.posture_joint_names.size() == 0) {
      out << "posture_joint_names: []\n";
    } else {
      out << "posture_joint_names:\n";
      for (auto item : msg.posture_joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: posture_joint_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.posture_joint_values.size() == 0) {
      out << "posture_joint_values: []\n";
    } else {
      out << "posture_joint_values:\n";
      for (auto item : msg.posture_joint_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianPosture & msg, bool use_flow_style = false)
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
  const cartesian_control_msgs::msg::CartesianPosture & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartesian_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartesian_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartesian_control_msgs::msg::CartesianPosture & msg)
{
  return cartesian_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartesian_control_msgs::msg::CartesianPosture>()
{
  return "cartesian_control_msgs::msg::CartesianPosture";
}

template<>
inline const char * name<cartesian_control_msgs::msg::CartesianPosture>()
{
  return "cartesian_control_msgs/msg/CartesianPosture";
}

template<>
struct has_fixed_size<cartesian_control_msgs::msg::CartesianPosture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartesian_control_msgs::msg::CartesianPosture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartesian_control_msgs::msg::CartesianPosture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__TRAITS_HPP_
