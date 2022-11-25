// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_ros:srv/PublishMap.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/publish_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtabmap_ros/srv/detail/publish_map__struct.hpp"

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
  const rtabmap_ros::srv::PublishMap_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: global_map
  cdr << (ros_message.global_map ? true : false);
  // Member: optimized
  cdr << (ros_message.optimized ? true : false);
  // Member: graph_only
  cdr << (ros_message.graph_only ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_ros::srv::PublishMap_Request & ros_message)
{
  // Member: global_map
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.global_map = tmp ? true : false;
  }

  // Member: optimized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.optimized = tmp ? true : false;
  }

  // Member: graph_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.graph_only = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
get_serialized_size(
  const rtabmap_ros::srv::PublishMap_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: global_map
  {
    size_t item_size = sizeof(ros_message.global_map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimized
  {
    size_t item_size = sizeof(ros_message.optimized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: graph_only
  {
    size_t item_size = sizeof(ros_message.graph_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
max_serialized_size_PublishMap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: global_map
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: optimized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: graph_only
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PublishMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::PublishMap_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PublishMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_ros::srv::PublishMap_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PublishMap_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::PublishMap_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PublishMap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PublishMap_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _PublishMap_Request__callbacks = {
  "rtabmap_ros::srv",
  "PublishMap_Request",
  _PublishMap_Request__cdr_serialize,
  _PublishMap_Request__cdr_deserialize,
  _PublishMap_Request__get_serialized_size,
  _PublishMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _PublishMap_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PublishMap_Request__callbacks,
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
get_message_type_support_handle<rtabmap_ros::srv::PublishMap_Request>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_PublishMap_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, PublishMap_Request)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_PublishMap_Request__handle;
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
  const rtabmap_ros::srv::PublishMap_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_ros::srv::PublishMap_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
get_serialized_size(
  const rtabmap_ros::srv::PublishMap_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
max_serialized_size_PublishMap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PublishMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::PublishMap_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PublishMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_ros::srv::PublishMap_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PublishMap_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::PublishMap_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PublishMap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PublishMap_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _PublishMap_Response__callbacks = {
  "rtabmap_ros::srv",
  "PublishMap_Response",
  _PublishMap_Response__cdr_serialize,
  _PublishMap_Response__cdr_deserialize,
  _PublishMap_Response__get_serialized_size,
  _PublishMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _PublishMap_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PublishMap_Response__callbacks,
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
get_message_type_support_handle<rtabmap_ros::srv::PublishMap_Response>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_PublishMap_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, PublishMap_Response)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_PublishMap_Response__handle;
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

static service_type_support_callbacks_t _PublishMap__callbacks = {
  "rtabmap_ros::srv",
  "PublishMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, PublishMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, PublishMap_Response)(),
};

static rosidl_service_type_support_t _PublishMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PublishMap__callbacks,
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
get_service_type_support_handle<rtabmap_ros::srv::PublishMap>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_PublishMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, PublishMap)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_PublishMap__handle;
}

#ifdef __cplusplus
}
#endif
