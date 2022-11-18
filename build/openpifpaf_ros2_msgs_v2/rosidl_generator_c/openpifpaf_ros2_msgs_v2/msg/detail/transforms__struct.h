// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openpifpaf_ros2_msgs_v2:msg/Transforms.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__TRANSFORMS__STRUCT_H_
#define OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__TRANSFORMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transforms'
#include "openpifpaf_ros2_msgs_v2/msg/detail/transform__struct.h"

// Struct defined in msg/Transforms in the package openpifpaf_ros2_msgs_v2.
typedef struct openpifpaf_ros2_msgs_v2__msg__Transforms
{
  openpifpaf_ros2_msgs_v2__msg__Transform__Sequence transforms;
} openpifpaf_ros2_msgs_v2__msg__Transforms;

// Struct for a sequence of openpifpaf_ros2_msgs_v2__msg__Transforms.
typedef struct openpifpaf_ros2_msgs_v2__msg__Transforms__Sequence
{
  openpifpaf_ros2_msgs_v2__msg__Transforms * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openpifpaf_ros2_msgs_v2__msg__Transforms__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__TRANSFORMS__STRUCT_H_
