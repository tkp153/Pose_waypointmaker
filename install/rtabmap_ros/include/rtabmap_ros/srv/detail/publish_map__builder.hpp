// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/PublishMap.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__PUBLISH_MAP__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__PUBLISH_MAP__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/publish_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_PublishMap_Request_graph_only
{
public:
  explicit Init_PublishMap_Request_graph_only(::rtabmap_ros::srv::PublishMap_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::srv::PublishMap_Request graph_only(::rtabmap_ros::srv::PublishMap_Request::_graph_only_type arg)
  {
    msg_.graph_only = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::PublishMap_Request msg_;
};

class Init_PublishMap_Request_optimized
{
public:
  explicit Init_PublishMap_Request_optimized(::rtabmap_ros::srv::PublishMap_Request & msg)
  : msg_(msg)
  {}
  Init_PublishMap_Request_graph_only optimized(::rtabmap_ros::srv::PublishMap_Request::_optimized_type arg)
  {
    msg_.optimized = std::move(arg);
    return Init_PublishMap_Request_graph_only(msg_);
  }

private:
  ::rtabmap_ros::srv::PublishMap_Request msg_;
};

class Init_PublishMap_Request_global_map
{
public:
  Init_PublishMap_Request_global_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PublishMap_Request_optimized global_map(::rtabmap_ros::srv::PublishMap_Request::_global_map_type arg)
  {
    msg_.global_map = std::move(arg);
    return Init_PublishMap_Request_optimized(msg_);
  }

private:
  ::rtabmap_ros::srv::PublishMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::PublishMap_Request>()
{
  return rtabmap_ros::srv::builder::Init_PublishMap_Request_global_map();
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
auto build<::rtabmap_ros::srv::PublishMap_Response>()
{
  return ::rtabmap_ros::srv::PublishMap_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__PUBLISH_MAP__BUILDER_HPP_
