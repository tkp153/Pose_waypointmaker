// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from openpifpaf_ros2_msgs_v2:msg/Transform.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs_v2/msg/detail/transform__rosidl_typesupport_fastrtps_cpp.hpp"
#include "openpifpaf_ros2_msgs_v2/msg/detail/transform__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Transform &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Transform &);
size_t get_serialized_size(
  const geometry_msgs::msg::Transform &,
  size_t current_alignment);
size_t
max_serialized_size_Transform(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace openpifpaf_ros2_msgs_v2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
cdr_serialize(
  const openpifpaf_ros2_msgs_v2::msg::Transform & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.transform,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  openpifpaf_ros2_msgs_v2::msg::Transform & ros_message)
{
  // Member: transform
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.transform);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
get_serialized_size(
  const openpifpaf_ros2_msgs_v2::msg::Transform & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: transform

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.transform, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
max_serialized_size_Transform(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Transform(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Transform__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const openpifpaf_ros2_msgs_v2::msg::Transform *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Transform__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<openpifpaf_ros2_msgs_v2::msg::Transform *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Transform__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const openpifpaf_ros2_msgs_v2::msg::Transform *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Transform__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Transform(full_bounded, 0);
}

static message_type_support_callbacks_t _Transform__callbacks = {
  "openpifpaf_ros2_msgs_v2::msg",
  "Transform",
  _Transform__cdr_serialize,
  _Transform__cdr_deserialize,
  _Transform__get_serialized_size,
  _Transform__max_serialized_size
};

static rosidl_message_type_support_t _Transform__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Transform__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs_v2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_openpifpaf_ros2_msgs_v2
const rosidl_message_type_support_t *
get_message_type_support_handle<openpifpaf_ros2_msgs_v2::msg::Transform>()
{
  return &openpifpaf_ros2_msgs_v2::msg::typesupport_fastrtps_cpp::_Transform__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openpifpaf_ros2_msgs_v2, msg, Transform)() {
  return &openpifpaf_ros2_msgs_v2::msg::typesupport_fastrtps_cpp::_Transform__handle;
}

#ifdef __cplusplus
}
#endif
