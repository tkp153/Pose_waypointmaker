// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:srv/SetLabel.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/set_label__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `node_label`
#include "rosidl_runtime_c/string_functions.h"

bool
rtabmap_ros__srv__SetLabel_Request__init(rtabmap_ros__srv__SetLabel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // node_label
  if (!rosidl_runtime_c__String__init(&msg->node_label)) {
    rtabmap_ros__srv__SetLabel_Request__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__srv__SetLabel_Request__fini(rtabmap_ros__srv__SetLabel_Request * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // node_label
  rosidl_runtime_c__String__fini(&msg->node_label);
}

bool
rtabmap_ros__srv__SetLabel_Request__are_equal(const rtabmap_ros__srv__SetLabel_Request * lhs, const rtabmap_ros__srv__SetLabel_Request * rhs)
{
  if (!lhs || !rhs) {
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
  return true;
}

bool
rtabmap_ros__srv__SetLabel_Request__copy(
  const rtabmap_ros__srv__SetLabel_Request * input,
  rtabmap_ros__srv__SetLabel_Request * output)
{
  if (!input || !output) {
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
  return true;
}

rtabmap_ros__srv__SetLabel_Request *
rtabmap_ros__srv__SetLabel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__SetLabel_Request * msg = (rtabmap_ros__srv__SetLabel_Request *)allocator.allocate(sizeof(rtabmap_ros__srv__SetLabel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__SetLabel_Request));
  bool success = rtabmap_ros__srv__SetLabel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__SetLabel_Request__destroy(rtabmap_ros__srv__SetLabel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__srv__SetLabel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__srv__SetLabel_Request__Sequence__init(rtabmap_ros__srv__SetLabel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__SetLabel_Request * data = NULL;

  if (size) {
    data = (rtabmap_ros__srv__SetLabel_Request *)allocator.zero_allocate(size, sizeof(rtabmap_ros__srv__SetLabel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__SetLabel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__SetLabel_Request__fini(&data[i - 1]);
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
rtabmap_ros__srv__SetLabel_Request__Sequence__fini(rtabmap_ros__srv__SetLabel_Request__Sequence * array)
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
      rtabmap_ros__srv__SetLabel_Request__fini(&array->data[i]);
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

rtabmap_ros__srv__SetLabel_Request__Sequence *
rtabmap_ros__srv__SetLabel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__SetLabel_Request__Sequence * array = (rtabmap_ros__srv__SetLabel_Request__Sequence *)allocator.allocate(sizeof(rtabmap_ros__srv__SetLabel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__SetLabel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__SetLabel_Request__Sequence__destroy(rtabmap_ros__srv__SetLabel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__srv__SetLabel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__srv__SetLabel_Request__Sequence__are_equal(const rtabmap_ros__srv__SetLabel_Request__Sequence * lhs, const rtabmap_ros__srv__SetLabel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__srv__SetLabel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__srv__SetLabel_Request__Sequence__copy(
  const rtabmap_ros__srv__SetLabel_Request__Sequence * input,
  rtabmap_ros__srv__SetLabel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__srv__SetLabel_Request);
    rtabmap_ros__srv__SetLabel_Request * data =
      (rtabmap_ros__srv__SetLabel_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__srv__SetLabel_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__srv__SetLabel_Request__fini(&data[i]);
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
    if (!rtabmap_ros__srv__SetLabel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rtabmap_ros__srv__SetLabel_Response__init(rtabmap_ros__srv__SetLabel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rtabmap_ros__srv__SetLabel_Response__fini(rtabmap_ros__srv__SetLabel_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rtabmap_ros__srv__SetLabel_Response__are_equal(const rtabmap_ros__srv__SetLabel_Response * lhs, const rtabmap_ros__srv__SetLabel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rtabmap_ros__srv__SetLabel_Response__copy(
  const rtabmap_ros__srv__SetLabel_Response * input,
  rtabmap_ros__srv__SetLabel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rtabmap_ros__srv__SetLabel_Response *
rtabmap_ros__srv__SetLabel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__SetLabel_Response * msg = (rtabmap_ros__srv__SetLabel_Response *)allocator.allocate(sizeof(rtabmap_ros__srv__SetLabel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__SetLabel_Response));
  bool success = rtabmap_ros__srv__SetLabel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__SetLabel_Response__destroy(rtabmap_ros__srv__SetLabel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__srv__SetLabel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__srv__SetLabel_Response__Sequence__init(rtabmap_ros__srv__SetLabel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__SetLabel_Response * data = NULL;

  if (size) {
    data = (rtabmap_ros__srv__SetLabel_Response *)allocator.zero_allocate(size, sizeof(rtabmap_ros__srv__SetLabel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__SetLabel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__SetLabel_Response__fini(&data[i - 1]);
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
rtabmap_ros__srv__SetLabel_Response__Sequence__fini(rtabmap_ros__srv__SetLabel_Response__Sequence * array)
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
      rtabmap_ros__srv__SetLabel_Response__fini(&array->data[i]);
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

rtabmap_ros__srv__SetLabel_Response__Sequence *
rtabmap_ros__srv__SetLabel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__SetLabel_Response__Sequence * array = (rtabmap_ros__srv__SetLabel_Response__Sequence *)allocator.allocate(sizeof(rtabmap_ros__srv__SetLabel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__SetLabel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__SetLabel_Response__Sequence__destroy(rtabmap_ros__srv__SetLabel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__srv__SetLabel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__srv__SetLabel_Response__Sequence__are_equal(const rtabmap_ros__srv__SetLabel_Response__Sequence * lhs, const rtabmap_ros__srv__SetLabel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__srv__SetLabel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__srv__SetLabel_Response__Sequence__copy(
  const rtabmap_ros__srv__SetLabel_Response__Sequence * input,
  rtabmap_ros__srv__SetLabel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__srv__SetLabel_Response);
    rtabmap_ros__srv__SetLabel_Response * data =
      (rtabmap_ros__srv__SetLabel_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__srv__SetLabel_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__srv__SetLabel_Response__fini(&data[i]);
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
    if (!rtabmap_ros__srv__SetLabel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
