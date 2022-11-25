// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/Goal.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `node_label`
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
rtabmap_ros__msg__Goal__init(rtabmap_ros__msg__Goal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_ros__msg__Goal__fini(msg);
    return false;
  }
  // node_id
  // node_label
  if (!rosidl_runtime_c__String__init(&msg->node_label)) {
    rtabmap_ros__msg__Goal__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    rtabmap_ros__msg__Goal__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__Goal__fini(rtabmap_ros__msg__Goal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // node_id
  // node_label
  rosidl_runtime_c__String__fini(&msg->node_label);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
}

bool
rtabmap_ros__msg__Goal__are_equal(const rtabmap_ros__msg__Goal * lhs, const rtabmap_ros__msg__Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // node_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_label), &(rhs->node_label)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_ros__msg__Goal__copy(
  const rtabmap_ros__msg__Goal * input,
  rtabmap_ros__msg__Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // node_label
  if (!rosidl_runtime_c__String__copy(
      &(input->node_label), &(output->node_label)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  return true;
}

rtabmap_ros__msg__Goal *
rtabmap_ros__msg__Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__Goal * msg = (rtabmap_ros__msg__Goal *)allocator.allocate(sizeof(rtabmap_ros__msg__Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__Goal));
  bool success = rtabmap_ros__msg__Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__Goal__destroy(rtabmap_ros__msg__Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__msg__Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__msg__Goal__Sequence__init(rtabmap_ros__msg__Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__Goal * data = NULL;

  if (size) {
    data = (rtabmap_ros__msg__Goal *)allocator.zero_allocate(size, sizeof(rtabmap_ros__msg__Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__Goal__fini(&data[i - 1]);
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
rtabmap_ros__msg__Goal__Sequence__fini(rtabmap_ros__msg__Goal__Sequence * array)
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
      rtabmap_ros__msg__Goal__fini(&array->data[i]);
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

rtabmap_ros__msg__Goal__Sequence *
rtabmap_ros__msg__Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__Goal__Sequence * array = (rtabmap_ros__msg__Goal__Sequence *)allocator.allocate(sizeof(rtabmap_ros__msg__Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__Goal__Sequence__destroy(rtabmap_ros__msg__Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__msg__Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__msg__Goal__Sequence__are_equal(const rtabmap_ros__msg__Goal__Sequence * lhs, const rtabmap_ros__msg__Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__msg__Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__msg__Goal__Sequence__copy(
  const rtabmap_ros__msg__Goal__Sequence * input,
  rtabmap_ros__msg__Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__msg__Goal);
    rtabmap_ros__msg__Goal * data =
      (rtabmap_ros__msg__Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__msg__Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__msg__Goal__fini(&data[i]);
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
    if (!rtabmap_ros__msg__Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
