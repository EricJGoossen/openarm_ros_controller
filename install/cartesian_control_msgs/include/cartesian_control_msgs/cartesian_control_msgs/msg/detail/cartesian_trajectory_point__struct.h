// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_control_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory_point.h"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/accel__struct.h"
// Member 'posture'
#include "cartesian_control_msgs/msg/detail/cartesian_posture__struct.h"

/// Struct defined in msg/CartesianTrajectoryPoint in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__msg__CartesianTrajectoryPoint
{
  builtin_interfaces__msg__Duration time_from_start;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Accel acceleration;
  /// A more suitable datatype would be good, see https://github.com/ros/common_msgs/issues/137
  geometry_msgs__msg__Accel jerk;
  cartesian_control_msgs__msg__CartesianPosture posture;
} cartesian_control_msgs__msg__CartesianTrajectoryPoint;

// Struct for a sequence of cartesian_control_msgs__msg__CartesianTrajectoryPoint.
typedef struct cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence
{
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_
