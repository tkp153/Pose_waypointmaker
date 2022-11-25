// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__GOAL__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__GOAL__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_Goal_frame_id
{
public:
  explicit Init_Goal_frame_id(::rtabmap_ros::msg::Goal & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::Goal frame_id(::rtabmap_ros::msg::Goal::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::Goal msg_;
};

class Init_Goal_node_label
{
public:
  explicit Init_Goal_node_label(::rtabmap_ros::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_frame_id node_label(::rtabmap_ros::msg::Goal::_node_label_type arg)
  {
    msg_.node_label = std::move(arg);
    return Init_Goal_frame_id(msg_);
  }

private:
  ::rtabmap_ros::msg::Goal msg_;
};

class Init_Goal_node_id
{
public:
  explicit Init_Goal_node_id(::rtabmap_ros::msg::Goal & msg)
  : msg_(msg)
  {}
  Init_Goal_node_label node_id(::rtabmap_ros::msg::Goal::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_Goal_node_label(msg_);
  }

private:
  ::rtabmap_ros::msg::Goal msg_;
};

class Init_Goal_header
{
public:
  Init_Goal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Goal_node_id header(::rtabmap_ros::msg::Goal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Goal_node_id(msg_);
  }

private:
  ::rtabmap_ros::msg::Goal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::Goal>()
{
  return rtabmap_ros::msg::builder::Init_Goal_header();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__GOAL__BUILDER_HPP_
