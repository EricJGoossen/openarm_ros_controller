// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartesian_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.h"
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__functions.h"
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

#include "geometry_msgs/msg/detail/accel__functions.h"  // acceleration_error
#include "geometry_msgs/msg/detail/twist__functions.h"  // twist_error
#include "geometry_msgs/msg/detail/vector3__functions.h"  // orientation_error, position_error

// forward declare type support functions

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

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _CartesianTolerance__ros_msg_type = cartesian_control_msgs__msg__CartesianTolerance;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_serialize_cartesian_control_msgs__msg__CartesianTolerance(
  const cartesian_control_msgs__msg__CartesianTolerance * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position_error
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->position_error, cdr);
  }

  // Field name: orientation_error
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->orientation_error, cdr);
  }

  // Field name: twist_error
  {
    cdr_serialize_geometry_msgs__msg__Twist(
      &ros_message->twist_error, cdr);
  }

  // Field name: acceleration_error
  {
    cdr_serialize_geometry_msgs__msg__Accel(
      &ros_message->acceleration_error, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_deserialize_cartesian_control_msgs__msg__CartesianTolerance(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs__msg__CartesianTolerance * ros_message)
{
  // Field name: position_error
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->position_error);
  }

  // Field name: orientation_error
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->orientation_error);
  }

  // Field name: twist_error
  {
    cdr_deserialize_geometry_msgs__msg__Twist(cdr, &ros_message->twist_error);
  }

  // Field name: acceleration_error
  {
    cdr_deserialize_geometry_msgs__msg__Accel(cdr, &ros_message->acceleration_error);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t get_serialized_size_cartesian_control_msgs__msg__CartesianTolerance(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianTolerance__ros_msg_type * ros_message = static_cast<const _CartesianTolerance__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position_error
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->position_error), current_alignment);

  // Field name: orientation_error
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->orientation_error), current_alignment);

  // Field name: twist_error
  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->twist_error), current_alignment);

  // Field name: acceleration_error
  current_alignment += get_serialized_size_geometry_msgs__msg__Accel(
    &(ros_message->acceleration_error), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t max_serialized_size_cartesian_control_msgs__msg__CartesianTolerance(
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

  // Field name: position_error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: orientation_error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: twist_error
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

  // Field name: acceleration_error
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs__msg__CartesianTolerance;
    is_plain =
      (
      offsetof(DataType, acceleration_error) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
bool cdr_serialize_key_cartesian_control_msgs__msg__CartesianTolerance(
  const cartesian_control_msgs__msg__CartesianTolerance * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: position_error
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->position_error, cdr);
  }

  // Field name: orientation_error
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->orientation_error, cdr);
  }

  // Field name: twist_error
  {
    cdr_serialize_key_geometry_msgs__msg__Twist(
      &ros_message->twist_error, cdr);
  }

  // Field name: acceleration_error
  {
    cdr_serialize_key_geometry_msgs__msg__Accel(
      &ros_message->acceleration_error, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t get_serialized_size_key_cartesian_control_msgs__msg__CartesianTolerance(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianTolerance__ros_msg_type * ros_message = static_cast<const _CartesianTolerance__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: position_error
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->position_error), current_alignment);

  // Field name: orientation_error
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->orientation_error), current_alignment);

  // Field name: twist_error
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
    &(ros_message->twist_error), current_alignment);

  // Field name: acceleration_error
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Accel(
    &(ros_message->acceleration_error), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_control_msgs
size_t max_serialized_size_key_cartesian_control_msgs__msg__CartesianTolerance(
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
  // Field name: position_error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: orientation_error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: twist_error
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

  // Field name: acceleration_error
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs__msg__CartesianTolerance;
    is_plain =
      (
      offsetof(DataType, acceleration_error) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CartesianTolerance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const cartesian_control_msgs__msg__CartesianTolerance * ros_message = static_cast<const cartesian_control_msgs__msg__CartesianTolerance *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_cartesian_control_msgs__msg__CartesianTolerance(ros_message, cdr);
}

static bool _CartesianTolerance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  cartesian_control_msgs__msg__CartesianTolerance * ros_message = static_cast<cartesian_control_msgs__msg__CartesianTolerance *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_cartesian_control_msgs__msg__CartesianTolerance(cdr, ros_message);
}

static uint32_t _CartesianTolerance__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_control_msgs__msg__CartesianTolerance(
      untyped_ros_message, 0));
}

static size_t _CartesianTolerance__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cartesian_control_msgs__msg__CartesianTolerance(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CartesianTolerance = {
  "cartesian_control_msgs::msg",
  "CartesianTolerance",
  _CartesianTolerance__cdr_serialize,
  _CartesianTolerance__cdr_deserialize,
  _CartesianTolerance__get_serialized_size,
  _CartesianTolerance__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CartesianTolerance__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianTolerance,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_hash,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_description,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_control_msgs, msg, CartesianTolerance)() {
  return &_CartesianTolerance__type_support;
}

#if defined(__cplusplus)
}
#endif
