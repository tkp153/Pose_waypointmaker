// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:srv/SetGoal.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__SET_GOAL__STRUCT_H_
#define RTABMAP_ROS__SRV__DETAIL__SET_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_label'
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetGoal in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__SetGoal_Request
{
  int32_t node_id;
  rosidl_runtime_c__String node_label;
  rosidl_runtime_c__String frame_id;
} rtabmap_ros__srv__SetGoal_Request;

// Struct for a sequence of rtabmap_ros__srv__SetGoal_Request.
typedef struct rtabmap_ros__srv__SetGoal_Request__Sequence
{
  rtabmap_ros__srv__SetGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__SetGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'path_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/SetGoal in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__SetGoal_Response
{
  rosidl_runtime_c__int32__Sequence path_ids;
  geometry_msgs__msg__Pose__Sequence path_poses;
  float planning_time;
} rtabmap_ros__srv__SetGoal_Response;

// Struct for a sequence of rtabmap_ros__srv__SetGoal_Response.
typedef struct rtabmap_ros__srv__SetGoal_Response__Sequence
{
  rtabmap_ros__srv__SetGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__SetGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__SRV__DETAIL__SET_GOAL__STRUCT_H_
