// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/map_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_MapData_nodes
{
public:
  explicit Init_MapData_nodes(::rtabmap_ros::msg::MapData & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::MapData nodes(::rtabmap_ros::msg::MapData::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::MapData msg_;
};

class Init_MapData_graph
{
public:
  explicit Init_MapData_graph(::rtabmap_ros::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_nodes graph(::rtabmap_ros::msg::MapData::_graph_type arg)
  {
    msg_.graph = std::move(arg);
    return Init_MapData_nodes(msg_);
  }

private:
  ::rtabmap_ros::msg::MapData msg_;
};

class Init_MapData_header
{
public:
  Init_MapData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapData_graph header(::rtabmap_ros::msg::MapData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapData_graph(msg_);
  }

private:
  ::rtabmap_ros::msg::MapData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::MapData>()
{
  return rtabmap_ros::msg::builder::Init_MapData_header();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
