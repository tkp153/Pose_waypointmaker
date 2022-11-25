// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_ros:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__TRAITS_HPP_
#define RTABMAP_ROS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__TRAITS_HPP_

#include "rtabmap_ros/srv/detail/detect_more_loop_closures__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::DetectMoreLoopClosures_Request>()
{
  return "rtabmap_ros::srv::DetectMoreLoopClosures_Request";
}

template<>
inline const char * name<rtabmap_ros::srv::DetectMoreLoopClosures_Request>()
{
  return "rtabmap_ros/srv/DetectMoreLoopClosures_Request";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::DetectMoreLoopClosures_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_ros::srv::DetectMoreLoopClosures_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_ros::srv::DetectMoreLoopClosures_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::DetectMoreLoopClosures_Response>()
{
  return "rtabmap_ros::srv::DetectMoreLoopClosures_Response";
}

template<>
inline const char * name<rtabmap_ros::srv::DetectMoreLoopClosures_Response>()
{
  return "rtabmap_ros/srv/DetectMoreLoopClosures_Response";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::DetectMoreLoopClosures_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_ros::srv::DetectMoreLoopClosures_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_ros::srv::DetectMoreLoopClosures_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::DetectMoreLoopClosures>()
{
  return "rtabmap_ros::srv::DetectMoreLoopClosures";
}

template<>
inline const char * name<rtabmap_ros::srv::DetectMoreLoopClosures>()
{
  return "rtabmap_ros/srv/DetectMoreLoopClosures";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::DetectMoreLoopClosures>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_ros::srv::DetectMoreLoopClosures_Request>::value &&
    has_fixed_size<rtabmap_ros::srv::DetectMoreLoopClosures_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_ros::srv::DetectMoreLoopClosures>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_ros::srv::DetectMoreLoopClosures_Request>::value &&
    has_bounded_size<rtabmap_ros::srv::DetectMoreLoopClosures_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_ros::srv::DetectMoreLoopClosures>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_ros::srv::DetectMoreLoopClosures_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_ros::srv::DetectMoreLoopClosures_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_ROS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__TRAITS_HPP_
