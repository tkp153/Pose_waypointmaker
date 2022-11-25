// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_ros:srv/GetMap.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/get_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_ros/srv/detail/get_map__struct.h"
#include "rtabmap_ros/srv/detail/get_map__functions.h"
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


using _GetMap_Request__ros_msg_type = rtabmap_ros__srv__GetMap_Request;

static bool _GetMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMap_Request__ros_msg_type * ros_message = static_cast<const _GetMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: global_map
  {
    cdr << (ros_message->global_map ? true : false);
  }

  // Field name: optimized
  {
    cdr << (ros_message->optimized ? true : false);
  }

  // Field name: graph_only
  {
    cdr << (ros_message->graph_only ? true : false);
  }

  return true;
}

static bool _GetMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMap_Request__ros_msg_type * ros_message = static_cast<_GetMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: global_map
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->global_map = tmp ? true : false;
  }

  // Field name: optimized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->optimized = tmp ? true : false;
  }

  // Field name: graph_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->graph_only = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__GetMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMap_Request__ros_msg_type * ros_message = static_cast<const _GetMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name global_map
  {
    size_t item_size = sizeof(ros_message->global_map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimized
  {
    size_t item_size = sizeof(ros_message->optimized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name graph_only
  {
    size_t item_size = sizeof(ros_message->graph_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__GetMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__GetMap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: global_map
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: optimized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: graph_only
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__GetMap_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMap_Request = {
  "rtabmap_ros::srv",
  "GetMap_Request",
  _GetMap_Request__cdr_serialize,
  _GetMap_Request__cdr_deserialize,
  _GetMap_Request__get_serialized_size,
  _GetMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetMap_Request)() {
  return &_GetMap_Request__type_support;
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
// #include "rtabmap_ros/srv/detail/get_map__struct.h"
// already included above
// #include "rtabmap_ros/srv/detail/get_map__functions.h"
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

#include "rtabmap_ros/msg/detail/map_data__functions.h"  // data

// forward declare type support functions
size_t get_serialized_size_rtabmap_ros__msg__MapData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_ros__msg__MapData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, MapData)();


using _GetMap_Response__ros_msg_type = rtabmap_ros__srv__GetMap_Response;

static bool _GetMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMap_Response__ros_msg_type * ros_message = static_cast<const _GetMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, MapData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMap_Response__ros_msg_type * ros_message = static_cast<_GetMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, MapData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__GetMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMap_Response__ros_msg_type * ros_message = static_cast<const _GetMap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data

  current_alignment += get_serialized_size_rtabmap_ros__msg__MapData(
    &(ros_message->data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__GetMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__GetMap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__MapData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__GetMap_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMap_Response = {
  "rtabmap_ros::srv",
  "GetMap_Response",
  _GetMap_Response__cdr_serialize,
  _GetMap_Response__cdr_deserialize,
  _GetMap_Response__get_serialized_size,
  _GetMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetMap_Response)() {
  return &_GetMap_Response__type_support;
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
#include "rtabmap_ros/srv/get_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetMap__callbacks = {
  "rtabmap_ros::srv",
  "GetMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetMap_Response)(),
};

static rosidl_service_type_support_t GetMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetMap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetMap)() {
  return &GetMap__handle;
}

#if defined(__cplusplus)
}
#endif
