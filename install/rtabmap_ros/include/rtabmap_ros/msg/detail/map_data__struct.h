// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__MAP_DATA__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__MAP_DATA__STRUCT_H_

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
// Member 'graph'
#include "rtabmap_ros/msg/detail/map_graph__struct.h"
// Member 'nodes'
#include "rtabmap_ros/msg/detail/node_data__struct.h"

// Struct defined in msg/MapData in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__MapData
{
  std_msgs__msg__Header header;
  rtabmap_ros__msg__MapGraph graph;
  rtabmap_ros__msg__NodeData__Sequence nodes;
} rtabmap_ros__msg__MapData;

// Struct for a sequence of rtabmap_ros__msg__MapData.
typedef struct rtabmap_ros__msg__MapData__Sequence
{
  rtabmap_ros__msg__MapData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__MapData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__MAP_DATA__STRUCT_H_
