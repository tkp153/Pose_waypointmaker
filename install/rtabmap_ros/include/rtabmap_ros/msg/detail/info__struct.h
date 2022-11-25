// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__INFO__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__INFO__STRUCT_H_

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
// Member 'loop_closure_transform'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'wm_state'
// Member 'posterior_keys'
// Member 'posterior_values'
// Member 'likelihood_keys'
// Member 'likelihood_values'
// Member 'raw_likelihood_keys'
// Member 'raw_likelihood_values'
// Member 'weights_keys'
// Member 'weights_values'
// Member 'labels_keys'
// Member 'stats_values'
// Member 'local_path'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'labels_values'
// Member 'stats_keys'
#include "rosidl_runtime_c/string.h"
// Member 'odom_cache'
#include "rtabmap_ros/msg/detail/map_graph__struct.h"

// Struct defined in msg/Info in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__Info
{
  std_msgs__msg__Header header;
  int32_t ref_id;
  int32_t loop_closure_id;
  int32_t proximity_detection_id;
  int32_t landmark_id;
  geometry_msgs__msg__Transform loop_closure_transform;
  rosidl_runtime_c__int32__Sequence wm_state;
  rosidl_runtime_c__int32__Sequence posterior_keys;
  rosidl_runtime_c__float__Sequence posterior_values;
  rosidl_runtime_c__int32__Sequence likelihood_keys;
  rosidl_runtime_c__float__Sequence likelihood_values;
  rosidl_runtime_c__int32__Sequence raw_likelihood_keys;
  rosidl_runtime_c__float__Sequence raw_likelihood_values;
  rosidl_runtime_c__int32__Sequence weights_keys;
  rosidl_runtime_c__int32__Sequence weights_values;
  rosidl_runtime_c__int32__Sequence labels_keys;
  rosidl_runtime_c__String__Sequence labels_values;
  rosidl_runtime_c__String__Sequence stats_keys;
  rosidl_runtime_c__float__Sequence stats_values;
  rosidl_runtime_c__int32__Sequence local_path;
  int32_t current_goal_id;
  rtabmap_ros__msg__MapGraph odom_cache;
} rtabmap_ros__msg__Info;

// Struct for a sequence of rtabmap_ros__msg__Info.
typedef struct rtabmap_ros__msg__Info__Sequence
{
  rtabmap_ros__msg__Info * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__Info__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__INFO__STRUCT_H_
