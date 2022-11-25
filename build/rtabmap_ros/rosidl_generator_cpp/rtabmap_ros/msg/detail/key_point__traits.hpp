// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_ros:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
#define RTABMAP_ROS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_

#include "rtabmap_ros/msg/detail/key_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pt'
#include "rtabmap_ros/msg/detail/point2f__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::msg::KeyPoint>()
{
  return "rtabmap_ros::msg::KeyPoint";
}

template<>
inline const char * name<rtabmap_ros::msg::KeyPoint>()
{
  return "rtabmap_ros/msg/KeyPoint";
}

template<>
struct has_fixed_size<rtabmap_ros::msg::KeyPoint>
  : std::integral_constant<bool, has_fixed_size<rtabmap_ros::msg::Point2f>::value> {};

template<>
struct has_bounded_size<rtabmap_ros::msg::KeyPoint>
  : std::integral_constant<bool, has_bounded_size<rtabmap_ros::msg::Point2f>::value> {};

template<>
struct is_message<rtabmap_ros::msg::KeyPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_ROS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
