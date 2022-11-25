// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_ros:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/cleanup_local_grids__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtabmap_ros/srv/detail/cleanup_local_grids__struct.hpp"

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

namespace rtabmap_ros
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_serialize(
  const rtabmap_ros::srv::CleanupLocalGrids_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: radius
  cdr << ros_message.radius;
  // Member: filter_scans
  cdr << (ros_message.filter_scans ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_ros::srv::CleanupLocalGrids_Request & ros_message)
{
  // Member: radius
  cdr >> ros_message.radius;

  // Member: filter_scans
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.filter_scans = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
get_serialized_size(
  const rtabmap_ros::srv::CleanupLocalGrids_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: radius
  {
    size_t item_size = sizeof(ros_message.radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_scans
  {
    size_t item_size = sizeof(ros_message.filter_scans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
max_serialized_size_CleanupLocalGrids_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filter_scans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CleanupLocalGrids_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::CleanupLocalGrids_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CleanupLocalGrids_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_ros::srv::CleanupLocalGrids_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CleanupLocalGrids_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::CleanupLocalGrids_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CleanupLocalGrids_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CleanupLocalGrids_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _CleanupLocalGrids_Request__callbacks = {
  "rtabmap_ros::srv",
  "CleanupLocalGrids_Request",
  _CleanupLocalGrids_Request__cdr_serialize,
  _CleanupLocalGrids_Request__cdr_deserialize,
  _CleanupLocalGrids_Request__get_serialized_size,
  _CleanupLocalGrids_Request__max_serialized_size
};

static rosidl_message_type_support_t _CleanupLocalGrids_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CleanupLocalGrids_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rtabmap_ros

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_ros::srv::CleanupLocalGrids_Request>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_CleanupLocalGrids_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, CleanupLocalGrids_Request)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_CleanupLocalGrids_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rtabmap_ros
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_serialize(
  const rtabmap_ros::srv::CleanupLocalGrids_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: modified
  cdr << ros_message.modified;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_ros::srv::CleanupLocalGrids_Response & ros_message)
{
  // Member: modified
  cdr >> ros_message.modified;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
get_serialized_size(
  const rtabmap_ros::srv::CleanupLocalGrids_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: modified
  {
    size_t item_size = sizeof(ros_message.modified);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
max_serialized_size_CleanupLocalGrids_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: modified
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CleanupLocalGrids_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::CleanupLocalGrids_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CleanupLocalGrids_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_ros::srv::CleanupLocalGrids_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CleanupLocalGrids_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::CleanupLocalGrids_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CleanupLocalGrids_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CleanupLocalGrids_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _CleanupLocalGrids_Response__callbacks = {
  "rtabmap_ros::srv",
  "CleanupLocalGrids_Response",
  _CleanupLocalGrids_Response__cdr_serialize,
  _CleanupLocalGrids_Response__cdr_deserialize,
  _CleanupLocalGrids_Response__get_serialized_size,
  _CleanupLocalGrids_Response__max_serialized_size
};

static rosidl_message_type_support_t _CleanupLocalGrids_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CleanupLocalGrids_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rtabmap_ros

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_ros::srv::CleanupLocalGrids_Response>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_CleanupLocalGrids_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, CleanupLocalGrids_Response)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_CleanupLocalGrids_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace rtabmap_ros
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CleanupLocalGrids__callbacks = {
  "rtabmap_ros::srv",
  "CleanupLocalGrids",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, CleanupLocalGrids_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, CleanupLocalGrids_Response)(),
};

static rosidl_service_type_support_t _CleanupLocalGrids__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CleanupLocalGrids__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rtabmap_ros

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rtabmap_ros
const rosidl_service_type_support_t *
get_service_type_support_handle<rtabmap_ros::srv::CleanupLocalGrids>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_CleanupLocalGrids__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, CleanupLocalGrids)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_CleanupLocalGrids__handle;
}

#ifdef __cplusplus
}
#endif
