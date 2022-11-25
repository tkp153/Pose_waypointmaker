// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/LoadDatabase.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__LOAD_DATABASE__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__LOAD_DATABASE__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/load_database__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_LoadDatabase_Request_clear
{
public:
  explicit Init_LoadDatabase_Request_clear(::rtabmap_ros::srv::LoadDatabase_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::srv::LoadDatabase_Request clear(::rtabmap_ros::srv::LoadDatabase_Request::_clear_type arg)
  {
    msg_.clear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::LoadDatabase_Request msg_;
};

class Init_LoadDatabase_Request_database_path
{
public:
  Init_LoadDatabase_Request_database_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadDatabase_Request_clear database_path(::rtabmap_ros::srv::LoadDatabase_Request::_database_path_type arg)
  {
    msg_.database_path = std::move(arg);
    return Init_LoadDatabase_Request_clear(msg_);
  }

private:
  ::rtabmap_ros::srv::LoadDatabase_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::LoadDatabase_Request>()
{
  return rtabmap_ros::srv::builder::Init_LoadDatabase_Request_database_path();
}

}  // namespace rtabmap_ros


namespace rtabmap_ros
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::LoadDatabase_Response>()
{
  return ::rtabmap_ros::srv::LoadDatabase_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__LOAD_DATABASE__BUILDER_HPP_
