// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_ros:srv/GetNodeData.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/get_node_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_ros/srv/detail/get_node_data__struct.h"
#include "rtabmap_ros/srv/detail/get_node_data__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ids

// forward declare type support functions


using _GetNodeData_Request__ros_msg_type = rtabmap_ros__srv__GetNodeData_Request;

static bool _GetNodeData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNodeData_Request__ros_msg_type * ros_message = static_cast<const _GetNodeData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ids
  {
    size_t size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: images
  {
    cdr << (ros_message->images ? true : false);
  }

  // Field name: scan
  {
    cdr << (ros_message->scan ? true : false);
  }

  // Field name: grid
  {
    cdr << (ros_message->grid ? true : false);
  }

  // Field name: user_data
  {
    cdr << (ros_message->user_data ? true : false);
  }

  return true;
}

static bool _GetNodeData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNodeData_Request__ros_msg_type * ros_message = static_cast<_GetNodeData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->ids, size)) {
      return "failed to create array for field 'ids'";
    }
    auto array_ptr = ros_message->ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: images
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->images = tmp ? true : false;
  }

  // Field name: scan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->scan = tmp ? true : false;
  }

  // Field name: grid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->grid = tmp ? true : false;
  }

  // Field name: user_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->user_data = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__GetNodeData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodeData_Request__ros_msg_type * ros_message = static_cast<const _GetNodeData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ids
  {
    size_t array_size = ros_message->ids.size;
    auto array_ptr = ros_message->ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name images
  {
    size_t item_size = sizeof(ros_message->images);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan
  {
    size_t item_size = sizeof(ros_message->scan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grid
  {
    size_t item_size = sizeof(ros_message->grid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_data
  {
    size_t item_size = sizeof(ros_message->user_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetNodeData_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__GetNodeData_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__GetNodeData_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: images
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: grid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: user_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetNodeData_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__GetNodeData_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetNodeData_Request = {
  "rtabmap_ros::srv",
  "GetNodeData_Request",
  _GetNodeData_Request__cdr_serialize,
  _GetNodeData_Request__cdr_deserialize,
  _GetNodeData_Request__get_serialized_size,
  _GetNodeData_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetNodeData_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodeData_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetNodeData_Request)() {
  return &_GetNodeData_Request__type_support;
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
// #include "rtabmap_ros/srv/detail/get_node_data__struct.h"
// already included above
// #include "rtabmap_ros/srv/detail/get_node_data__functions.h"
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

#include "rtabmap_ros/msg/detail/node_data__functions.h"  // data

// forward declare type support functions
size_t get_serialized_size_rtabmap_ros__msg__NodeData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_ros__msg__NodeData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, NodeData)();


using _GetNodeData_Response__ros_msg_type = rtabmap_ros__srv__GetNodeData_Response;

static bool _GetNodeData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNodeData_Response__ros_msg_type * ros_message = static_cast<const _GetNodeData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, NodeData
      )()->data);
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetNodeData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNodeData_Response__ros_msg_type * ros_message = static_cast<_GetNodeData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, NodeData
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rtabmap_ros__msg__NodeData__Sequence__fini(&ros_message->data);
    }
    if (!rtabmap_ros__msg__NodeData__Sequence__init(&ros_message->data, size)) {
      return "failed to create array for field 'data'";
    }
    auto array_ptr = ros_message->data.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__srv__GetNodeData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodeData_Response__ros_msg_type * ros_message = static_cast<const _GetNodeData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_ros__msg__NodeData(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetNodeData_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__srv__GetNodeData_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__srv__GetNodeData_Response(
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
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__NodeData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetNodeData_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__srv__GetNodeData_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetNodeData_Response = {
  "rtabmap_ros::srv",
  "GetNodeData_Response",
  _GetNodeData_Response__cdr_serialize,
  _GetNodeData_Response__cdr_deserialize,
  _GetNodeData_Response__get_serialized_size,
  _GetNodeData_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetNodeData_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodeData_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetNodeData_Response)() {
  return &_GetNodeData_Response__type_support;
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
#include "rtabmap_ros/srv/get_node_data.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetNodeData__callbacks = {
  "rtabmap_ros::srv",
  "GetNodeData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetNodeData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetNodeData_Response)(),
};

static rosidl_service_type_support_t GetNodeData__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetNodeData__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, srv, GetNodeData)() {
  return &GetNodeData__handle;
}

#if defined(__cplusplus)
}
#endif
