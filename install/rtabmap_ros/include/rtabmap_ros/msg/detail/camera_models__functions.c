// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/CameraModels.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/camera_models__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `models`
#include "rtabmap_ros/msg/detail/camera_model__functions.h"

bool
rtabmap_ros__msg__CameraModels__init(rtabmap_ros__msg__CameraModels * msg)
{
  if (!msg) {
    return false;
  }
  // models
  if (!rtabmap_ros__msg__CameraModel__Sequence__init(&msg->models, 0)) {
    rtabmap_ros__msg__CameraModels__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__CameraModels__fini(rtabmap_ros__msg__CameraModels * msg)
{
  if (!msg) {
    return;
  }
  // models
  rtabmap_ros__msg__CameraModel__Sequence__fini(&msg->models);
}

bool
rtabmap_ros__msg__CameraModels__are_equal(const rtabmap_ros__msg__CameraModels * lhs, const rtabmap_ros__msg__CameraModels * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // models
  if (!rtabmap_ros__msg__CameraModel__Sequence__are_equal(
      &(lhs->models), &(rhs->models)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_ros__msg__CameraModels__copy(
  const rtabmap_ros__msg__CameraModels * input,
  rtabmap_ros__msg__CameraModels * output)
{
  if (!input || !output) {
    return false;
  }
  // models
  if (!rtabmap_ros__msg__CameraModel__Sequence__copy(
      &(input->models), &(output->models)))
  {
    return false;
  }
  return true;
}

rtabmap_ros__msg__CameraModels *
rtabmap_ros__msg__CameraModels__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__CameraModels * msg = (rtabmap_ros__msg__CameraModels *)allocator.allocate(sizeof(rtabmap_ros__msg__CameraModels), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__CameraModels));
  bool success = rtabmap_ros__msg__CameraModels__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__CameraModels__destroy(rtabmap_ros__msg__CameraModels * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__msg__CameraModels__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__msg__CameraModels__Sequence__init(rtabmap_ros__msg__CameraModels__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__CameraModels * data = NULL;

  if (size) {
    data = (rtabmap_ros__msg__CameraModels *)allocator.zero_allocate(size, sizeof(rtabmap_ros__msg__CameraModels), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__CameraModels__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__CameraModels__fini(&data[i - 1]);
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
rtabmap_ros__msg__CameraModels__Sequence__fini(rtabmap_ros__msg__CameraModels__Sequence * array)
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
      rtabmap_ros__msg__CameraModels__fini(&array->data[i]);
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

rtabmap_ros__msg__CameraModels__Sequence *
rtabmap_ros__msg__CameraModels__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__CameraModels__Sequence * array = (rtabmap_ros__msg__CameraModels__Sequence *)allocator.allocate(sizeof(rtabmap_ros__msg__CameraModels__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__CameraModels__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__CameraModels__Sequence__destroy(rtabmap_ros__msg__CameraModels__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__msg__CameraModels__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__msg__CameraModels__Sequence__are_equal(const rtabmap_ros__msg__CameraModels__Sequence * lhs, const rtabmap_ros__msg__CameraModels__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__msg__CameraModels__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__msg__CameraModels__Sequence__copy(
  const rtabmap_ros__msg__CameraModels__Sequence * input,
  rtabmap_ros__msg__CameraModels__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__msg__CameraModels);
    rtabmap_ros__msg__CameraModels * data =
      (rtabmap_ros__msg__CameraModels *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__msg__CameraModels__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__msg__CameraModels__fini(&data[i]);
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
    if (!rtabmap_ros__msg__CameraModels__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
