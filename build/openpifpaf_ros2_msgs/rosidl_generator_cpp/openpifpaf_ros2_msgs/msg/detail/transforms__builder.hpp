// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Transforms.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORMS__BUILDER_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORMS__BUILDER_HPP_

#include "openpifpaf_ros2_msgs/msg/detail/transforms__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Transforms_transforms
{
public:
  Init_Transforms_transforms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::openpifpaf_ros2_msgs::msg::Transforms transforms(::openpifpaf_ros2_msgs::msg::Transforms::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openpifpaf_ros2_msgs::msg::Transforms msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openpifpaf_ros2_msgs::msg::Transforms>()
{
  return openpifpaf_ros2_msgs::msg::builder::Init_Transforms_transforms();
}

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__TRANSFORMS__BUILDER_HPP_
