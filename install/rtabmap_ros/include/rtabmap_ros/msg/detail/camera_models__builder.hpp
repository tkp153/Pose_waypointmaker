// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/CameraModels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__CAMERA_MODELS__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__CAMERA_MODELS__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/camera_models__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_CameraModels_models
{
public:
  Init_CameraModels_models()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_ros::msg::CameraModels models(::rtabmap_ros::msg::CameraModels::_models_type arg)
  {
    msg_.models = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::CameraModels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::CameraModels>()
{
  return rtabmap_ros::msg::builder::Init_CameraModels_models();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__CAMERA_MODELS__BUILDER_HPP_
