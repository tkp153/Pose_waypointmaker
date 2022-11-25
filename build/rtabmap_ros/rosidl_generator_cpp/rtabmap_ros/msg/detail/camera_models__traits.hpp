// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_ros:msg/CameraModels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__CAMERA_MODELS__TRAITS_HPP_
#define RTABMAP_ROS__MSG__DETAIL__CAMERA_MODELS__TRAITS_HPP_

#include "rtabmap_ros/msg/detail/camera_models__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::msg::CameraModels>()
{
  return "rtabmap_ros::msg::CameraModels";
}

template<>
inline const char * name<rtabmap_ros::msg::CameraModels>()
{
  return "rtabmap_ros/msg/CameraModels";
}

template<>
struct has_fixed_size<rtabmap_ros::msg::CameraModels>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_ros::msg::CameraModels>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_ros::msg::CameraModels>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_ROS__MSG__DETAIL__CAMERA_MODELS__TRAITS_HPP_
