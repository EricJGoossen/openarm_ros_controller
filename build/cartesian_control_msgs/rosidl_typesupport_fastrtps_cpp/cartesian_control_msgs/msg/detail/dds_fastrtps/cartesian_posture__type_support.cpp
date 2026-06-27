// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice
#include "cartesian_control_msgs/msg/detail/cartesian_posture__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cartesian_control_msgs/msg/detail/cartesian_posture__functions.h"
#include "cartesian_control_msgs/msg/detail/cartesian_posture__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cartesian_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::msg::CartesianPosture & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: posture_joint_names
  {
    cdr << ros_message.posture_joint_names;
  }

  // Member: posture_joint_values
  {
    cdr << ros_message.posture_joint_values;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::msg::CartesianPosture & ros_message)
{
  // Member: posture_joint_names
  {
    cdr >> ros_message.posture_joint_names;
  }

  // Member: posture_joint_values
  {
    cdr >> ros_message.posture_joint_values;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::msg::CartesianPosture & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: posture_joint_names
  {
    size_t array_size = ros_message.posture_joint_names.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.posture_joint_names[index].size() + 1);
    }
  }

  // Member: posture_joint_values
  {
    size_t array_size = ros_message.posture_joint_values.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.posture_joint_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_CartesianPosture(
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

  // Member: posture_joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: posture_joint_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs::msg::CartesianPosture;
    is_plain =
      (
      offsetof(DataType, posture_joint_values) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::msg::CartesianPosture & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: posture_joint_names
  {
    cdr << ros_message.posture_joint_names;
  }

  // Member: posture_joint_values
  {
    cdr << ros_message.posture_joint_values;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::msg::CartesianPosture & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: posture_joint_names
  {
    size_t array_size = ros_message.posture_joint_names.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.posture_joint_names[index].size() + 1);
    }
  }

  // Member: posture_joint_values
  {
    size_t array_size = ros_message.posture_joint_values.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.posture_joint_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_CartesianPosture(
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

  // Member: posture_joint_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: posture_joint_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs::msg::CartesianPosture;
    is_plain =
      (
      offsetof(DataType, posture_joint_values) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _CartesianPosture__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::msg::CartesianPosture *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianPosture__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::msg::CartesianPosture *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianPosture__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::msg::CartesianPosture *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianPosture__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CartesianPosture(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CartesianPosture__callbacks = {
  "cartesian_control_msgs::msg",
  "CartesianPosture",
  _CartesianPosture__cdr_serialize,
  _CartesianPosture__cdr_deserialize,
  _CartesianPosture__get_serialized_size,
  _CartesianPosture__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CartesianPosture__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianPosture__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianPosture__get_type_hash,
  &cartesian_control_msgs__msg__CartesianPosture__get_type_description,
  &cartesian_control_msgs__msg__CartesianPosture__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::msg::CartesianPosture>()
{
  return &cartesian_control_msgs::msg::typesupport_fastrtps_cpp::_CartesianPosture__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, msg, CartesianPosture)() {
  return &cartesian_control_msgs::msg::typesupport_fastrtps_cpp::_CartesianPosture__handle;
}

#ifdef __cplusplus
}
#endif
