// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__rosidl_typesupport_introspection_c.h"
#include "cartesian_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__functions.h"
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.h"


// Include directives for member types
// Member `position_error`
// Member `orientation_error`
#include "geometry_msgs/msg/vector3.h"
// Member `position_error`
// Member `orientation_error`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `twist_error`
#include "geometry_msgs/msg/twist.h"
// Member `twist_error`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `acceleration_error`
#include "geometry_msgs/msg/accel.h"
// Member `acceleration_error`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_control_msgs__msg__CartesianTolerance__init(message_memory);
}

void cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_fini_function(void * message_memory)
{
  cartesian_control_msgs__msg__CartesianTolerance__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[4] = {
  {
    "position_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTolerance, position_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTolerance, orientation_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTolerance, twist_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTolerance, acceleration_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_members = {
  "cartesian_control_msgs__msg",  // message namespace
  "CartesianTolerance",  // message name
  4,  // number of fields
  sizeof(cartesian_control_msgs__msg__CartesianTolerance),
  false,  // has_any_key_member_
  cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array,  // message members
  cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_init_function,  // function to initialize message memory (memory has to be allocated)
  cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle = {
  0,
  &cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_members,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_hash,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_description,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_control_msgs, msg, CartesianTolerance)() {
  cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  if (!cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle.typesupport_identifier) {
    cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartesian_control_msgs__msg__CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
