// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/RGBDImages.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__RGBD_IMAGES__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__RGBD_IMAGES__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/rgbd_images__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_RGBDImages_rgbd_images
{
public:
  explicit Init_RGBDImages_rgbd_images(::rtabmap_ros::msg::RGBDImages & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::RGBDImages rgbd_images(::rtabmap_ros::msg::RGBDImages::_rgbd_images_type arg)
  {
    msg_.rgbd_images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::RGBDImages msg_;
};

class Init_RGBDImages_header
{
public:
  Init_RGBDImages_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBDImages_rgbd_images header(::rtabmap_ros::msg::RGBDImages::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RGBDImages_rgbd_images(msg_);
  }

private:
  ::rtabmap_ros::msg::RGBDImages msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::RGBDImages>()
{
  return rtabmap_ros::msg::builder::Init_RGBDImages_header();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__RGBD_IMAGES__BUILDER_HPP_
