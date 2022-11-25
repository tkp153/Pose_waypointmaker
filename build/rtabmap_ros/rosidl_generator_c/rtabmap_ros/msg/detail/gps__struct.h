// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__GPS__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__GPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/GPS in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__GPS
{
  double stamp;
  double longitude;
  double latitude;
  double altitude;
  double error;
  double bearing;
} rtabmap_ros__msg__GPS;

// Struct for a sequence of rtabmap_ros__msg__GPS.
typedef struct rtabmap_ros__msg__GPS__Sequence
{
  rtabmap_ros__msg__GPS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__GPS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__GPS__STRUCT_H_
