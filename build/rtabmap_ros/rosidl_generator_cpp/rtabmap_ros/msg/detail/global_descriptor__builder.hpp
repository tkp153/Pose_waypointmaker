// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/global_descriptor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_GlobalDescriptor_data
{
public:
  explicit Init_GlobalDescriptor_data(::rtabmap_ros::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::GlobalDescriptor data(::rtabmap_ros::msg::GlobalDescriptor::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_info
{
public:
  explicit Init_GlobalDescriptor_info(::rtabmap_ros::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  Init_GlobalDescriptor_data info(::rtabmap_ros::msg::GlobalDescriptor::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GlobalDescriptor_data(msg_);
  }

private:
  ::rtabmap_ros::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_type
{
public:
  explicit Init_GlobalDescriptor_type(::rtabmap_ros::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  Init_GlobalDescriptor_info type(::rtabmap_ros::msg::GlobalDescriptor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GlobalDescriptor_info(msg_);
  }

private:
  ::rtabmap_ros::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_header
{
public:
  Init_GlobalDescriptor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalDescriptor_type header(::rtabmap_ros::msg::GlobalDescriptor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GlobalDescriptor_type(msg_);
  }

private:
  ::rtabmap_ros::msg::GlobalDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::GlobalDescriptor>()
{
  return rtabmap_ros::msg::builder::Init_GlobalDescriptor_header();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_
