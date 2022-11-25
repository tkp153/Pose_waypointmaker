// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/RGBDImage.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/rgbd_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rgb_camera_info`
// Member `depth_camera_info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"
// Member `rgb`
// Member `depth`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `rgb_compressed`
// Member `depth_compressed`
#include "sensor_msgs/msg/detail/compressed_image__functions.h"
// Member `key_points`
#include "rtabmap_ros/msg/detail/key_point__functions.h"
// Member `points`
#include "rtabmap_ros/msg/detail/point3f__functions.h"
// Member `descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `global_descriptor`
#include "rtabmap_ros/msg/detail/global_descriptor__functions.h"

bool
rtabmap_ros__msg__RGBDImage__init(rtabmap_ros__msg__RGBDImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // rgb_camera_info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->rgb_camera_info)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // depth_camera_info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->depth_camera_info)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // rgb
  if (!sensor_msgs__msg__Image__init(&msg->rgb)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // depth
  if (!sensor_msgs__msg__Image__init(&msg->depth)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // rgb_compressed
  if (!sensor_msgs__msg__CompressedImage__init(&msg->rgb_compressed)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // depth_compressed
  if (!sensor_msgs__msg__CompressedImage__init(&msg->depth_compressed)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // key_points
  if (!rtabmap_ros__msg__KeyPoint__Sequence__init(&msg->key_points, 0)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // points
  if (!rtabmap_ros__msg__Point3f__Sequence__init(&msg->points, 0)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // descriptors
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->descriptors, 0)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  // global_descriptor
  if (!rtabmap_ros__msg__GlobalDescriptor__init(&msg->global_descriptor)) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__RGBDImage__fini(rtabmap_ros__msg__RGBDImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rgb_camera_info
  sensor_msgs__msg__CameraInfo__fini(&msg->rgb_camera_info);
  // depth_camera_info
  sensor_msgs__msg__CameraInfo__fini(&msg->depth_camera_info);
  // rgb
  sensor_msgs__msg__Image__fini(&msg->rgb);
  // depth
  sensor_msgs__msg__Image__fini(&msg->depth);
  // rgb_compressed
  sensor_msgs__msg__CompressedImage__fini(&msg->rgb_compressed);
  // depth_compressed
  sensor_msgs__msg__CompressedImage__fini(&msg->depth_compressed);
  // key_points
  rtabmap_ros__msg__KeyPoint__Sequence__fini(&msg->key_points);
  // points
  rtabmap_ros__msg__Point3f__Sequence__fini(&msg->points);
  // descriptors
  rosidl_runtime_c__uint8__Sequence__fini(&msg->descriptors);
  // global_descriptor
  rtabmap_ros__msg__GlobalDescriptor__fini(&msg->global_descriptor);
}

bool
rtabmap_ros__msg__RGBDImage__are_equal(const rtabmap_ros__msg__RGBDImage * lhs, const rtabmap_ros__msg__RGBDImage * rhs)
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
  // rgb_camera_info
  if (!sensor_msgs__msg__CameraInfo__are_equal(
      &(lhs->rgb_camera_info), &(rhs->rgb_camera_info)))
  {
    return false;
  }
  // depth_camera_info
  if (!sensor_msgs__msg__CameraInfo__are_equal(
      &(lhs->depth_camera_info), &(rhs->depth_camera_info)))
  {
    return false;
  }
  // rgb
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->rgb), &(rhs->rgb)))
  {
    return false;
  }
  // depth
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->depth), &(rhs->depth)))
  {
    return false;
  }
  // rgb_compressed
  if (!sensor_msgs__msg__CompressedImage__are_equal(
      &(lhs->rgb_compressed), &(rhs->rgb_compressed)))
  {
    return false;
  }
  // depth_compressed
  if (!sensor_msgs__msg__CompressedImage__are_equal(
      &(lhs->depth_compressed), &(rhs->depth_compressed)))
  {
    return false;
  }
  // key_points
  if (!rtabmap_ros__msg__KeyPoint__Sequence__are_equal(
      &(lhs->key_points), &(rhs->key_points)))
  {
    return false;
  }
  // points
  if (!rtabmap_ros__msg__Point3f__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // descriptors
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->descriptors), &(rhs->descriptors)))
  {
    return false;
  }
  // global_descriptor
  if (!rtabmap_ros__msg__GlobalDescriptor__are_equal(
      &(lhs->global_descriptor), &(rhs->global_descriptor)))
  {
    return false;
  }
  return true;
}

