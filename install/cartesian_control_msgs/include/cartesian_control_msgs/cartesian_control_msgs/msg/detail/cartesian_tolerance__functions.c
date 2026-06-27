// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position_error`
// Member `orientation_error`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `twist_error`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration_error`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
cartesian_control_msgs__msg__CartesianTolerance__init(cartesian_control_msgs__msg__CartesianTolerance * msg)
{
  if (!msg) {
    return false;
  }
  // position_error
  if (!geometry_msgs__msg__Vector3__init(&msg->position_error)) {
    cartesian_control_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  // orientation_error
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation_error)) {
    cartesian_control_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  // twist_error
  if (!geometry_msgs__msg__Twist__init(&msg->twist_error)) {
    cartesian_control_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  // acceleration_error
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration_error)) {
    cartesian_control_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_control_msgs__msg__CartesianTolerance__fini(cartesian_control_msgs__msg__CartesianTolerance * msg)
{
  if (!msg) {
    return;
  }
  // position_error
  geometry_msgs__msg__Vector3__fini(&msg->position_error);
  // orientation_error
  geometry_msgs__msg__Vector3__fini(&msg->orientation_error);
  // twist_error
  geometry_msgs__msg__Twist__fini(&msg->twist_error);
  // acceleration_error
  geometry_msgs__msg__Accel__fini(&msg->acceleration_error);
}

bool
cartesian_control_msgs__msg__CartesianTolerance__are_equal(const cartesian_control_msgs__msg__CartesianTolerance * lhs, const cartesian_control_msgs__msg__CartesianTolerance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_error
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position_error), &(rhs->position_error)))
  {
    return false;
  }
  // orientation_error
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->orientation_error), &(rhs->orientation_error)))
  {
    return false;
  }
  // twist_error
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist_error), &(rhs->twist_error)))
  {
    return false;
  }
  // acceleration_error
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration_error), &(rhs->acceleration_error)))
  {
    return false;
  }
  return true;
}

bool
cartesian_control_msgs__msg__CartesianTolerance__copy(
  const cartesian_control_msgs__msg__CartesianTolerance * input,
  cartesian_control_msgs__msg__CartesianTolerance * output)
{
  if (!input || !output) {
    return false;
  }
  // position_error
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position_error), &(output->position_error)))
  {
    return false;
  }
  // orientation_error
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->orientation_error), &(output->orientation_error)))
  {
    return false;
  }
  // twist_error
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist_error), &(output->twist_error)))
  {
    return false;
  }
  // acceleration_error
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration_error), &(output->acceleration_error)))
  {
    return false;
  }
  return true;
}

cartesian_control_msgs__msg__CartesianTolerance *
cartesian_control_msgs__msg__CartesianTolerance__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianTolerance * msg = (cartesian_control_msgs__msg__CartesianTolerance *)allocator.allocate(sizeof(cartesian_control_msgs__msg__CartesianTolerance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_control_msgs__msg__CartesianTolerance));
  bool success = cartesian_control_msgs__msg__CartesianTolerance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartesian_control_msgs__msg__CartesianTolerance__destroy(cartesian_control_msgs__msg__CartesianTolerance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartesian_control_msgs__msg__CartesianTolerance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartesian_control_msgs__msg__CartesianTolerance__Sequence__init(cartesian_control_msgs__msg__CartesianTolerance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianTolerance * data = NULL;

  if (size) {
    data = (cartesian_control_msgs__msg__CartesianTolerance *)allocator.zero_allocate(size, sizeof(cartesian_control_msgs__msg__CartesianTolerance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_control_msgs__msg__CartesianTolerance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_control_msgs__msg__CartesianTolerance__fini(&data[i - 1]);
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
cartesian_control_msgs__msg__CartesianTolerance__Sequence__fini(cartesian_control_msgs__msg__CartesianTolerance__Sequence * array)
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
      cartesian_control_msgs__msg__CartesianTolerance__fini(&array->data[i]);
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

cartesian_control_msgs__msg__CartesianTolerance__Sequence *
cartesian_control_msgs__msg__CartesianTolerance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianTolerance__Sequence * array = (cartesian_control_msgs__msg__CartesianTolerance__Sequence *)allocator.allocate(sizeof(cartesian_control_msgs__msg__CartesianTolerance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartesian_control_msgs__msg__CartesianTolerance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartesian_control_msgs__msg__CartesianTolerance__Sequence__destroy(cartesian_control_msgs__msg__CartesianTolerance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartesian_control_msgs__msg__CartesianTolerance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartesian_control_msgs__msg__CartesianTolerance__Sequence__are_equal(const cartesian_control_msgs__msg__CartesianTolerance__Sequence * lhs, const cartesian_control_msgs__msg__CartesianTolerance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartesian_control_msgs__msg__CartesianTolerance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartesian_control_msgs__msg__CartesianTolerance__Sequence__copy(
  const cartesian_control_msgs__msg__CartesianTolerance__Sequence * input,
  cartesian_control_msgs__msg__CartesianTolerance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartesian_control_msgs__msg__CartesianTolerance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartesian_control_msgs__msg__CartesianTolerance * data =
      (cartesian_control_msgs__msg__CartesianTolerance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartesian_control_msgs__msg__CartesianTolerance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartesian_control_msgs__msg__CartesianTolerance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartesian_control_msgs__msg__CartesianTolerance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
