// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice
#include "cartesian_control_msgs/msg/detail/cartesian_posture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `posture_joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `posture_joint_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cartesian_control_msgs__msg__CartesianPosture__init(cartesian_control_msgs__msg__CartesianPosture * msg)
{
  if (!msg) {
    return false;
  }
  // posture_joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->posture_joint_names, 0)) {
    cartesian_control_msgs__msg__CartesianPosture__fini(msg);
    return false;
  }
  // posture_joint_values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->posture_joint_values, 0)) {
    cartesian_control_msgs__msg__CartesianPosture__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_control_msgs__msg__CartesianPosture__fini(cartesian_control_msgs__msg__CartesianPosture * msg)
{
  if (!msg) {
    return;
  }
  // posture_joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->posture_joint_names);
  // posture_joint_values
  rosidl_runtime_c__double__Sequence__fini(&msg->posture_joint_values);
}

bool
cartesian_control_msgs__msg__CartesianPosture__are_equal(const cartesian_control_msgs__msg__CartesianPosture * lhs, const cartesian_control_msgs__msg__CartesianPosture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posture_joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->posture_joint_names), &(rhs->posture_joint_names)))
  {
    return false;
  }
  // posture_joint_values
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->posture_joint_values), &(rhs->posture_joint_values)))
  {
    return false;
  }
  return true;
}

bool
cartesian_control_msgs__msg__CartesianPosture__copy(
  const cartesian_control_msgs__msg__CartesianPosture * input,
  cartesian_control_msgs__msg__CartesianPosture * output)
{
  if (!input || !output) {
    return false;
  }
  // posture_joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->posture_joint_names), &(output->posture_joint_names)))
  {
    return false;
  }
  // posture_joint_values
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->posture_joint_values), &(output->posture_joint_values)))
  {
    return false;
  }
  return true;
}

cartesian_control_msgs__msg__CartesianPosture *
cartesian_control_msgs__msg__CartesianPosture__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianPosture * msg = (cartesian_control_msgs__msg__CartesianPosture *)allocator.allocate(sizeof(cartesian_control_msgs__msg__CartesianPosture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_control_msgs__msg__CartesianPosture));
  bool success = cartesian_control_msgs__msg__CartesianPosture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartesian_control_msgs__msg__CartesianPosture__destroy(cartesian_control_msgs__msg__CartesianPosture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartesian_control_msgs__msg__CartesianPosture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartesian_control_msgs__msg__CartesianPosture__Sequence__init(cartesian_control_msgs__msg__CartesianPosture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianPosture * data = NULL;

  if (size) {
    data = (cartesian_control_msgs__msg__CartesianPosture *)allocator.zero_allocate(size, sizeof(cartesian_control_msgs__msg__CartesianPosture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_control_msgs__msg__CartesianPosture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_control_msgs__msg__CartesianPosture__fini(&data[i - 1]);
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
cartesian_control_msgs__msg__CartesianPosture__Sequence__fini(cartesian_control_msgs__msg__CartesianPosture__Sequence * array)
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
      cartesian_control_msgs__msg__CartesianPosture__fini(&array->data[i]);
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

cartesian_control_msgs__msg__CartesianPosture__Sequence *
cartesian_control_msgs__msg__CartesianPosture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartesian_control_msgs__msg__CartesianPosture__Sequence * array = (cartesian_control_msgs__msg__CartesianPosture__Sequence *)allocator.allocate(sizeof(cartesian_control_msgs__msg__CartesianPosture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartesian_control_msgs__msg__CartesianPosture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartesian_control_msgs__msg__CartesianPosture__Sequence__destroy(cartesian_control_msgs__msg__CartesianPosture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartesian_control_msgs__msg__CartesianPosture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartesian_control_msgs__msg__CartesianPosture__Sequence__are_equal(const cartesian_control_msgs__msg__CartesianPosture__Sequence * lhs, const cartesian_control_msgs__msg__CartesianPosture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartesian_control_msgs__msg__CartesianPosture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartesian_control_msgs__msg__CartesianPosture__Sequence__copy(
  const cartesian_control_msgs__msg__CartesianPosture__Sequence * input,
  cartesian_control_msgs__msg__CartesianPosture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartesian_control_msgs__msg__CartesianPosture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartesian_control_msgs__msg__CartesianPosture * data =
      (cartesian_control_msgs__msg__CartesianPosture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartesian_control_msgs__msg__CartesianPosture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartesian_control_msgs__msg__CartesianPosture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartesian_control_msgs__msg__CartesianPosture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
