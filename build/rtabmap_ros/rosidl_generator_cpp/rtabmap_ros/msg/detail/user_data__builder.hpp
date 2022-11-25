// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/UserData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__USER_DATA__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__USER_DATA__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/user_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_UserData_data
{
public:
  explicit Init_UserData_data(::rtabmap_ros::msg::UserData & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::UserData data(::rtabmap_ros::msg::UserData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::UserData msg_;
};

class Init_UserData_type
{
public:
  explicit Init_UserData_type(::rtabmap_ros::msg::UserData & msg)
  : msg_(msg)
  {}
  Init_UserData_data type(::rtabmap_ros::msg::UserData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_UserData_data(msg_);
  }

private:
  ::rtabmap_ros::msg::UserData msg_;
};

class Init_UserData_cols
{
public:
  explicit Init_UserData_cols(::rtabmap_ros::msg::UserData & msg)
  : msg_(msg)
  {}
  Init_UserData_type cols(::rtabmap_ros::msg::UserData::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_UserData_type(msg_);
  }

private:
  ::rtabmap_ros::msg::UserData msg_;
};

class Init_UserData_rows
{
public:
  explicit Init_UserData_rows(::rtabmap_ros::msg::UserData & msg)
  : msg_(msg)
  {}
  Init_UserData_cols rows(::rtabmap_ros::msg::UserData::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_UserData_cols(msg_);
  }

private:
  ::rtabmap_ros::msg::UserData msg_;
};

class Init_UserData_header
{
public:
  Init_UserData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserData_rows header(::rtabmap_ros::msg::UserData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UserData_rows(msg_);
  }

private:
  ::rtabmap_ros::msg::UserData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::UserData>()
{
  return rtabmap_ros::msg::builder::Init_UserData_header();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__USER_DATA__BUILDER_HPP_