bool
rtabmap_ros__msg__RGBDImage__copy(
  const rtabmap_ros__msg__RGBDImage * input,
  rtabmap_ros__msg__RGBDImage * output)
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
  // rgb_camera_info
  if (!sensor_msgs__msg__CameraInfo__copy(
      &(input->rgb_camera_info), &(output->rgb_camera_info)))
  {
    return false;
  }
  // depth_camera_info
  if (!sensor_msgs__msg__CameraInfo__copy(
      &(input->depth_camera_info), &(output->depth_camera_info)))
  {
    return false;
  }
  // rgb
  if (!sensor_msgs__msg__Image__copy(
      &(input->rgb), &(output->rgb)))
  {
    return false;
  }
  // depth
  if (!sensor_msgs__msg__Image__copy(
      &(input->depth), &(output->depth)))
  {
    return false;
  }
  // rgb_compressed
  if (!sensor_msgs__msg__CompressedImage__copy(
      &(input->rgb_compressed), &(output->rgb_compressed)))
  {
    return false;
  }
  // depth_compressed
  if (!sensor_msgs__msg__CompressedImage__copy(
      &(input->depth_compressed), &(output->depth_compressed)))
  {
    return false;
  }
  // key_points
  if (!rtabmap_ros__msg__KeyPoint__Sequence__copy(
      &(input->key_points), &(output->key_points)))
  {
    return false;
  }
  // points
  if (!rtabmap_ros__msg__Point3f__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // descriptors
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->descriptors), &(output->descriptors)))
  {
    return false;
  }
  // global_descriptor
  if (!rtabmap_ros__msg__GlobalDescriptor__copy(
      &(input->global_descriptor), &(output->global_descriptor)))
  {
    return false;
  }
  return true;
}

rtabmap_ros__msg__RGBDImage *
rtabmap_ros__msg__RGBDImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__RGBDImage * msg = (rtabmap_ros__msg__RGBDImage *)allocator.allocate(sizeof(rtabmap_ros__msg__RGBDImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__RGBDImage));
  bool success = rtabmap_ros__msg__RGBDImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__RGBDImage__destroy(rtabmap_ros__msg__RGBDImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_ros__msg__RGBDImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_ros__msg__RGBDImage__Sequence__init(rtabmap_ros__msg__RGBDImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__RGBDImage * data = NULL;

  if (size) {
    data = (rtabmap_ros__msg__RGBDImage *)allocator.zero_allocate(size, sizeof(rtabmap_ros__msg__RGBDImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__RGBDImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__RGBDImage__fini(&data[i - 1]);
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
rtabmap_ros__msg__RGBDImage__Sequence__fini(rtabmap_ros__msg__RGBDImage__Sequence * array)
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
      rtabmap_ros__msg__RGBDImage__fini(&array->data[i]);
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

rtabmap_ros__msg__RGBDImage__Sequence *
rtabmap_ros__msg__RGBDImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_ros__msg__RGBDImage__Sequence * array = (rtabmap_ros__msg__RGBDImage__Sequence *)allocator.allocate(sizeof(rtabmap_ros__msg__RGBDImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__RGBDImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__RGBDImage__Sequence__destroy(rtabmap_ros__msg__RGBDImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_ros__msg__RGBDImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_ros__msg__RGBDImage__Sequence__are_equal(const rtabmap_ros__msg__RGBDImage__Sequence * lhs, const rtabmap_ros__msg__RGBDImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_ros__msg__RGBDImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_ros__msg__RGBDImage__Sequence__copy(
  const rtabmap_ros__msg__RGBDImage__Sequence * input,
  rtabmap_ros__msg__RGBDImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_ros__msg__RGBDImage);
    rtabmap_ros__msg__RGBDImage * data =
      (rtabmap_ros__msg__RGBDImage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_ros__msg__RGBDImage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtabmap_ros__msg__RGBDImage__fini(&data[i]);
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
    if (!rtabmap_ros__msg__RGBDImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
