// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/SetLabel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__SET_LABEL__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__SET_LABEL__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/set_label__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_SetLabel_Request_node_label
{
public:
  explicit Init_SetLabel_Request_node_label(::rtabmap_ros::srv::SetLabel_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::srv::SetLabel_Request node_label(::rtabmap_ros::srv::SetLabel_Request::_node_label_type arg)
  {
    msg_.node_label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::SetLabel_Request msg_;
};

class Init_SetLabel_Request_node_id
{
public:
  Init_SetLabel_Request_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLabel_Request_node_label node_id(::rtabmap_ros::srv::SetLabel_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_SetLabel_Request_node_label(msg_);
  }

private:
  ::rtabmap_ros::srv::SetLabel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::SetLabel_Request>()
{
  return rtabmap_ros::srv::builder::Init_SetLabel_Request_node_id();
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
auto build<::rtabmap_ros::srv::SetLabel_Response>()
{
  return ::rtabmap_ros::srv::SetLabel_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__SET_LABEL__BUILDER_HPP_
