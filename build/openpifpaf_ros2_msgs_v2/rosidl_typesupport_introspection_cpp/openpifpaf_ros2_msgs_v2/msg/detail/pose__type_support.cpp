// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from openpifpaf_ros2_msgs_v2:msg/Pose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "openpifpaf_ros2_msgs_v2/msg/detail/pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace openpifpaf_ros2_msgs_v2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) openpifpaf_ros2_msgs_v2::msg::Pose(_init);
}

void Pose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<openpifpaf_ros2_msgs_v2::msg::Pose *>(message_memory);
  typed_message->~Pose();
}

size_t size_function__Pose__keypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pose__keypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Pose__keypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Pose__keypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pose_message_member_array[1] = {
  {
    "keypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs_v2::msg::Pose, keypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pose__keypoints,  // size() function pointer
    get_const_function__Pose__keypoints,  // get_const(index) function pointer
    get_function__Pose__keypoints,  // get(index) function pointer
    resize_function__Pose__keypoints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pose_message_members = {
  "openpifpaf_ros2_msgs_v2::msg",  // message namespace
  "Pose",  // message name
  1,  // number of fields
  sizeof(openpifpaf_ros2_msgs_v2::msg::Pose),
  Pose_message_member_array,  // message members
  Pose_init_function,  // function to initialize message memory (memory has to be allocated)
  Pose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pose_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs_v2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<openpifpaf_ros2_msgs_v2::msg::Pose>()
{
  return &::openpifpaf_ros2_msgs_v2::msg::rosidl_typesupport_introspection_cpp::Pose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openpifpaf_ros2_msgs_v2, msg, Pose)() {
  return &::openpifpaf_ros2_msgs_v2::msg::rosidl_typesupport_introspection_cpp::Pose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
