// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_tolerance.h"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__STRUCT_H_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position_error'
// Member 'orientation_error'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'twist_error'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration_error'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/CartesianTolerance in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__msg__CartesianTolerance
{
  geometry_msgs__msg__Vector3 position_error;
  geometry_msgs__msg__Vector3 orientation_error;
  geometry_msgs__msg__Twist twist_error;
  geometry_msgs__msg__Accel acceleration_error;
} cartesian_control_msgs__msg__CartesianTolerance;

// Struct for a sequence of cartesian_control_msgs__msg__CartesianTolerance.
typedef struct cartesian_control_msgs__msg__CartesianTolerance__Sequence
{
  cartesian_control_msgs__msg__CartesianTolerance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__msg__CartesianTolerance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TOLERANCE__STRUCT_H_
