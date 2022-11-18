// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openpifpaf_ros2_msgs:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.h"

// Struct defined in msg/Transform in the package openpifpaf_ros2_msgs.
typedef struct openpifpaf_ros2_msgs__msg__Transform
{
  geometry_msgs__msg__Transform transform;
} openpifpaf_ros2_msgs__msg__Transform;

// Struct for a sequence of openpifpaf_ros2_msgs__msg__Transform.
typedef struct openpifpaf_ros2_msgs__msg__Transform__Sequence
{
  openpifpaf_ros2_msgs__msg__Transform * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openpifpaf_ros2_msgs__msg__Transform__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_
