// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__GET_PLAN__STRUCT_H_
#define RTABMAP_ROS__SRV__DETAIL__GET_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in srv/GetPlan in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__GetPlan_Request
{
  int32_t goal_node;
  geometry_msgs__msg__PoseStamped goal;
  float tolerance;
} rtabmap_ros__srv__GetPlan_Request;

// Struct for a sequence of rtabmap_ros__srv__GetPlan_Request.
typedef struct rtabmap_ros__srv__GetPlan_Request__Sequence
{
  rtabmap_ros__srv__GetPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__GetPlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'plan'
#include "rtabmap_ros/msg/detail/path__struct.h"

// Struct defined in srv/GetPlan in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__GetPlan_Response
{
  rtabmap_ros__msg__Path plan;
} rtabmap_ros__srv__GetPlan_Response;

// Struct for a sequence of rtabmap_ros__srv__GetPlan_Response.
typedef struct rtabmap_ros__srv__GetPlan_Response__Sequence
{
  rtabmap_ros__srv__GetPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__GetPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__SRV__DETAIL__GET_PLAN__STRUCT_H_
