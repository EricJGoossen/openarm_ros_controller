// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cartesian_control_msgs:action/FollowCartesianTrajectory.idl
// generated code does not contain a copyright notice
#include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
#include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"

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
bool cdr_serialize(
  const cartesian_control_msgs::msg::CartesianTrajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_control_msgs::msg::CartesianTrajectory &);
size_t get_serialized_size(
  const cartesian_control_msgs::msg::CartesianTrajectory &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const cartesian_control_msgs::msg::CartesianTrajectory &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const cartesian_control_msgs::msg::CartesianTrajectory &,
  size_t current_alignment);
size_t
max_serialized_size_key_CartesianTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_control_msgs

namespace cartesian_control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_control_msgs::msg::CartesianTolerance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_control_msgs::msg::CartesianTolerance &);
size_t get_serialized_size(
  const cartesian_control_msgs::msg::CartesianTolerance &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTolerance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const cartesian_control_msgs::msg::CartesianTolerance &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const cartesian_control_msgs::msg::CartesianTolerance &,
  size_t current_alignment);
size_t
max_serialized_size_key_CartesianTolerance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_control_msgs

// functions for cartesian_control_msgs::msg::CartesianTolerance already declared above

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Duration &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_key_Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trajectory,
    cdr);

  // Member: path_tolerance
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.path_tolerance,
    cdr);

  // Member: goal_tolerance
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_tolerance,
    cdr);

  // Member: goal_time_tolerance
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_time_tolerance,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_Goal & ros_message)
{
  // Member: trajectory
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trajectory);

  // Member: path_tolerance
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.path_tolerance);

  // Member: goal_tolerance
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_tolerance);

  // Member: goal_time_tolerance
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_time_tolerance);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trajectory, current_alignment);

  // Member: path_tolerance
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.path_tolerance, current_alignment);

  // Member: goal_tolerance
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_tolerance, current_alignment);

  // Member: goal_time_tolerance
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_time_tolerance, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_Goal(
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

  // Member: trajectory
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: path_tolerance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: goal_tolerance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: goal_time_tolerance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_Goal;
    is_plain =
      (
      offsetof(DataType, goal_time_tolerance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.trajectory,
    cdr);

  // Member: path_tolerance
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.path_tolerance,
    cdr);

  // Member: goal_tolerance
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.goal_tolerance,
    cdr);

  // Member: goal_time_tolerance
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.goal_time_tolerance,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.trajectory, current_alignment);

  // Member: path_tolerance
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.path_tolerance, current_alignment);

  // Member: goal_tolerance
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.goal_tolerance, current_alignment);

  // Member: goal_time_tolerance
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.goal_time_tolerance, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_Goal(
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

  // Member: trajectory
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CartesianTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: path_tolerance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CartesianTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: goal_tolerance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CartesianTolerance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: goal_time_tolerance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Duration(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_Goal;
    is_plain =
      (
      offsetof(DataType, goal_time_tolerance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_Goal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_Goal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_Goal__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_Goal",
  _FollowCartesianTrajectory_Goal__cdr_serialize,
  _FollowCartesianTrajectory_Goal__cdr_deserialize,
  _FollowCartesianTrajectory_Goal__get_serialized_size,
  _FollowCartesianTrajectory_Goal__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_Goal__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Goal)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_Goal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: error_code
  cdr << ros_message.error_code;

  // Member: error_string
  cdr << ros_message.error_string;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_Result & ros_message)
{
  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: error_string
  cdr >> ros_message.error_string;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: error_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_string.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_Result(
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

  // Member: error_code
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: error_string
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_Result;
    is_plain =
      (
      offsetof(DataType, error_string) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: error_code
  cdr << ros_message.error_code;

  // Member: error_string
  cdr << ros_message.error_string;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: error_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_string.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_Result(
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

  // Member: error_code
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error_string
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_Result;
    is_plain =
      (
      offsetof(DataType, error_string) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_Result__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_Result(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_Result__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_Result",
  _FollowCartesianTrajectory_Result__cdr_serialize,
  _FollowCartesianTrajectory_Result__cdr_deserialize,
  _FollowCartesianTrajectory_Result__get_serialized_size,
  _FollowCartesianTrajectory_Result__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_Result__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Result__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Result__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Result__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Result>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Result)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_Result__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace cartesian_control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_control_msgs::msg::CartesianTrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_control_msgs::msg::CartesianTrajectoryPoint &);
size_t get_serialized_size(
  const cartesian_control_msgs::msg::CartesianTrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const cartesian_control_msgs::msg::CartesianTrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const cartesian_control_msgs::msg::CartesianTrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_key_CartesianTrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_control_msgs

// functions for cartesian_control_msgs::msg::CartesianTrajectoryPoint already declared above

// functions for cartesian_control_msgs::msg::CartesianTrajectoryPoint already declared above


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: controlled_frame
  cdr << ros_message.controlled_frame;

  // Member: desired
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.desired,
    cdr);

  // Member: actual
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.actual,
    cdr);

  // Member: error
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.error,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: controlled_frame
  cdr >> ros_message.controlled_frame;

  // Member: desired
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.desired);

  // Member: actual
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.actual);

  // Member: error
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.error);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: controlled_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.controlled_frame.size() + 1);

  // Member: desired
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.desired, current_alignment);

  // Member: actual
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.actual, current_alignment);

  // Member: error
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.error, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_Feedback(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: controlled_frame
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: desired
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: actual
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectoryPoint(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: controlled_frame
  cdr << ros_message.controlled_frame;

  // Member: desired
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.desired,
    cdr);

  // Member: actual
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.actual,
    cdr);

  // Member: error
  cartesian_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.error,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: controlled_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.controlled_frame.size() + 1);

  // Member: desired
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.desired, current_alignment);

  // Member: actual
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.actual, current_alignment);

  // Member: error
  current_alignment +=
    cartesian_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.error, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_Feedback(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: controlled_frame
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: desired
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CartesianTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: actual
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CartesianTrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: error
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CartesianTrajectoryPoint(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_Feedback(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_Feedback__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_Feedback",
  _FollowCartesianTrajectory_Feedback__cdr_serialize,
  _FollowCartesianTrajectory_Feedback__cdr_deserialize,
  _FollowCartesianTrajectory_Feedback__get_serialized_size,
  _FollowCartesianTrajectory_Feedback__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_Feedback__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Feedback)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_key_UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

// functions for cartesian_control_msgs::action::FollowCartesianTrajectory_Goal already declared above


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);

  // Member: goal
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id
  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  // Member: goal
  current_alignment +=
    cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_SendGoal_Request(
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

  // Member: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: goal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_FollowCartesianTrajectory_Goal(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request;
    is_plain =
      (
      offsetof(DataType, goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.goal_id,
    cdr);

  // Member: goal
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.goal,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id
  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.goal_id, current_alignment);

  // Member: goal
  current_alignment +=
    cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_SendGoal_Request(
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

  // Member: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: goal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_key_FollowCartesianTrajectory_Goal(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request;
    is_plain =
      (
      offsetof(DataType, goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_SendGoal_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_SendGoal_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_SendGoal_Request__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_SendGoal_Request",
  _FollowCartesianTrajectory_SendGoal_Request__cdr_serialize,
  _FollowCartesianTrajectory_SendGoal_Request__cdr_deserialize,
  _FollowCartesianTrajectory_SendGoal_Request__get_serialized_size,
  _FollowCartesianTrajectory_SendGoal_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Request)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_key_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_SendGoal_Response(
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

  // Member: accepted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response;
    is_plain =
      (
      offsetof(DataType, stamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.stamp,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_SendGoal_Response(
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

  // Member: accepted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Time(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response;
    is_plain =
      (
      offsetof(DataType, stamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_SendGoal_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_SendGoal_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_SendGoal_Response__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_SendGoal_Response",
  _FollowCartesianTrajectory_SendGoal_Response__cdr_serialize,
  _FollowCartesianTrajectory_SendGoal_Response__cdr_deserialize,
  _FollowCartesianTrajectory_SendGoal_Response__get_serialized_size,
  _FollowCartesianTrajectory_SendGoal_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Response)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_key_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request already declared above

// functions for cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response already declared above


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_SendGoal_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_FollowCartesianTrajectory_SendGoal_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_FollowCartesianTrajectory_SendGoal_Response(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_SendGoal_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_key_FollowCartesianTrajectory_SendGoal_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_key_FollowCartesianTrajectory_SendGoal_Response(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_SendGoal_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_SendGoal_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_SendGoal_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_SendGoal_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_SendGoal_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_SendGoal_Event__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_SendGoal_Event",
  _FollowCartesianTrajectory_SendGoal_Event__cdr_serialize,
  _FollowCartesianTrajectory_SendGoal_Event__cdr_deserialize,
  _FollowCartesianTrajectory_SendGoal_Event__get_serialized_size,
  _FollowCartesianTrajectory_SendGoal_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_SendGoal_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_SendGoal_Event__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Event)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _FollowCartesianTrajectory_SendGoal__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _FollowCartesianTrajectory_SendGoal__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_SendGoal__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal>,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for unique_identifier_msgs::msg::UUID already declared above


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id
  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_GetResult_Request(
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

  // Member: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request;
    is_plain =
      (
      offsetof(DataType, goal_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.goal_id,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id
  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_GetResult_Request(
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

  // Member: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_UUID(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request;
    is_plain =
      (
      offsetof(DataType, goal_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_GetResult_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_GetResult_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_GetResult_Request__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_GetResult_Request",
  _FollowCartesianTrajectory_GetResult_Request__cdr_serialize,
  _FollowCartesianTrajectory_GetResult_Request__cdr_deserialize,
  _FollowCartesianTrajectory_GetResult_Request__get_serialized_size,
  _FollowCartesianTrajectory_GetResult_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Request)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for cartesian_control_msgs::action::FollowCartesianTrajectory_Result already declared above


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;

  // Member: result
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: result
  current_alignment +=
    cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_GetResult_Response(
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

  // Member: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: result
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_FollowCartesianTrajectory_Result(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;

  // Member: result
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.result,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: result
  current_alignment +=
    cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_GetResult_Response(
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

  // Member: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_key_FollowCartesianTrajectory_Result(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_GetResult_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_GetResult_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_GetResult_Response__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_GetResult_Response",
  _FollowCartesianTrajectory_GetResult_Response__cdr_serialize,
  _FollowCartesianTrajectory_GetResult_Response__cdr_deserialize,
  _FollowCartesianTrajectory_GetResult_Response__get_serialized_size,
  _FollowCartesianTrajectory_GetResult_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Response)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for service_msgs::msg::ServiceEventInfo already declared above

// functions for cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request already declared above

// functions for cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response already declared above


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_GetResult_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_FollowCartesianTrajectory_GetResult_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_FollowCartesianTrajectory_GetResult_Response(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.info,
    cdr);

  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.request[i],
        cdr);
    }
  }

  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.response[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info
  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.info, current_alignment);

  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.request[index], current_alignment);
    }
  }

  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_GetResult_Event(
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

  // Member: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_key_FollowCartesianTrajectory_GetResult_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_key_FollowCartesianTrajectory_GetResult_Response(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_GetResult_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_GetResult_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_GetResult_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_GetResult_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_GetResult_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_GetResult_Event__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_GetResult_Event",
  _FollowCartesianTrajectory_GetResult_Event__cdr_serialize,
  _FollowCartesianTrajectory_GetResult_Event__cdr_deserialize,
  _FollowCartesianTrajectory_GetResult_Event__get_serialized_size,
  _FollowCartesianTrajectory_GetResult_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_GetResult_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_GetResult_Event__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Event)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult_Event__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _FollowCartesianTrajectory_GetResult__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _FollowCartesianTrajectory_GetResult__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_GetResult__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult>,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for unique_identifier_msgs::msg::UUID already declared above

// functions for cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback already declared above


namespace cartesian_control_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);

  // Member: feedback
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id
  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  // Member: feedback
  current_alignment +=
    cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_FollowCartesianTrajectory_FeedbackMessage(
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

  // Member: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_FollowCartesianTrajectory_Feedback(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage;
    is_plain =
      (
      offsetof(DataType, feedback) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
cdr_serialize_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.goal_id,
    cdr);

  // Member: feedback
  cartesian_control_msgs::action::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.feedback,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
get_serialized_size_key(
  const cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id
  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.goal_id, current_alignment);

  // Member: feedback
  current_alignment +=
    cartesian_control_msgs::action::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_control_msgs
max_serialized_size_key_FollowCartesianTrajectory_FeedbackMessage(
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

  // Member: goal_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cartesian_control_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_key_FollowCartesianTrajectory_Feedback(
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
    using DataType = cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage;
    is_plain =
      (
      offsetof(DataType, feedback) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _FollowCartesianTrajectory_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FollowCartesianTrajectory_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FollowCartesianTrajectory_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FollowCartesianTrajectory_FeedbackMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FollowCartesianTrajectory_FeedbackMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FollowCartesianTrajectory_FeedbackMessage__callbacks = {
  "cartesian_control_msgs::action",
  "FollowCartesianTrajectory_FeedbackMessage",
  _FollowCartesianTrajectory_FeedbackMessage__cdr_serialize,
  _FollowCartesianTrajectory_FeedbackMessage__cdr_deserialize,
  _FollowCartesianTrajectory_FeedbackMessage__get_serialized_size,
  _FollowCartesianTrajectory_FeedbackMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FollowCartesianTrajectory_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FollowCartesianTrajectory_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage>()
{
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_FeedbackMessage)() {
  return &cartesian_control_msgs::action::typesupport_fastrtps_cpp::_FollowCartesianTrajectory_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
