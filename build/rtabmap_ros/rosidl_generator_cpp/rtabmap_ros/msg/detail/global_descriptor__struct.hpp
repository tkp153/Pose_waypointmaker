// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_ros:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_HPP_
#define RTABMAP_ROS__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_HPP_

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
# define DEPRECATED__rtabmap_ros__msg__GlobalDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_ros__msg__GlobalDescriptor __declspec(deprecated)
#endif

namespace rtabmap_ros
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalDescriptor_
{
  using Type = GlobalDescriptor_<ContainerAllocator>;

  explicit GlobalDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
    }
  }

  explicit GlobalDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _type_type =
    int32_t;
  _type_type type;
  using _info_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _info_type info;
  using _data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__info(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_ros__msg__GlobalDescriptor
    std::shared_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_ros__msg__GlobalDescriptor
    std::shared_ptr<rtabmap_ros::msg::GlobalDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalDescriptor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalDescriptor_

// alias to use template instance with default allocator
using GlobalDescriptor =
  rtabmap_ros::msg::GlobalDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_HPP_
