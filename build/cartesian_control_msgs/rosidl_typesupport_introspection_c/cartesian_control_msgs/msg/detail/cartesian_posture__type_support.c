// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartesian_control_msgs/msg/detail/cartesian_posture__rosidl_typesupport_introspection_c.h"
#include "cartesian_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartesian_control_msgs/msg/detail/cartesian_posture__functions.h"
#include "cartesian_control_msgs/msg/detail/cartesian_posture__struct.h"


// Include directives for member types
// Member `posture_joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `posture_joint_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_control_msgs__msg__CartesianPosture__init(message_memory);
}

void cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_fini_function(void * message_memory)
{
  cartesian_control_msgs__msg__CartesianPosture__fini(message_memory);
}

size_t cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__size_function__CartesianPosture__posture_joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_const_function__CartesianPosture__posture_joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_function__CartesianPosture__posture_joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__fetch_function__CartesianPosture__posture_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_const_function__CartesianPosture__posture_joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__assign_function__CartesianPosture__posture_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_function__CartesianPosture__posture_joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__resize_function__CartesianPosture__posture_joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__size_function__CartesianPosture__posture_joint_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_const_function__CartesianPosture__posture_joint_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_function__CartesianPosture__posture_joint_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__fetch_function__CartesianPosture__posture_joint_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_const_function__CartesianPosture__posture_joint_values(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__assign_function__CartesianPosture__posture_joint_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_function__CartesianPosture__posture_joint_values(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__resize_function__CartesianPosture__posture_joint_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_member_array[2] = {
  {
    "posture_joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianPosture, posture_joint_names),  // bytes offset in struct
    NULL,  // default value
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__size_function__CartesianPosture__posture_joint_names,  // size() function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_const_function__CartesianPosture__posture_joint_names,  // get_const(index) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_function__CartesianPosture__posture_joint_names,  // get(index) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__fetch_function__CartesianPosture__posture_joint_names,  // fetch(index, &value) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__assign_function__CartesianPosture__posture_joint_names,  // assign(index, value) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__resize_function__CartesianPosture__posture_joint_names  // resize(index) function pointer
  },
  {
    "posture_joint_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs__msg__CartesianPosture, posture_joint_values),  // bytes offset in struct
    NULL,  // default value
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__size_function__CartesianPosture__posture_joint_values,  // size() function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_const_function__CartesianPosture__posture_joint_values,  // get_const(index) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__get_function__CartesianPosture__posture_joint_values,  // get(index) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__fetch_function__CartesianPosture__posture_joint_values,  // fetch(index, &value) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__assign_function__CartesianPosture__posture_joint_values,  // assign(index, value) function pointer
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__resize_function__CartesianPosture__posture_joint_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_members = {
  "cartesian_control_msgs__msg",  // message namespace
  "CartesianPosture",  // message name
  2,  // number of fields
  sizeof(cartesian_control_msgs__msg__CartesianPosture),
  false,  // has_any_key_member_
  cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_member_array,  // message members
  cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_init_function,  // function to initialize message memory (memory has to be allocated)
  cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_type_support_handle = {
  0,
  &cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_members,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianPosture__get_type_hash,
  &cartesian_control_msgs__msg__CartesianPosture__get_type_description,
  &cartesian_control_msgs__msg__CartesianPosture__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_control_msgs, msg, CartesianPosture)() {
  if (!cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_type_support_handle.typesupport_identifier) {
    cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartesian_control_msgs__msg__CartesianPosture__rosidl_typesupport_introspection_c__CartesianPosture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
