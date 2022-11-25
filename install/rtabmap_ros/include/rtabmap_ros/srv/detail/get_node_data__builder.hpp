// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/GetNodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/get_node_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_GetNodeData_Request_user_data
{
public:
  explicit Init_GetNodeData_Request_user_data(::rtabmap_ros::srv::GetNodeData_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::srv::GetNodeData_Request user_data(::rtabmap_ros::srv::GetNodeData_Request::_user_data_type arg)
  {
    msg_.user_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::GetNodeData_Request msg_;
};

class Init_GetNodeData_Request_grid
{
public:
  explicit Init_GetNodeData_Request_grid(::rtabmap_ros::srv::GetNodeData_Request & msg)
  : msg_(msg)
  {}
  Init_GetNodeData_Request_user_data grid(::rtabmap_ros::srv::GetNodeData_Request::_grid_type arg)
  {
    msg_.grid = std::move(arg);
    return Init_GetNodeData_Request_user_data(msg_);
  }

private:
  ::rtabmap_ros::srv::GetNodeData_Request msg_;
};

class Init_GetNodeData_Request_scan
{
public:
  explicit Init_GetNodeData_Request_scan(::rtabmap_ros::srv::GetNodeData_Request & msg)
  : msg_(msg)
  {}
  Init_GetNodeData_Request_grid scan(::rtabmap_ros::srv::GetNodeData_Request::_scan_type arg)
  {
    msg_.scan = std::move(arg);
    return Init_GetNodeData_Request_grid(msg_);
  }

private:
  ::rtabmap_ros::srv::GetNodeData_Request msg_;
};

class Init_GetNodeData_Request_images
{
public:
  explicit Init_GetNodeData_Request_images(::rtabmap_ros::srv::GetNodeData_Request & msg)
  : msg_(msg)
  {}
  Init_GetNodeData_Request_scan images(::rtabmap_ros::srv::GetNodeData_Request::_images_type arg)
  {
    msg_.images = std::move(arg);
    return Init_GetNodeData_Request_scan(msg_);
  }

private:
  ::rtabmap_ros::srv::GetNodeData_Request msg_;
};

class Init_GetNodeData_Request_ids
{
public:
  Init_GetNodeData_Request_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNodeData_Request_images ids(::rtabmap_ros::srv::GetNodeData_Request::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_GetNodeData_Request_images(msg_);
  }

private:
  ::rtabmap_ros::srv::GetNodeData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::GetNodeData_Request>()
{
  return rtabmap_ros::srv::builder::Init_GetNodeData_Request_ids();
}

}  // namespace rtabmap_ros


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_GetNodeData_Response_data
{
public:
  Init_GetNodeData_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_ros::srv::GetNodeData_Response data(::rtabmap_ros::srv::GetNodeData_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::GetNodeData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::GetNodeData_Response>()
{
  return rtabmap_ros::srv::builder::Init_GetNodeData_Response_data();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__GET_NODE_DATA__BUILDER_HPP_
