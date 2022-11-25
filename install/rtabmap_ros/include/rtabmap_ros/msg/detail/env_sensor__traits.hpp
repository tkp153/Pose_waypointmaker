// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_ros:msg/EnvSensor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__ENV_SENSOR__TRAITS_HPP_
#define RTABMAP_ROS__MSG__DETAIL__ENV_SENSOR__TRAITS_HPP_

#include "rtabmap_ros/msg/detail/env_sensor__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::msg::EnvSensor>()
{
  return "rtabmap_ros::msg::EnvSensor";
}

template<>
inline const char * name<rtabmap_ros::msg::EnvSensor>()
{
  return "rtabmap_ros/msg/EnvSensor";
}

template<>
struct has_fixed_size<rtabmap_ros::msg::EnvSensor>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rtabmap_ros::msg::EnvSensor>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rtabmap_ros::msg::EnvSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_ROS__MSG__DETAIL__ENV_SENSOR__TRAITS_HPP_
