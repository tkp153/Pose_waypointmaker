// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/RemoveLabel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__REMOVE_LABEL__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__REMOVE_LABEL__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/remove_label__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_RemoveLabel_Request_label
{
public:
  Init_RemoveLabel_Request_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_ros::srv::RemoveLabel_Request label(::rtabmap_ros::srv::RemoveLabel_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::RemoveLabel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::RemoveLabel_Request>()
{
  return rtabmap_ros::srv::builder::Init_RemoveLabel_Request_label();
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
auto build<::rtabmap_ros::srv::RemoveLabel_Response>()
{
  return ::rtabmap_ros::srv::RemoveLabel_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__REMOVE_LABEL__BUILDER_HPP_
