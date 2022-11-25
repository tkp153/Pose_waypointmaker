// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__GOAL__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__GOAL__STRUCT_H_

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
// Member 'node_label'
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Goal in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__Goal
{
  std_msgs__msg__Header header;
  int32_t node_id;
  rosidl_runtime_c__String node_label;
  rosidl_runtime_c__String frame_id;
} rtabmap_ros__msg__Goal;

// Struct for a sequence of rtabmap_ros__msg__Goal.
typedef struct rtabmap_ros__msg__Goal__Sequence
{
  rtabmap_ros__msg__Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__Goal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__GOAL__STRUCT_H_
