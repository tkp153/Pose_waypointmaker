// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_ros:msg/Goal.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__GOAL__STRUCT_HPP_
#define RTABMAP_ROS__MSG__DETAIL__GOAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_ros__msg__Goal __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_ros__msg__Goal __declspec(deprecated)
#endif

namespace rtabmap_ros
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Goal_
{
  using Type = Goal_<ContainerAllocator>;

  explicit Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
      this->node_label = "";
      this->frame_id = "";
    }
  }

  explicit Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    node_label(_alloc),
    frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
      this->node_label = "";
      this->frame_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _node_id_type =
    int32_t;
  _node_id_type node_id;
  using _node_label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_label_type node_label;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _frame_id_type frame_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__node_id(
    const int32_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__node_label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_label = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_ros::msg::Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_ros::msg::Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_ros__msg__Goal
    std::shared_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_ros__msg__Goal
    std::shared_ptr<rtabmap_ros::msg::Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Goal_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->node_label != other.node_label) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Goal_

// alias to use template instance with default allocator
using Goal =
  rtabmap_ros::msg::Goal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__GOAL__STRUCT_HPP_
