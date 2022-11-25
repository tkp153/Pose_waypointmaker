// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_ros:srv/LoadDatabase.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/load_database__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_ros/srv/detail/load_database__struct.h"
#include "rtabmap_ros/srv/detail/load_database__functions.h"
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

#include "rosidl_runtime_c/string.h"  // database_path
#include "rosidl_runtime_c/string_functions.h"  // database_path

// forward declare type support functions


using _LoadDatabase_Request__ros_msg_type = rtabmap_ros__srv__LoadDatabase_Request;

static bool _LoadDatabase_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LoadDatabase_Request__ros_msg_type * ros_message = static_cast<const _LoadDatabase_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: database_path
  {
    const rosidl_runtime_c__String * str = &ros_message->database_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: clear
  {
    cdr << (ros_message->clear ? true : false);
  }

  return true;
}

static bool _LoadDatabase_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LoadDatabase_Request__ros_msg_type * ros_message = static_cast<_LoadDatabase_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: database_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->database_path.data) {
      rosidl_runtime_c__String__init(&ros_message->database_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->database_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'database_path'\n");
      return false;
    }
  }

  // Field name: clear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->clear = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__LoadDatabase_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadDatabase_Request__ros_msg_type * ros_message = static_cast<const _LoadDatabase_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name database_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->database_path.size + 1);
  // field.name clear
  {
    size_t item_size = sizeof(ros_message->clear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadDatabase_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__LoadDatabase_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__LoadDatabase_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: database_path
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: clear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LoadDatabase_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__LoadDatabase_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LoadDatabase_Request = {
  "rtabmap_ros::srv",
  "LoadDatabase_Request",
  _LoadDatabase_Request__cdr_serialize,
  _LoadDatabase_Request__cdr_deserialize,
  _LoadDatabase_Request__get_serialized_size,
  _LoadDatabase_Request__max_serialized_size
};

static rosidl_message_type_support_t _LoadDatabase_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadDatabase_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, LoadDatabase_Request)() {
  return &_LoadDatabase_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rtabmap_ros/srv/detail/load_database__struct.h"
// already included above
// #include "rtabmap_ros/srv/detail/load_database__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _LoadDatabase_Response__ros_msg_type = rtabmap_ros__srv__LoadDatabase_Response;

static bool _LoadDatabase_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LoadDatabase_Response__ros_msg_type * ros_message = static_cast<const _LoadDatabase_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _LoadDatabase_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LoadDatabase_Response__ros_msg_type * ros_message = static_cast<_LoadDatabase_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__LoadDatabase_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadDatabase_Response__ros_msg_type * ros_message = static_cast<const _LoadDatabase_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadDatabase_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__LoadDatabase_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__LoadDatabase_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LoadDatabase_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__LoadDatabase_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LoadDatabase_Response = {
  "rtabmap_ros::srv",
  "LoadDatabase_Response",
  _LoadDatabase_Response__cdr_serialize,
  _LoadDatabase_Response__cdr_deserialize,
  _LoadDatabase_Response__get_serialized_size,
  _LoadDatabase_Response__max_serialized_size
};

static rosidl_message_type_support_t _LoadDatabase_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadDatabase_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, LoadDatabase_Response)() {
  return &_LoadDatabase_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_ros/srv/load_database.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LoadDatabase__callbacks = {
  "rtabmap_ros::srv",
  "LoadDatabase",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, LoadDatabase_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, LoadDatabase_Response)(),
};

static rosidl_service_type_support_t LoadDatabase__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LoadDatabase__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, LoadDatabase)() {
  return &LoadDatabase__handle;
}

#if defined(__cplusplus)
}
#endif
