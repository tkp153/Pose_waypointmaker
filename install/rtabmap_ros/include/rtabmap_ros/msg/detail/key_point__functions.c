// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/KeyPoint.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/key_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pt`
#include "rtabmap_ros/msg/detail/point2f__functions.h"

bool
rtabmap_ros__msg__KeyPoint__init(rtabmap_ros__msg__KeyPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pt
  if (!rtabmap_ros__msg__Point2f__init(&msg->pt)) {
    rtabmap_ros__msg__KeyPoint__fini(msg);
    return false;
  }
  // size
  // angle
  // response
  // octave
  // class_id
  return true;
}

void
rtabmap_ros__msg__KeyPoint__fini(rtabmap_ros__msg__KeyPoint * msg)
{
  if (!msg) {
    return;
  }
  // pt
  rtabmap_ros__msg__Point2f__fini(&msg->pt);
  // size
  // angle
  // response
  // octave
  // class_id
}

bool
rtabmap_ros__msg__KeyPoint__are_equal(const rtabmap_ros__msg__KeyPoint * lhs, const rtabmap_ros__msg__KeyPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pt
  if (!rtabmap_ros__msg__Point2f__are_equal(
      &(lhs->pt), &(rhs->pt)))
  {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // response
  if (lhs->response != rhs->response) {
    return false;
  }
  // octave
  if (lhs->octave != rhs->octave) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  return true;
}

bool
rtabmap_ros__msg__KeyPoint__copy(
  const rtabmap_ros__msg__KeyPoint * input,
  rtabmap_ros__msg__KeyPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // pt
  if (!rtabmap_ros__msg__Point2f__copy(
      &(input->pt), &(output->pt)))
  {
    return false;
  }
  // size
  output->size = input->size;
  // angle
  output->angle = input->angle;
  // response
  output->response = input->response;
  // octave
  output->octave = input->octave;
  // class_id
  output->class_id = input->class_id;
  return true;
}

rtabmap_ros__msg__KeyPoint *
rtabmap_ros__msg__KeyPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__KeyPoint * msg = (rtabmap_ros__msg__KeyPoint *)allocator.allocate(sizeof(rtabmap_ros__msg__KeyPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__KeyPoint));
  bool success = rtabmap_ros__msg__KeyPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__KeyPoint__destroy(rtabmap_ros__msg__KeyPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__msg__KeyPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__msg__KeyPoint__Sequence__init(rtabmap_ros__msg__KeyPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__KeyPoint * data = NULL;

  if (size) {
    data = (rtabmap_ros__msg__KeyPoint *)allocator.zero_allocate(size, sizeof(rtabmap_ros__msg__KeyPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__KeyPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__KeyPoint__fini(&data[i - 1]);
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
rtabmap_ros__msg__KeyPoint__Sequence__fini(rtabmap_ros__msg__KeyPoint__Sequence * array)
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
      rtabmap_ros__msg__KeyPoint__fini(&array->data[i]);
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

rtabmap_ros__msg__KeyPoint__Sequence *
rtabmap_ros__msg__KeyPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__KeyPoint__Sequence * array = (rtabmap_ros__msg__KeyPoint__Sequence *)allocator.allocate(sizeof(rtabmap_ros__msg__KeyPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__KeyPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__KeyPoint__Sequence__destroy(rtabmap_ros__msg__KeyPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__msg__KeyPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__msg__KeyPoint__Sequence__are_equal(const rtabmap_ros__msg__KeyPoint__Sequence * lhs, const rtabmap_ros__msg__KeyPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__msg__KeyPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__msg__KeyPoint__Sequence__copy(
  const rtabmap_ros__msg__KeyPoint__Sequence * input,
  rtabmap_ros__msg__KeyPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__msg__KeyPoint);
    rtabmap_ros__msg__KeyPoint * data =
      (rtabmap_ros__msg__KeyPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__msg__KeyPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__msg__KeyPoint__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_ros__msg__KeyPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
