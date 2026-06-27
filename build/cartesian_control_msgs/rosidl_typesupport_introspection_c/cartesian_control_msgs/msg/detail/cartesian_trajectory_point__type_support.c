// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartesian_control_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__rosidl_typesupport_introspection_c.h"
#include "cartesian_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__functions.h"
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.h"


// Include directives for member types
// Member `time_from_start`
#include "builtin_interfaces/msg/duration.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/accel.h"
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"
// Member `posture`
#include "cartesian_control_msgs/msg/cartesian_posture.h"
// Member `posture`
#include "cartesian_control_msgs/msg/detail/cartesian_posture__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__init(message_memory);
}

void cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_fini_function(void * message_memory)
{
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[6] = {
  {
    "time_from_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectoryPoint, time_from_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectoryPoint, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectoryPoint, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectoryPoint, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectoryPoint, jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianTrajectoryPoint, posture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_members = {
  "cartesian_control_msgs__msg",  // message namespace
  "CartesianTrajectoryPoint",  // message name
  6,  // number of fields
  sizeof(cartesian_control_msgs__msg__CartesianTrajectoryPoint),
  false,  // has_any_key_member_
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array,  // message members
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle = {
  0,
  &cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_members,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianTrajectoryPoint__get_type_hash,
  &cartesian_control_msgs__msg__CartesianTrajectoryPoint__get_type_description,
  &cartesian_control_msgs__msg__CartesianTrajectoryPoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_control_msgs, msg, CartesianTrajectoryPoint)() {
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_control_msgs, msg, CartesianPosture)();
  if (!cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle.typesupport_identifier) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartesian_control_msgs__msg__CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
