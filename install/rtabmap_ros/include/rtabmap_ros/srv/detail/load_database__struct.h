// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:srv/LoadDatabase.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__LOAD_DATABASE__STRUCT_H_
#define RTABMAP_ROS__SRV__DETAIL__LOAD_DATABASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'database_path'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/LoadDatabase in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__LoadDatabase_Request
{
  rosidl_runtime_c__String database_path;
  bool clear;
} rtabmap_ros__srv__LoadDatabase_Request;

// Struct for a sequence of rtabmap_ros__srv__LoadDatabase_Request.
typedef struct rtabmap_ros__srv__LoadDatabase_Request__Sequence
{
  rtabmap_ros__srv__LoadDatabase_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__LoadDatabase_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/LoadDatabase in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__LoadDatabase_Response
{
  uint8_t structure_needs_at_least_one_member;
} rtabmap_ros__srv__LoadDatabase_Response;

// Struct for a sequence of rtabmap_ros__srv__LoadDatabase_Response.
typedef struct rtabmap_ros__srv__LoadDatabase_Response__Sequence
{
  rtabmap_ros__srv__LoadDatabase_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__LoadDatabase_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__SRV__DETAIL__LOAD_DATABASE__STRUCT_H_
