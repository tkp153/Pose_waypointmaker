// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/transform__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Transform_transform
{
public:
  Init_Transform_transform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::openpifpaf_ros2_msgs::msg::Transform transform(::openpifpaf_ros2_msgs::msg::Transform::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Transform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openpifpaf_ros2_msgs::msg::Transform>()
{
  return openpifpaf_ros2_msgs::msg::builder::Init_Transform_transform();
}

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
