// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartesian_control_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory__rosidl_typesupport_introspection_c.h"
#include "cartesian_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory__functions.h"
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "cartesian_control_msgs/msg/cartesian_trajectory_point.h"
// Member `points`
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `controlled_frame`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_control_msgs__msg__CartesianTrajectory__init(message_memory);
}

void cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function(void * message_memory)
{
  cartesian_control_msgs__msg__CartesianTrajectory__fini(message_memory);
}

size_t cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__points(
  const void * untyped_member)
{
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points(
  const void * untyped_member, size_t index)
{
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points(
  void * untyped_member, size_t index)
{
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__fetch_function__CartesianTrajectory__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint * item =
    ((const cartesian_control_msgs__msg__CartesianTrajectoryPoint *)
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points(untyped_member, index));
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * value =
    (cartesian_control_msgs__msg__CartesianTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__assign_function__CartesianTrajectory__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * item =
    ((cartesian_control_msgs__msg__CartesianTrajectoryPoint *)
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points(untyped_member, index));
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint * value =
    (const cartesian_control_msgs__msg__CartesianTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__points(
  void * untyped_member, size_t size)
{
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(member);
  return cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__points,  // size() function pointer
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points,  // get_const(index) function pointer
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points,  // get(index) function pointer
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__fetch_function__CartesianTrajectory__points,  // fetch(index, &value) function pointer
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__assign_function__CartesianTrajectory__points,  // assign(index, value) function pointer
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__points  // resize(index) function pointer
  },
  {
    "controlled_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectory, controlled_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members = {
  "cartesian_control_msgs__msg",  // message namespace
  "CartesianTrajectory",  // message name
  3,  // number of fields
  sizeof(cartesian_control_msgs__msg__CartesianTrajectory),
  false,  // has_any_key_member_
  cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array,  // message members
  cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle = {
  0,
  &cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianTrajectory__get_type_hash,
  &cartesian_control_msgs__msg__CartesianTrajectory__get_type_description,
  &cartesian_control_msgs__msg__CartesianTrajectory__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_control_msgs, msg, CartesianTrajectory)() {
  cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_control_msgs, msg, CartesianTrajectoryPoint)();
  if (!cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier) {
    cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartesian_control_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
