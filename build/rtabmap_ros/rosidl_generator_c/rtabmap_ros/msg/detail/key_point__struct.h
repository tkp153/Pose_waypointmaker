// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__KEY_POINT__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__KEY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pt'
#include "rtabmap_ros/msg/detail/point2f__struct.h"

// Struct defined in msg/KeyPoint in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__KeyPoint
{
  rtabmap_ros__msg__Point2f pt;
  float size;
  float angle;
  float response;
  int32_t octave;
  int32_t class_id;
} rtabmap_ros__msg__KeyPoint;

// Struct for a sequence of rtabmap_ros__msg__KeyPoint.
typedef struct rtabmap_ros__msg__KeyPoint__Sequence
{
  rtabmap_ros__msg__KeyPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__KeyPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__KEY_POINT__STRUCT_H_
