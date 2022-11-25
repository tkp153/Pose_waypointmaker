// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_ros:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/cleanup_local_grids__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_ros/srv/detail/cleanup_local_grids__struct.h"
#include "rtabmap_ros/srv/detail/cleanup_local_grids__functions.h"
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


// forward declare type support functions


using _CleanupLocalGrids_Request__ros_msg_type = rtabmap_ros__srv__CleanupLocalGrids_Request;

static bool _CleanupLocalGrids_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CleanupLocalGrids_Request__ros_msg_type * ros_message = static_cast<const _CleanupLocalGrids_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  // Field name: filter_scans
  {
    cdr << (ros_message->filter_scans ? true : false);
  }

  return true;
}

static bool _CleanupLocalGrids_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CleanupLocalGrids_Request__ros_msg_type * ros_message = static_cast<_CleanupLocalGrids_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: radius
  {
    cdr >> ros_message->radius;
  }

  // Field name: filter_scans
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->filter_scans = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CleanupLocalGrids_Request__ros_msg_type * ros_message = static_cast<const _CleanupLocalGrids_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_scans
  {
    size_t item_size = sizeof(ros_message->filter_scans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CleanupLocalGrids_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filter_scans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CleanupLocalGrids_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CleanupLocalGrids_Request = {
  "rtabmap_ros::srv",
  "CleanupLocalGrids_Request",
  _CleanupLocalGrids_Request__cdr_serialize,
  _CleanupLocalGrids_Request__cdr_deserialize,
  _CleanupLocalGrids_Request__get_serialized_size,
  _CleanupLocalGrids_Request__max_serialized_size
};

static rosidl_message_type_support_t _CleanupLocalGrids_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CleanupLocalGrids_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, CleanupLocalGrids_Request)() {
  return &_CleanupLocalGrids_Request__type_support;
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
// #include "rtabmap_ros/srv/detail/cleanup_local_grids__struct.h"
// already included above
// #include "rtabmap_ros/srv/detail/cleanup_local_grids__functions.h"
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


using _CleanupLocalGrids_Response__ros_msg_type = rtabmap_ros__srv__CleanupLocalGrids_Response;

static bool _CleanupLocalGrids_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CleanupLocalGrids_Response__ros_msg_type * ros_message = static_cast<const _CleanupLocalGrids_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: modified
  {
    cdr << ros_message->modified;
  }

  return true;
}

static bool _CleanupLocalGrids_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CleanupLocalGrids_Response__ros_msg_type * ros_message = static_cast<_CleanupLocalGrids_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: modified
  {
    cdr >> ros_message->modified;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CleanupLocalGrids_Response__ros_msg_type * ros_message = static_cast<const _CleanupLocalGrids_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name modified
  {
    size_t item_size = sizeof(ros_message->modified);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CleanupLocalGrids_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: modified
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CleanupLocalGrids_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__CleanupLocalGrids_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CleanupLocalGrids_Response = {
  "rtabmap_ros::srv",
  "CleanupLocalGrids_Response",
  _CleanupLocalGrids_Response__cdr_serialize,
  _CleanupLocalGrids_Response__cdr_deserialize,
  _CleanupLocalGrids_Response__get_serialized_size,
  _CleanupLocalGrids_Response__max_serialized_size
};

static rosidl_message_type_support_t _CleanupLocalGrids_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CleanupLocalGrids_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, CleanupLocalGrids_Response)() {
  return &_CleanupLocalGrids_Response__type_support;
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
#include "rtabmap_ros/srv/cleanup_local_grids.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CleanupLocalGrids__callbacks = {
  "rtabmap_ros::srv",
  "CleanupLocalGrids",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, CleanupLocalGrids_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, CleanupLocalGrids_Response)(),
};

static rosidl_service_type_support_t CleanupLocalGrids__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CleanupLocalGrids__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, CleanupLocalGrids)() {
  return &CleanupLocalGrids__handle;
}

#if defined(__cplusplus)
}
#endif
