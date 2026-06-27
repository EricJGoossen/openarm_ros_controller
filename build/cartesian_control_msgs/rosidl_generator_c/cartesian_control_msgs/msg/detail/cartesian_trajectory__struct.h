// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_control_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory.h"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'points'
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.h"
// Member 'controlled_frame'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CartesianTrajectory in the package cartesian_control_msgs.
/**
  * header.frame_id is the frame in which all data from CartesianTrajectoryPoint[] is given
 */
typedef struct cartesian_control_msgs__msg__CartesianTrajectory
{
  std_msgs__msg__Header header;
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence points;
  rosidl_runtime_c__String controlled_frame;
} cartesian_control_msgs__msg__CartesianTrajectory;

// Struct for a sequence of cartesian_control_msgs__msg__CartesianTrajectory.
typedef struct cartesian_control_msgs__msg__CartesianTrajectory__Sequence
{
  cartesian_control_msgs__msg__CartesianTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__msg__CartesianTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_
