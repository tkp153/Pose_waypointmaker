// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from openpifpaf_ros2_msgs:msg/Transform.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs/msg/detail/transform__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "openpifpaf_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "openpifpaf_ros2_msgs/msg/detail/transform__struct.h"
#include "openpifpaf_ros2_msgs/msg/detail/transform__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/transform__functions.h"  // transform

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_openpifpaf_ros2_msgs
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_openpifpaf_ros2_msgs
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_openpifpaf_ros2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();


using _Transform__ros_msg_type = openpifpaf_ros2_msgs__msg__Transform;

static bool _Transform__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Transform__ros_msg_type * ros_message = static_cast<const _Transform__ros_msg_type *>(untyped_ros_message);
  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transform, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Transform__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Transform__ros_msg_type * ros_message = static_cast<_Transform__ros_msg_type *>(untyped_ros_message);
  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transform))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openpifpaf_ros2_msgs
size_t get_serialized_size_openpifpaf_ros2_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Transform__ros_msg_type * ros_message = static_cast<const _Transform__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name transform

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Transform__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_openpifpaf_ros2_msgs__msg__Transform(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openpifpaf_ros2_msgs
size_t max_serialized_size_openpifpaf_ros2_msgs__msg__Transform(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Transform__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_openpifpaf_ros2_msgs__msg__Transform(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Transform = {
  "openpifpaf_ros2_msgs::msg",
  "Transform",
  _Transform__cdr_serialize,
  _Transform__cdr_deserialize,
  _Transform__get_serialized_size,
  _Transform__max_serialized_size
};

static rosidl_message_type_support_t _Transform__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Transform,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openpifpaf_ros2_msgs, msg, Transform)() {
  return &_Transform__type_support;
}

#if defined(__cplusplus)
}
#endif
