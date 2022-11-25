// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:srv/GetMap.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/get_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rtabmap_ros__srv__GetMap_Request__init(rtabmap_ros__srv__GetMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // global_map
  // optimized
  // graph_only
  return true;
}

void
rtabmap_ros__srv__GetMap_Request__fini(rtabmap_ros__srv__GetMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // global_map
  // optimized
  // graph_only
}

bool
rtabmap_ros__srv__GetMap_Request__are_equal(const rtabmap_ros__srv__GetMap_Request * lhs, const rtabmap_ros__srv__GetMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // global_map
  if (lhs->global_map != rhs->global_map) {
    return false;
  }
  // optimized
  if (lhs->optimized != rhs->optimized) {
    return false;
  }
  // graph_only
  if (lhs->graph_only != rhs->graph_only) {
    return false;
  }
  return true;
}

bool
rtabmap_ros__srv__GetMap_Request__copy(
  const rtabmap_ros__srv__GetMap_Request * input,
  rtabmap_ros__srv__GetMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // global_map
  output->global_map = input->global_map;
  // optimized
  output->optimized = input->optimized;
  // graph_only
  output->graph_only = input->graph_only;
  return true;
}

rtabmap_ros__srv__GetMap_Request *
rtabmap_ros__srv__GetMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__GetMap_Request * msg = (rtabmap_ros__srv__GetMap_Request *)allocator.allocate(sizeof(rtabmap_ros__srv__GetMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__GetMap_Request));
  bool success = rtabmap_ros__srv__GetMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__GetMap_Request__destroy(rtabmap_ros__srv__GetMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__srv__GetMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__srv__GetMap_Request__Sequence__init(rtabmap_ros__srv__GetMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__GetMap_Request * data = NULL;

  if (size) {
    data = (rtabmap_ros__srv__GetMap_Request *)allocator.zero_allocate(size, sizeof(rtabmap_ros__srv__GetMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__GetMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__GetMap_Request__fini(&data[i - 1]);
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
rtabmap_ros__srv__GetMap_Request__Sequence__fini(rtabmap_ros__srv__GetMap_Request__Sequence * array)
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
      rtabmap_ros__srv__GetMap_Request__fini(&array->data[i]);
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

rtabmap_ros__srv__GetMap_Request__Sequence *
rtabmap_ros__srv__GetMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__GetMap_Request__Sequence * array = (rtabmap_ros__srv__GetMap_Request__Sequence *)allocator.allocate(sizeof(rtabmap_ros__srv__GetMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__GetMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__GetMap_Request__Sequence__destroy(rtabmap_ros__srv__GetMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__srv__GetMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__srv__GetMap_Request__Sequence__are_equal(const rtabmap_ros__srv__GetMap_Request__Sequence * lhs, const rtabmap_ros__srv__GetMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__srv__GetMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__srv__GetMap_Request__Sequence__copy(
  const rtabmap_ros__srv__GetMap_Request__Sequence * input,
  rtabmap_ros__srv__GetMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__srv__GetMap_Request);
    rtabmap_ros__srv__GetMap_Request * data =
      (rtabmap_ros__srv__GetMap_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__srv__GetMap_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__srv__GetMap_Request__fini(&data[i]);
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
    if (!rtabmap_ros__srv__GetMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `data`
#include "rtabmap_ros/msg/detail/map_data__functions.h"

bool
rtabmap_ros__srv__GetMap_Response__init(rtabmap_ros__srv__GetMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rtabmap_ros__msg__MapData__init(&msg->data)) {
    rtabmap_ros__srv__GetMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__srv__GetMap_Response__fini(rtabmap_ros__srv__GetMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
  rtabmap_ros__msg__MapData__fini(&msg->data);
}

bool
rtabmap_ros__srv__GetMap_Response__are_equal(const rtabmap_ros__srv__GetMap_Response * lhs, const rtabmap_ros__srv__GetMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rtabmap_ros__msg__MapData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_ros__srv__GetMap_Response__copy(
  const rtabmap_ros__srv__GetMap_Response * input,
  rtabmap_ros__srv__GetMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rtabmap_ros__msg__MapData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rtabmap_ros__srv__GetMap_Response *
rtabmap_ros__srv__GetMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__GetMap_Response * msg = (rtabmap_ros__srv__GetMap_Response *)allocator.allocate(sizeof(rtabmap_ros__srv__GetMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__GetMap_Response));
  bool success = rtabmap_ros__srv__GetMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__GetMap_Response__destroy(rtabmap_ros__srv__GetMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__srv__GetMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__srv__GetMap_Response__Sequence__init(rtabmap_ros__srv__GetMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__GetMap_Response * data = NULL;

  if (size) {
    data = (rtabmap_ros__srv__GetMap_Response *)allocator.zero_allocate(size, sizeof(rtabmap_ros__srv__GetMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__GetMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__GetMap_Response__fini(&data[i - 1]);
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
rtabmap_ros__srv__GetMap_Response__Sequence__fini(rtabmap_ros__srv__GetMap_Response__Sequence * array)
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
      rtabmap_ros__srv__GetMap_Response__fini(&array->data[i]);
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

rtabmap_ros__srv__GetMap_Response__Sequence *
rtabmap_ros__srv__GetMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__srv__GetMap_Response__Sequence * array = (rtabmap_ros__srv__GetMap_Response__Sequence *)allocator.allocate(sizeof(rtabmap_ros__srv__GetMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__GetMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__GetMap_Response__Sequence__destroy(rtabmap_ros__srv__GetMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__srv__GetMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__srv__GetMap_Response__Sequence__are_equal(const rtabmap_ros__srv__GetMap_Response__Sequence * lhs, const rtabmap_ros__srv__GetMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__srv__GetMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__srv__GetMap_Response__Sequence__copy(
  const rtabmap_ros__srv__GetMap_Response__Sequence * input,
  rtabmap_ros__srv__GetMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__srv__GetMap_Response);
    rtabmap_ros__srv__GetMap_Response * data =
      (rtabmap_ros__srv__GetMap_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__srv__GetMap_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__srv__GetMap_Response__fini(&data[i]);
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
    if (!rtabmap_ros__srv__GetMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
