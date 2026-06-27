// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartesian_control_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/detail/accel__functions.h"
// Member `posture`
#include "cartesian_control_msgs/msg/detail/cartesian_posture__functions.h"

bool
cartesian_control_msgs__msg__CartesianTrajectoryPoint__init(cartesian_control_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__init(&msg->time_from_start)) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration)) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Accel__init(&msg->jerk)) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // posture
  if (!cartesian_control_msgs__msg__CartesianPosture__init(&msg->posture)) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(cartesian_control_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // time_from_start
  builtin_interfaces__msg__Duration__fini(&msg->time_from_start);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // acceleration
  geometry_msgs__msg__Accel__fini(&msg->acceleration);
  // jerk
  geometry_msgs__msg__Accel__fini(&msg->jerk);
  // posture
  cartesian_control_msgs__msg__CartesianPosture__fini(&msg->posture);
}

bool
cartesian_control_msgs__msg__CartesianTrajectoryPoint__are_equal(const cartesian_control_msgs__msg__CartesianTrajectoryPoint * lhs, const cartesian_control_msgs__msg__CartesianTrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_from_start), &(rhs->time_from_start)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->jerk), &(rhs->jerk)))
  {
    return false;
  }
  // posture
  if (!cartesian_control_msgs__msg__CartesianPosture__are_equal(
      &(lhs->posture), &(rhs->posture)))
  {
    return false;
  }
  return true;
}

bool
cartesian_control_msgs__msg__CartesianTrajectoryPoint__copy(
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint * input,
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_from_start), &(output->time_from_start)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Accel__copy(
      &(input->jerk), &(output->jerk)))
  {
    return false;
  }
  // posture
  if (!cartesian_control_msgs__msg__CartesianPosture__copy(
      &(input->posture), &(output->posture)))
  {
    return false;
  }
  return true;
}

cartesian_control_msgs__msg__CartesianTrajectoryPoint *
cartesian_control_msgs__msg__CartesianTrajectoryPoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * msg = (cartesian_control_msgs__msg__CartesianTrajectoryPoint *)allocator.allocate(sizeof(cartesian_control_msgs__msg__CartesianTrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_control_msgs__msg__CartesianTrajectoryPoint));
  bool success = cartesian_control_msgs__msg__CartesianTrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartesian_control_msgs__msg__CartesianTrajectoryPoint__destroy(cartesian_control_msgs__msg__CartesianTrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__init(cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint * data = NULL;

  if (size) {
    data = (cartesian_control_msgs__msg__CartesianTrajectoryPoint *)allocator.zero_allocate(size, sizeof(cartesian_control_msgs__msg__CartesianTrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_control_msgs__msg__CartesianTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence *
cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * array = (cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence *)allocator.allocate(sizeof(cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__destroy(cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__are_equal(const cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * lhs, const cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartesian_control_msgs__msg__CartesianTrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__copy(
  const cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * input,
  cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartesian_control_msgs__msg__CartesianTrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartesian_control_msgs__msg__CartesianTrajectoryPoint * data =
      (cartesian_control_msgs__msg__CartesianTrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartesian_control_msgs__msg__CartesianTrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartesian_control_msgs__msg__CartesianTrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartesian_control_msgs__msg__CartesianTrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
