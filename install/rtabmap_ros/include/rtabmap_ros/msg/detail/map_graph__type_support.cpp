// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_ros:msg/MapGraph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rtabmap_ros/msg/detail/map_graph__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rtabmap_ros
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MapGraph_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rtabmap_ros::msg::MapGraph(_init);
}

void MapGraph_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rtabmap_ros::msg::MapGraph *>(message_memory);
  typed_message->~MapGraph();
}

size_t size_function__MapGraph__poses_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapGraph__poses_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MapGraph__poses_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MapGraph__poses_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MapGraph__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapGraph__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__MapGraph__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void resize_function__MapGraph__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MapGraph__links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rtabmap_ros::msg::Link> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapGraph__links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rtabmap_ros::msg::Link> *>(untyped_member);
  return &member[index];
}

void * get_function__MapGraph__links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rtabmap_ros::msg::Link> *>(untyped_member);
  return &member[index];
}

void resize_function__MapGraph__links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rtabmap_ros::msg::Link> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MapGraph_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros::msg::MapGraph, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_to_odom",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros::msg::MapGraph, map_to_odom),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "poses_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros::msg::MapGraph, poses_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapGraph__poses_id,  // size() function pointer
    get_const_function__MapGraph__poses_id,  // get_const(index) function pointer
    get_function__MapGraph__poses_id,  // get(index) function pointer
    resize_function__MapGraph__poses_id  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros::msg::MapGraph, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapGraph__poses,  // size() function pointer
    get_const_function__MapGraph__poses,  // get_const(index) function pointer
    get_function__MapGraph__poses,  // get(index) function pointer
    resize_function__MapGraph__poses  // resize(index) function pointer
  },
  {
    "links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rtabmap_ros::msg::Link>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros::msg::MapGraph, links),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapGraph__links,  // size() function pointer
    get_const_function__MapGraph__links,  // get_const(index) function pointer
    get_function__MapGraph__links,  // get(index) function pointer
    resize_function__MapGraph__links  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MapGraph_message_members = {
  "rtabmap_ros::msg",  // message namespace
  "MapGraph",  // message name
  5,  // number of fields
  sizeof(rtabmap_ros::msg::MapGraph),
  MapGraph_message_member_array,  // message members
  MapGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  MapGraph_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MapGraph_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MapGraph_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rtabmap_ros


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_ros::msg::MapGraph>()
{
  return &::rtabmap_ros::msg::rosidl_typesupport_introspection_cpp::MapGraph_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rtabmap_ros, msg, MapGraph)() {
  return &::rtabmap_ros::msg::rosidl_typesupport_introspection_cpp::MapGraph_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
