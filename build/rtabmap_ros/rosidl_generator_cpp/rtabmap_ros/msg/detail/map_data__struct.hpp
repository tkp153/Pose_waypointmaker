// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_ros:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__MAP_DATA__STRUCT_HPP_
#define RTABMAP_ROS__MSG__DETAIL__MAP_DATA__STRUCT_HPP_

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
// Member 'graph'
#include "rtabmap_ros/msg/detail/map_graph__struct.hpp"
// Member 'nodes'
#include "rtabmap_ros/msg/detail/node_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_ros__msg__MapData __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_ros__msg__MapData __declspec(deprecated)
#endif

namespace rtabmap_ros
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapData_
{
  using Type = MapData_<ContainerAllocator>;

  explicit MapData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    graph(_init)
  {
    (void)_init;
  }

  explicit MapData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    graph(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _graph_type =
    rtabmap_ros::msg::MapGraph_<ContainerAllocator>;
  _graph_type graph;
  using _nodes_type =
    std::vector<rtabmap_ros::msg::NodeData_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_ros::msg::NodeData_<ContainerAllocator>>::other>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__graph(
    const rtabmap_ros::msg::MapGraph_<ContainerAllocator> & _arg)
  {
    this->graph = _arg;
    return *this;
  }
  Type & set__nodes(
    const std::vector<rtabmap_ros::msg::NodeData_<ContainerAllocator>, typename ContainerAllocator::template rebind<rtabmap_ros::msg::NodeData_<ContainerAllocator>>::other> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_ros::msg::MapData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_ros::msg::MapData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::MapData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_ros::msg::MapData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_ros__msg__MapData
    std::shared_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_ros__msg__MapData
    std::shared_ptr<rtabmap_ros::msg::MapData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->graph != other.graph) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapData_

// alias to use template instance with default allocator
using MapData =
  rtabmap_ros::msg::MapData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__MAP_DATA__STRUCT_HPP_
