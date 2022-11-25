// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_ros:srv/PublishMap.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__PUBLISH_MAP__TRAITS_HPP_
#define RTABMAP_ROS__SRV__DETAIL__PUBLISH_MAP__TRAITS_HPP_

#include "rtabmap_ros/srv/detail/publish_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::PublishMap_Request>()
{
  return "rtabmap_ros::srv::PublishMap_Request";
}

template<>
inline const char * name<rtabmap_ros::srv::PublishMap_Request>()
{
  return "rtabmap_ros/srv/PublishMap_Request";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::PublishMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_ros::srv::PublishMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_ros::srv::PublishMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::PublishMap_Response>()
{
  return "rtabmap_ros::srv::PublishMap_Response";
}

template<>
inline const char * name<rtabmap_ros::srv::PublishMap_Response>()
{
  return "rtabmap_ros/srv/PublishMap_Response";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::PublishMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_ros::srv::PublishMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_ros::srv::PublishMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_ros::srv::PublishMap>()
{
  return "rtabmap_ros::srv::PublishMap";
}

template<>
inline const char * name<rtabmap_ros::srv::PublishMap>()
{
  return "rtabmap_ros/srv/PublishMap";
}

template<>
struct has_fixed_size<rtabmap_ros::srv::PublishMap>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_ros::srv::PublishMap_Request>::value &&
    has_fixed_size<rtabmap_ros::srv::PublishMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_ros::srv::PublishMap>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_ros::srv::PublishMap_Request>::value &&
    has_bounded_size<rtabmap_ros::srv::PublishMap_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_ros::srv::PublishMap>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_ros::srv::PublishMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_ros::srv::PublishMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_ROS__SRV__DETAIL__PUBLISH_MAP__TRAITS_HPP_
