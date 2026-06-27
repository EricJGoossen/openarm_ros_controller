// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartesian_control_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartesian_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.h"
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/duration__functions.h"  // time_from_start
#include "cartesian_control_msgs/msg/detail/cartesian_posture__functions.h"  // posture
#include "geometry_msgs/msg/detail/accel__functions.h"  // acceleration, jerk
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "geometry_msgs/msg/detail/twist__functions.h"  // twist

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_deserialize_builtin_interfaces__msg__Duration(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Duration * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();

bool cdr_serialize_cartesian_control_msgs__msg__CartesianPosture(
  const cartesian_control_msgs__msg__CartesianPosture * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_cartesian_control_msgs__msg__CartesianPosture(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs__msg__CartesianPosture * ros_message);

size_t get_serialized_size_cartesian_control_msgs__msg__CartesianPosture(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartesian_control_msgs__msg__CartesianPosture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_cartesian_control_msgs__msg__CartesianPosture(
  const cartesian_control_msgs__msg__CartesianPosture * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_cartesian_control_msgs__msg__CartesianPosture(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_cartesian_control_msgs__msg__CartesianPosture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_control_msgs, msg, CartesianPosture)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_geometry_msgs__msg__Accel(
  const geometry_msgs__msg__Accel * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Accel(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Accel * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Accel(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Accel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Accel(
  const geometry_msgs__msg__Accel * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Accel(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Accel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Accel)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Twist(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Twist * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();


using _CartesianTrajectoryPoint__ros_msg_type = cartesian_control_msgs__msg__CartesianTrajectoryPoint;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_serialize_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: time_from_start
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->time_from_start, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: twist
  {
    cdr_serialize_geometry_msgs__msg__Twist(
      &ros_message->twist, cdr);
  }

  // Field name: acceleration
  {
    cdr_serialize_geometry_msgs__msg__Accel(
      &ros_message->acceleration, cdr);
  }

  // Field name: jerk
  {
    cdr_serialize_geometry_msgs__msg__Accel(
      &ros_message->jerk, cdr);
  }

  // Field name: posture
  {
    cdr_serialize_cartesian_control_msgs__msg__CartesianPosture(
      &ros_message->posture, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_deserialize_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * ros_message)
{
  // Field name: time_from_start
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->time_from_start);
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  // Field name: twist
  {
    cdr_deserialize_geometry_msgs__msg__Twist(cdr, &ros_message->twist);
  }

  // Field name: acceleration
  {
    cdr_deserialize_geometry_msgs__msg__Accel(cdr, &ros_message->acceleration);
  }

  // Field name: jerk
  {
    cdr_deserialize_geometry_msgs__msg__Accel(cdr, &ros_message->jerk);
  }

  // Field name: posture
  {
    cdr_deserialize_cartesian_control_msgs__msg__CartesianPosture(cdr, &ros_message->posture);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t get_serialized_size_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianTrajectoryPoint__ros_msg_type * ros_message = static_cast<const _CartesianTrajectoryPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: time_from_start
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->time_from_start), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: twist
  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->twist), current_alignment);

  // Field name: acceleration
  current_alignment += get_serialized_size_geometry_msgs__msg__Accel(
    &(ros_message->acceleration), current_alignment);

  // Field name: jerk
  current_alignment += get_serialized_size_geometry_msgs__msg__Accel(
    &(ros_message->jerk), current_alignment);

  // Field name: posture
  current_alignment += get_serialized_size_cartesian_control_msgs__msg__CartesianPosture(
    &(ros_message->posture), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t max_serialized_size_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: time_from_start
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: twist
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Accel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: jerk
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Accel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: posture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cartesian_control_msgs__msg__CartesianPosture(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs__msg__CartesianTrajectoryPoint;
    is_plain =
      (
      offsetof(DataType, posture) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_serialize_key_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: time_from_start
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->time_from_start, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: twist
  {
    cdr_serialize_key_geometry_msgs__msg__Twist(
      &ros_message->twist, cdr);
  }

  // Field name: acceleration
  {
    cdr_serialize_key_geometry_msgs__msg__Accel(
      &ros_message->acceleration, cdr);
  }

  // Field name: jerk
  {
    cdr_serialize_key_geometry_msgs__msg__Accel(
      &ros_message->jerk, cdr);
  }

  // Field name: posture
  {
    cdr_serialize_key_cartesian_control_msgs__msg__CartesianPosture(
      &ros_message->posture, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t get_serialized_size_key_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianTrajectoryPoint__ros_msg_type * ros_message = static_cast<const _CartesianTrajectoryPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: time_from_start
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->time_from_start), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: twist
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
    &(ros_message->twist), current_alignment);

  // Field name: acceleration
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Accel(
    &(ros_message->acceleration), current_alignment);

  // Field name: jerk
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Accel(
    &(ros_message->jerk), current_alignment);

  // Field name: posture
  current_alignment += get_serialized_size_key_cartesian_control_msgs__msg__CartesianPosture(
    &(ros_message->posture), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t max_serialized_size_key_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: time_from_start
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: twist
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Accel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: jerk
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Accel(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: posture
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_cartesian_control_msgs__msg__CartesianPosture(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs__msg__CartesianTrajectoryPoint;
    is_plain =
      (
      offsetof(DataType, posture) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CartesianTrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint * ros_message = static_cast<const cartesian_control_msgs__msg__CartesianTrajectoryPoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_cartesian_control_msgs__msg__CartesianTrajectoryPoint(ros_message, cdr);
}

static bool _CartesianTrajectoryPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * ros_message = static_cast<cartesian_control_msgs__msg__CartesianTrajectoryPoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_cartesian_control_msgs__msg__CartesianTrajectoryPoint(cdr, ros_message);
}

static uint32_t _CartesianTrajectoryPoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
      untyped_ros_message, 0));
}

static size_t _CartesianTrajectoryPoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cartesian_control_msgs__msg__CartesianTrajectoryPoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CartesianTrajectoryPoint = {
  "cartesian_control_msgs::msg",
  "CartesianTrajectoryPoint",
  _CartesianTrajectoryPoint__cdr_serialize,
  _CartesianTrajectoryPoint__cdr_deserialize,
  _CartesianTrajectoryPoint__get_serialized_size,
  _CartesianTrajectoryPoint__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CartesianTrajectoryPoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianTrajectoryPoint,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianTrajectoryPoint__get_type_hash,
  &cartesian_control_msgs__msg__CartesianTrajectoryPoint__get_type_description,
  &cartesian_control_msgs__msg__CartesianTrajectoryPoint__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_control_msgs, msg, CartesianTrajectoryPoint)() {
  return &_CartesianTrajectoryPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
