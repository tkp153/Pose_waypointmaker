// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/cleanup_local_grids__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_CleanupLocalGrids_Request_filter_scans
{
public:
  explicit Init_CleanupLocalGrids_Request_filter_scans(::rtabmap_ros::srv::CleanupLocalGrids_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::srv::CleanupLocalGrids_Request filter_scans(::rtabmap_ros::srv::CleanupLocalGrids_Request::_filter_scans_type arg)
  {
    msg_.filter_scans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::CleanupLocalGrids_Request msg_;
};

class Init_CleanupLocalGrids_Request_radius
{
public:
  Init_CleanupLocalGrids_Request_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CleanupLocalGrids_Request_filter_scans radius(::rtabmap_ros::srv::CleanupLocalGrids_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_CleanupLocalGrids_Request_filter_scans(msg_);
  }

private:
  ::rtabmap_ros::srv::CleanupLocalGrids_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::CleanupLocalGrids_Request>()
{
  return rtabmap_ros::srv::builder::Init_CleanupLocalGrids_Request_radius();
}

}  // namespace rtabmap_ros


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_CleanupLocalGrids_Response_modified
{
public:
  Init_CleanupLocalGrids_Response_modified()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_ros::srv::CleanupLocalGrids_Response modified(::rtabmap_ros::srv::CleanupLocalGrids_Response::_modified_type arg)
  {
    msg_.modified = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::CleanupLocalGrids_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::CleanupLocalGrids_Response>()
{
  return rtabmap_ros::srv::builder::Init_CleanupLocalGrids_Response_modified();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__BUILDER_HPP_
