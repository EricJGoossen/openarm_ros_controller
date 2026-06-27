// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice
#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "cartesian_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_serialize_cartesian_control_msgs__msg__CartesianTolerance(
  const cartesian_control_msgs__msg__CartesianTolerance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_deserialize_cartesian_control_msgs__msg__CartesianTolerance(
  eprosima::fastcdr::Cdr &,
  cartesian_control_msgs__msg__CartesianTolerance * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t get_serialized_size_cartesian_control_msgs__msg__CartesianTolerance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t max_serialized_size_cartesian_control_msgs__msg__CartesianTolerance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_serialize_key_cartesian_control_msgs__msg__CartesianTolerance(
  const cartesian_control_msgs__msg__CartesianTolerance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t get_serialized_size_key_cartesian_control_msgs__msg__CartesianTolerance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t max_serialized_size_key_cartesian_control_msgs__msg__CartesianTolerance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_control_msgs, msg, CartesianTolerance)();

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
