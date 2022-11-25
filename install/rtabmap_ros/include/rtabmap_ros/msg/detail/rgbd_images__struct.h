// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/RGBDImages.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__RGBD_IMAGES__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__RGBD_IMAGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rgbd_images'
#include "rtabmap_ros/msg/detail/rgbd_image__struct.h"

// Struct defined in msg/RGBDImages in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__RGBDImages
{
  std_msgs__msg__Header header;
  rtabmap_ros__msg__RGBDImage__Sequence rgbd_images;
} rtabmap_ros__msg__RGBDImages;

// Struct for a sequence of rtabmap_ros__msg__RGBDImages.
typedef struct rtabmap_ros__msg__RGBDImages__Sequence
{
  rtabmap_ros__msg__RGBDImages * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__RGBDImages__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__RGBD_IMAGES__STRUCT_H_
