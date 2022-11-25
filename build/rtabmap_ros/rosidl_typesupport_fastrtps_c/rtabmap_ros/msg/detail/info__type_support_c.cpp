// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_ros:msg/Info.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_ros/msg/detail/info__struct.h"
#include "rtabmap_ros/msg/detail/info__functions.h"
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

#include "geometry_msgs/msg/detail/transform__functions.h"  // loop_closure_transform
#include "rosidl_runtime_c/primitives_sequence.h"  // labels_keys, likelihood_keys, likelihood_values, local_path, posterior_keys, posterior_values, raw_likelihood_keys, raw_likelihood_values, stats_values, weights_keys, weights_values, wm_state
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // labels_keys, likelihood_keys, likelihood_values, local_path, posterior_keys, posterior_values, raw_likelihood_keys, raw_likelihood_values, stats_values, weights_keys, weights_values, wm_state
#include "rosidl_runtime_c/string.h"  // labels_values, stats_keys
#include "rosidl_runtime_c/string_functions.h"  // labels_values, stats_keys
#include "rtabmap_ros/msg/detail/map_graph__functions.h"  // odom_cache
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();
size_t get_serialized_size_rtabmap_ros__msg__MapGraph(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_ros__msg__MapGraph(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, MapGraph)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Info__ros_msg_type = rtabmap_ros__msg__Info;

static bool _Info__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Info__ros_msg_type * ros_message = static_cast<const _Info__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: ref_id
  {
    cdr << ros_message->ref_id;
  }

  // Field name: loop_closure_id
  {
    cdr << ros_message->loop_closure_id;
  }

  // Field name: proximity_detection_id
  {
    cdr << ros_message->proximity_detection_id;
  }

  // Field name: landmark_id
  {
    cdr << ros_message->landmark_id;
  }

  // Field name: loop_closure_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->loop_closure_transform, cdr))
    {
      return false;
    }
  }

  // Field name: wm_state
  {
    size_t size = ros_message->wm_state.size;
    auto array_ptr = ros_message->wm_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: posterior_keys
  {
    size_t size = ros_message->posterior_keys.size;
    auto array_ptr = ros_message->posterior_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: posterior_values
  {
    size_t size = ros_message->posterior_values.size;
    auto array_ptr = ros_message->posterior_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: likelihood_keys
  {
    size_t size = ros_message->likelihood_keys.size;
    auto array_ptr = ros_message->likelihood_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: likelihood_values
  {
    size_t size = ros_message->likelihood_values.size;
    auto array_ptr = ros_message->likelihood_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: raw_likelihood_keys
  {
    size_t size = ros_message->raw_likelihood_keys.size;
    auto array_ptr = ros_message->raw_likelihood_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: raw_likelihood_values
  {
    size_t size = ros_message->raw_likelihood_values.size;
    auto array_ptr = ros_message->raw_likelihood_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: weights_keys
  {
    size_t size = ros_message->weights_keys.size;
    auto array_ptr = ros_message->weights_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: weights_values
  {
    size_t size = ros_message->weights_values.size;
    auto array_ptr = ros_message->weights_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: labels_keys
  {
    size_t size = ros_message->labels_keys.size;
    auto array_ptr = ros_message->labels_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: labels_values
  {
    size_t size = ros_message->labels_values.size;
    auto array_ptr = ros_message->labels_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: stats_keys
  {
    size_t size = ros_message->stats_keys.size;
    auto array_ptr = ros_message->stats_keys.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: stats_values
  {
    size_t size = ros_message->stats_values.size;
    auto array_ptr = ros_message->stats_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: local_path
  {
    size_t size = ros_message->local_path.size;
    auto array_ptr = ros_message->local_path.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: current_goal_id
  {
    cdr << ros_message->current_goal_id;
  }

  // Field name: odom_cache
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, MapGraph
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->odom_cache, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Info__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Info__ros_msg_type * ros_message = static_cast<_Info__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: ref_id
  {
    cdr >> ros_message->ref_id;
  }

  // Field name: loop_closure_id
  {
    cdr >> ros_message->loop_closure_id;
  }

  // Field name: proximity_detection_id
  {
    cdr >> ros_message->proximity_detection_id;
  }

  // Field name: landmark_id
  {
    cdr >> ros_message->landmark_id;
  }

  // Field name: loop_closure_transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->loop_closure_transform))
    {
      return false;
    }
  }

  // Field name: wm_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wm_state.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->wm_state);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->wm_state, size)) {
      return "failed to create array for field 'wm_state'";
    }
    auto array_ptr = ros_message->wm_state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: posterior_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->posterior_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->posterior_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->posterior_keys, size)) {
      return "failed to create array for field 'posterior_keys'";
    }
    auto array_ptr = ros_message->posterior_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: posterior_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->posterior_values.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->posterior_values);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->posterior_values, size)) {
      return "failed to create array for field 'posterior_values'";
    }
    auto array_ptr = ros_message->posterior_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: likelihood_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->likelihood_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->likelihood_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->likelihood_keys, size)) {
      return "failed to create array for field 'likelihood_keys'";
    }
    auto array_ptr = ros_message->likelihood_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: likelihood_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->likelihood_values.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->likelihood_values);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->likelihood_values, size)) {
      return "failed to create array for field 'likelihood_values'";
    }
    auto array_ptr = ros_message->likelihood_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: raw_likelihood_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->raw_likelihood_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->raw_likelihood_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->raw_likelihood_keys, size)) {
      return "failed to create array for field 'raw_likelihood_keys'";
    }
    auto array_ptr = ros_message->raw_likelihood_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: raw_likelihood_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->raw_likelihood_values.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->raw_likelihood_values);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->raw_likelihood_values, size)) {
      return "failed to create array for field 'raw_likelihood_values'";
    }
    auto array_ptr = ros_message->raw_likelihood_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: weights_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->weights_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->weights_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->weights_keys, size)) {
      return "failed to create array for field 'weights_keys'";
    }
    auto array_ptr = ros_message->weights_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: weights_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->weights_values.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->weights_values);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->weights_values, size)) {
      return "failed to create array for field 'weights_values'";
    }
    auto array_ptr = ros_message->weights_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: labels_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->labels_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->labels_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->labels_keys, size)) {
      return "failed to create array for field 'labels_keys'";
    }
    auto array_ptr = ros_message->labels_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: labels_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->labels_values.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->labels_values);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->labels_values, size)) {
      return "failed to create array for field 'labels_values'";
    }
    auto array_ptr = ros_message->labels_values.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'labels_values'\n");
        return false;
      }
    }
  }

  // Field name: stats_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stats_keys.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->stats_keys);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->stats_keys, size)) {
      return "failed to create array for field 'stats_keys'";
    }
    auto array_ptr = ros_message->stats_keys.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'stats_keys'\n");
        return false;
      }
    }
  }

  // Field name: stats_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stats_values.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->stats_values);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->stats_values, size)) {
      return "failed to create array for field 'stats_values'";
    }
    auto array_ptr = ros_message->stats_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: local_path
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_path.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->local_path);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->local_path, size)) {
      return "failed to create array for field 'local_path'";
    }
    auto array_ptr = ros_message->local_path.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: current_goal_id
  {
    cdr >> ros_message->current_goal_id;
  }

  // Field name: odom_cache
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, MapGraph
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->odom_cache))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__msg__Info(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Info__ros_msg_type * ros_message = static_cast<const _Info__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ref_id
  {
    size_t item_size = sizeof(ros_message->ref_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_closure_id
  {
    size_t item_size = sizeof(ros_message->loop_closure_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name proximity_detection_id
  {
    size_t item_size = sizeof(ros_message->proximity_detection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name landmark_id
  {
    size_t item_size = sizeof(ros_message->landmark_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_closure_transform

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->loop_closure_transform), current_alignment);
  // field.name wm_state
  {
    size_t array_size = ros_message->wm_state.size;
    auto array_ptr = ros_message->wm_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posterior_keys
  {
    size_t array_size = ros_message->posterior_keys.size;
    auto array_ptr = ros_message->posterior_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posterior_values
  {
    size_t array_size = ros_message->posterior_values.size;
    auto array_ptr = ros_message->posterior_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name likelihood_keys
  {
    size_t array_size = ros_message->likelihood_keys.size;
    auto array_ptr = ros_message->likelihood_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name likelihood_values
  {
    size_t array_size = ros_message->likelihood_values.size;
    auto array_ptr = ros_message->likelihood_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raw_likelihood_keys
  {
    size_t array_size = ros_message->raw_likelihood_keys.size;
    auto array_ptr = ros_message->raw_likelihood_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raw_likelihood_values
  {
    size_t array_size = ros_message->raw_likelihood_values.size;
    auto array_ptr = ros_message->raw_likelihood_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weights_keys
  {
    size_t array_size = ros_message->weights_keys.size;
    auto array_ptr = ros_message->weights_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weights_values
  {
    size_t array_size = ros_message->weights_values.size;
    auto array_ptr = ros_message->weights_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name labels_keys
  {
    size_t array_size = ros_message->labels_keys.size;
    auto array_ptr = ros_message->labels_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name labels_values
  {
    size_t array_size = ros_message->labels_values.size;
    auto array_ptr = ros_message->labels_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name stats_keys
  {
    size_t array_size = ros_message->stats_keys.size;
    auto array_ptr = ros_message->stats_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name stats_values
  {
    size_t array_size = ros_message->stats_values.size;
    auto array_ptr = ros_message->stats_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_path
  {
    size_t array_size = ros_message->local_path.size;
    auto array_ptr = ros_message->local_path.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_goal_id
  {
    size_t item_size = sizeof(ros_message->current_goal_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_cache

  current_alignment += get_serialized_size_rtabmap_ros__msg__MapGraph(
    &(ros_message->odom_cache), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Info__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__msg__Info(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__msg__Info(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: ref_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: loop_closure_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: proximity_detection_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: landmark_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: loop_closure_transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: wm_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posterior_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posterior_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: likelihood_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: likelihood_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: raw_likelihood_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: raw_likelihood_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: weights_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: weights_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: labels_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: labels_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stats_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stats_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_path
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_goal_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: odom_cache
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__MapGraph(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Info__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__msg__Info(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Info = {
  "rtabmap_ros::msg",
  "Info",
  _Info__cdr_serialize,
  _Info__cdr_deserialize,
  _Info__get_serialized_size,
  _Info__max_serialized_size
};

static rosidl_message_type_support_t _Info__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Info,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Info)() {
  return &_Info__type_support;
}

#if defined(__cplusplus)
}
#endif
