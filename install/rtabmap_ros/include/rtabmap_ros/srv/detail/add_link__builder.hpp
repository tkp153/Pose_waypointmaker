// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/AddLink.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__ADD_LINK__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__ADD_LINK__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/add_link__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_AddLink_Request_link
{
public:
  Init_AddLink_Request_link()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_ros::srv::AddLink_Request link(::rtabmap_ros::srv::AddLink_Request::_link_type arg)
  {
    msg_.link = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::AddLink_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::AddLink_Request>()
{
  return rtabmap_ros::srv::builder::Init_AddLink_Request_link();
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
auto build<::rtabmap_ros::srv::AddLink_Response>()
{
  return ::rtabmap_ros::srv::AddLink_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__ADD_LINK__BUILDER_HPP_
