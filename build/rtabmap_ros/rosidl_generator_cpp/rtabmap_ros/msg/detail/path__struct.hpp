// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_ros:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__PATH__STRUCT_HPP_
#define RTABMAP_ROS__MSG__DETAIL__PATH__STRUCT_HPP_

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
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_ros__msg__Path __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_ros__msg__Path __declspec(deprecated)
#endif

namespace rtabmap_ros
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Path_
{
  using Type = Path_<ContainerAllocator>;

  explicit Path_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Path_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _node_ids_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _node_ids_type node_ids;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__node_ids(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->node_ids = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_ros::msg::Path_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_ros::msg::Path_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_ros::msg::Path_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_ros::msg::Path_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::Path_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::Path_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::Path_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::Path_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_ros::msg::Path_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_ros::msg::Path_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_ros__msg__Path
    std::shared_ptr<rtabmap_ros::msg::Path_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_ros__msg__Path
    std::shared_ptr<rtabmap_ros::msg::Path_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->node_ids != other.node_ids) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_

// alias to use template instance with default allocator
using Path =
  rtabmap_ros::msg::Path_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__PATH__STRUCT_HPP_
