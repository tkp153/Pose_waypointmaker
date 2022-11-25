// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/CameraModel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__CAMERA_MODEL__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__CAMERA_MODEL__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/camera_model__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_CameraModel_local_transform
{
public:
  explicit Init_CameraModel_local_transform(::rtabmap_ros::msg::CameraModel & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::CameraModel local_transform(::rtabmap_ros::msg::CameraModel::_local_transform_type arg)
  {
    msg_.local_transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::CameraModel msg_;
};

class Init_CameraModel_camera_info
{
public:
  Init_CameraModel_camera_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraModel_local_transform camera_info(::rtabmap_ros::msg::CameraModel::_camera_info_type arg)
  {
    msg_.camera_info = std::move(arg);
    return Init_CameraModel_local_transform(msg_);
  }

private:
  ::rtabmap_ros::msg::CameraModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::CameraModel>()
{
  return rtabmap_ros::msg::builder::Init_CameraModel_camera_info();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__CAMERA_MODEL__BUILDER_HPP_
