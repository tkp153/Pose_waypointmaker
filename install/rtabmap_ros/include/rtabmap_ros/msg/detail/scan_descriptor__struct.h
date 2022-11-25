// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_ros:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__SCAN_DESCRIPTOR__STRUCT_H_
#define RTABMAP_ROS__MSG__DETAIL__SCAN_DESCRIPTOR__STRUCT_H_

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
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__struct.h"
// Member 'scan_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'global_descriptor'
#include "rtabmap_ros/msg/detail/global_descriptor__struct.h"

// Struct defined in msg/ScanDescriptor in the package rtabmap_ros.
typedef struct rtabmap_ros__msg__ScanDescriptor
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__LaserScan scan;
  sensor_msgs__msg__PointCloud2 scan_cloud;
  rtabmap_ros__msg__GlobalDescriptor global_descriptor;
} rtabmap_ros__msg__ScanDescriptor;

// Struct for a sequence of rtabmap_ros__msg__ScanDescriptor.
typedef struct rtabmap_ros__msg__ScanDescriptor__Sequence
{
  rtabmap_ros__msg__ScanDescriptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_ros__msg__ScanDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__SCAN_DESCRIPTOR__STRUCT_H_
