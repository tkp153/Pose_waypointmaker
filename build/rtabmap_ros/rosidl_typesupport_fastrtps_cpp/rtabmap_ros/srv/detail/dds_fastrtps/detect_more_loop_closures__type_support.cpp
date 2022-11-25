// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_ros:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/detect_more_loop_closures__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtabmap_ros/srv/detail/detect_more_loop_closures__struct.hpp"

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
  const rtabmap_ros::srv::DetectMoreLoopClosures_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cluster_radius_max
  cdr << ros_message.cluster_radius_max;
  // Member: cluster_radius_min
  cdr << ros_message.cluster_radius_min;
  // Member: cluster_angle
  cdr << ros_message.cluster_angle;
  // Member: iterations
  cdr << ros_message.iterations;
  // Member: intra_only
  cdr << (ros_message.intra_only ? true : false);
  // Member: inter_only
  cdr << (ros_message.inter_only ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_ros::srv::DetectMoreLoopClosures_Request & ros_message)
{
  // Member: cluster_radius_max
  cdr >> ros_message.cluster_radius_max;

  // Member: cluster_radius_min
  cdr >> ros_message.cluster_radius_min;

  // Member: cluster_angle
  cdr >> ros_message.cluster_angle;

  // Member: iterations
  cdr >> ros_message.iterations;

  // Member: intra_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.intra_only = tmp ? true : false;
  }

  // Member: inter_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.inter_only = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
get_serialized_size(
  const rtabmap_ros::srv::DetectMoreLoopClosures_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cluster_radius_max
  {
    size_t item_size = sizeof(ros_message.cluster_radius_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cluster_radius_min
  {
    size_t item_size = sizeof(ros_message.cluster_radius_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cluster_angle
  {
    size_t item_size = sizeof(ros_message.cluster_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: iterations
  {
    size_t item_size = sizeof(ros_message.iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intra_only
  {
    size_t item_size = sizeof(ros_message.intra_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inter_only
  {
    size_t item_size = sizeof(ros_message.inter_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
max_serialized_size_DetectMoreLoopClosures_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cluster_radius_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cluster_radius_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cluster_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: iterations
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: intra_only
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: inter_only
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _DetectMoreLoopClosures_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::DetectMoreLoopClosures_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectMoreLoopClosures_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_ros::srv::DetectMoreLoopClosures_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectMoreLoopClosures_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::DetectMoreLoopClosures_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectMoreLoopClosures_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectMoreLoopClosures_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectMoreLoopClosures_Request__callbacks = {
  "rtabmap_ros::srv",
  "DetectMoreLoopClosures_Request",
  _DetectMoreLoopClosures_Request__cdr_serialize,
  _DetectMoreLoopClosures_Request__cdr_deserialize,
  _DetectMoreLoopClosures_Request__get_serialized_size,
  _DetectMoreLoopClosures_Request__max_serialized_size
};

static rosidl_message_type_support_t _DetectMoreLoopClosures_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectMoreLoopClosures_Request__callbacks,
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
get_message_type_support_handle<rtabmap_ros::srv::DetectMoreLoopClosures_Request>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_DetectMoreLoopClosures_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, DetectMoreLoopClosures_Request)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_DetectMoreLoopClosures_Request__handle;
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
  const rtabmap_ros::srv::DetectMoreLoopClosures_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detected
  cdr << ros_message.detected;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_ros::srv::DetectMoreLoopClosures_Response & ros_message)
{
  // Member: detected
  cdr >> ros_message.detected;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
get_serialized_size(
  const rtabmap_ros::srv::DetectMoreLoopClosures_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detected
  {
    size_t item_size = sizeof(ros_message.detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_ros
max_serialized_size_DetectMoreLoopClosures_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DetectMoreLoopClosures_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::DetectMoreLoopClosures_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectMoreLoopClosures_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_ros::srv::DetectMoreLoopClosures_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectMoreLoopClosures_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_ros::srv::DetectMoreLoopClosures_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectMoreLoopClosures_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectMoreLoopClosures_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectMoreLoopClosures_Response__callbacks = {
  "rtabmap_ros::srv",
  "DetectMoreLoopClosures_Response",
  _DetectMoreLoopClosures_Response__cdr_serialize,
  _DetectMoreLoopClosures_Response__cdr_deserialize,
  _DetectMoreLoopClosures_Response__get_serialized_size,
  _DetectMoreLoopClosures_Response__max_serialized_size
};

static rosidl_message_type_support_t _DetectMoreLoopClosures_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectMoreLoopClosures_Response__callbacks,
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
get_message_type_support_handle<rtabmap_ros::srv::DetectMoreLoopClosures_Response>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_DetectMoreLoopClosures_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, DetectMoreLoopClosures_Response)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_DetectMoreLoopClosures_Response__handle;
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

static service_type_support_callbacks_t _DetectMoreLoopClosures__callbacks = {
  "rtabmap_ros::srv",
  "DetectMoreLoopClosures",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, DetectMoreLoopClosures_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, DetectMoreLoopClosures_Response)(),
};

static rosidl_service_type_support_t _DetectMoreLoopClosures__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectMoreLoopClosures__callbacks,
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
get_service_type_support_handle<rtabmap_ros::srv::DetectMoreLoopClosures>()
{
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_DetectMoreLoopClosures__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_ros, srv, DetectMoreLoopClosures)() {
  return &rtabmap_ros::srv::typesupport_fastrtps_cpp::_DetectMoreLoopClosures__handle;
}

#ifdef __cplusplus
}
#endif
