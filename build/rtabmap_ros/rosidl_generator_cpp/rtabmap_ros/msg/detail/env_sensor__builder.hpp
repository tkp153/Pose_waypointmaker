// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/EnvSensor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__ENV_SENSOR__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__ENV_SENSOR__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/env_sensor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_EnvSensor_value
{
public:
  explicit Init_EnvSensor_value(::rtabmap_ros::msg::EnvSensor & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::EnvSensor value(::rtabmap_ros::msg::EnvSensor::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::EnvSensor msg_;
};

class Init_EnvSensor_type
{
public:
  explicit Init_EnvSensor_type(::rtabmap_ros::msg::EnvSensor & msg)
  : msg_(msg)
  {}
  Init_EnvSensor_value type(::rtabmap_ros::msg::EnvSensor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EnvSensor_value(msg_);
  }

private:
  ::rtabmap_ros::msg::EnvSensor msg_;
};

class Init_EnvSensor_header
{
public:
  Init_EnvSensor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvSensor_type header(::rtabmap_ros::msg::EnvSensor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnvSensor_type(msg_);
  }

private:
  ::rtabmap_ros::msg::EnvSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::EnvSensor>()
{
  return rtabmap_ros::msg::builder::Init_EnvSensor_header();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__ENV_SENSOR__BUILDER_HPP_
