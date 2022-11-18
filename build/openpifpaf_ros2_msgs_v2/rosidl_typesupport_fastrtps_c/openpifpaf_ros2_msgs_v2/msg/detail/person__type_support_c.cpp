// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from openpifpaf_ros2_msgs_v2:msg/Person.idl
// generated code does not contain a copyright notice
#include "openpifpaf_ros2_msgs_v2/msg/detail/person__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "openpifpaf_ros2_msgs_v2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "openpifpaf_ros2_msgs_v2/msg/detail/person__struct.h"
#include "openpifpaf_ros2_msgs_v2/msg/detail/person__functions.h"
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

#include "visualization_msgs/msg/detail/marker_array__functions.h"  // markers

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_openpifpaf_ros2_msgs_v2
size_t get_serialized_size_visualization_msgs__msg__MarkerArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_openpifpaf_ros2_msgs_v2
size_t max_serialized_size_visualization_msgs__msg__MarkerArray(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_openpifpaf_ros2_msgs_v2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray)();


using _Person__ros_msg_type = openpifpaf_ros2_msgs_v2__msg__Person;

static bool _Person__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Person__ros_msg_type * ros_message = static_cast<const _Person__ros_msg_type *>(untyped_ros_message);
  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->markers, cdr))
    {
      return false;
    }
  }

  // Field name: person_id
  {
    cdr << ros_message->person_id;
  }

  // Field name: human_person_num
  {
    cdr << ros_message->human_person_num;
  }

  return true;
}

static bool _Person__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Person__ros_msg_type * ros_message = static_cast<_Person__ros_msg_type *>(untyped_ros_message);
  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->markers))
    {
      return false;
    }
  }

  // Field name: person_id
  {
    cdr >> ros_message->person_id;
  }

  // Field name: human_person_num
  {
    cdr >> ros_message->human_person_num;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openpifpaf_ros2_msgs_v2
size_t get_serialized_size_openpifpaf_ros2_msgs_v2__msg__Person(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Person__ros_msg_type * ros_message = static_cast<const _Person__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name markers

  current_alignment += get_serialized_size_visualization_msgs__msg__MarkerArray(
    &(ros_message->markers), current_alignment);
  // field.name person_id
  {
    size_t item_size = sizeof(ros_message->person_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name human_person_num
  {
    size_t item_size = sizeof(ros_message->human_person_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Person__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_openpifpaf_ros2_msgs_v2__msg__Person(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openpifpaf_ros2_msgs_v2
size_t max_serialized_size_openpifpaf_ros2_msgs_v2__msg__Person(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: markers
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_visualization_msgs__msg__MarkerArray(
        full_bounded, current_alignment);
    }
  }
  // member: person_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: human_person_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Person__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_openpifpaf_ros2_msgs_v2__msg__Person(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Person = {
  "openpifpaf_ros2_msgs_v2::msg",
  "Person",
  _Person__cdr_serialize,
  _Person__cdr_deserialize,
  _Person__get_serialized_size,
  _Person__max_serialized_size
};

static rosidl_message_type_support_t _Person__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Person,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openpifpaf_ros2_msgs_v2, msg, Person)() {
  return &_Person__type_support;
}

#if defined(__cplusplus)
}
#endif