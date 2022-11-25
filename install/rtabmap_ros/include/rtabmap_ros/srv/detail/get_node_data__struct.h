// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:srv/GetNodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__STRUCT_H_
#define RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/GetNodeData in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__GetNodeData_Request
{
  rosidl_runtime_c__int32__Sequence ids;
  bool images;
  bool scan;
  bool grid;
  bool user_data;
} rtabmap_ros__srv__GetNodeData_Request;

// Struct for a sequence of rtabmap_ros__srv__GetNodeData_Request.
typedef struct rtabmap_ros__srv__GetNodeData_Request__Sequence
{
  rtabmap_ros__srv__GetNodeData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__GetNodeData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rtabmap_ros/msg/detail/node_data__struct.h"

// Struct defined in srv/GetNodeData in the package rtabmap_ros.
typedef struct rtabmap_ros__srv__GetNodeData_Response
{
  rtabmap_ros__msg__NodeData__Sequence data;
} rtabmap_ros__srv__GetNodeData_Response;

// Struct for a sequence of rtabmap_ros__srv__GetNodeData_Response.
typedef struct rtabmap_ros__srv__GetNodeData_Response__Sequence
{
  rtabmap_ros__srv__GetNodeData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__srv__GetNodeData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__STRUCT_H_
