// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:srv/GetMap2.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__GET_MAP2__STRUCT_H_
#define RTABMAP_ROS__SRV__DETAIL__GET_MAP2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetMap2 in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__GetMap2_Request
{
  bool global_map;
  bool optimized;
  bool with_images;
  bool with_scans;
  bool with_user_data;
  bool with_grids;
  bool with_words;
  bool with_global_descriptors;
} rtabmap_ros__srv__GetMap2_Request;

// Struct for a sequence of rtabmap_ros__srv__GetMap2_Request.
typedef struct rtabmap_ros__srv__GetMap2_Request__Sequence
{
  rtabmap_ros__srv__GetMap2_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__GetMap2_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rtabmap_ros/msg/detail/map_data__struct.h"

// Struct defined in srv/GetMap2 in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__GetMap2_Response
{
  rtabmap_ros__msg__MapData data;
} rtabmap_ros__srv__GetMap2_Response;

// Struct for a sequence of rtabmap_ros__srv__GetMap2_Response.
typedef struct rtabmap_ros__srv__GetMap2_Response__Sequence
{
  rtabmap_ros__srv__GetMap2_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__GetMap2_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__SRV__DETAIL__GET_MAP2__STRUCT_H_
