// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_posture.h"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__STRUCT_H_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'posture_joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'posture_joint_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CartesianPosture in the package cartesian_control_msgs.
/**
  * Posture joint names may reflect a subset of all available joints (empty posture definitions are
  * also possible). The length of posture_joint_names and posture_joint_values have to be equal.
 */
typedef struct cartesian_control_msgs__msg__CartesianPosture
{
  rosidl_runtime_c__String__Sequence posture_joint_names;
  rosidl_runtime_c__double__Sequence posture_joint_values;
} cartesian_control_msgs__msg__CartesianPosture;

// Struct for a sequence of cartesian_control_msgs__msg__CartesianPosture.
typedef struct cartesian_control_msgs__msg__CartesianPosture__Sequence
{
  cartesian_control_msgs__msg__CartesianPosture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__msg__CartesianPosture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__STRUCT_H_
