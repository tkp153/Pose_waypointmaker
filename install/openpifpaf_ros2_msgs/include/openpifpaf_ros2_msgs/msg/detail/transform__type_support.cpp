// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from openpifpaf_ros2_msgs:msg/Transform.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "openpifpaf_ros2_msgs/msg/detail/transform__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace openpifpaf_ros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Transform_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) openpifpaf_ros2_msgs::msg::Transform(_init);
}

void Transform_fini_function(void * message_memory)
{
  auto typed_message = static_cast<openpifpaf_ros2_msgs::msg::Transform *>(message_memory);
  typed_message->~Transform();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Transform_message_member_array[1] = {
  {
    "transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs::msg::Transform, transform),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Transform_message_members = {
  "openpifpaf_ros2_msgs::msg",  // message namespace
  "Transform",  // message name
  1,  // number of fields
  sizeof(openpifpaf_ros2_msgs::msg::Transform),
  Transform_message_member_array,  // message members
  Transform_init_function,  // function to initialize message memory (memory has to be allocated)
  Transform_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Transform_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Transform_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<openpifpaf_ros2_msgs::msg::Transform>()
{
  return &::openpifpaf_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::Transform_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openpifpaf_ros2_msgs, msg, Transform)() {
  return &::openpifpaf_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::Transform_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
