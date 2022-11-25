// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_ros:msg/OdomInfo.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/odom_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_ros/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_ros/msg/detail/odom_info__struct.h"
#include "rtabmap_ros/msg/detail/odom_info__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // local_bundle_poses
#include "geometry_msgs/msg/detail/transform__functions.h"  // guess, transform, transform_filtered, transform_ground_truth
#include "rosidl_runtime_c/primitives_sequence.h"  // corner_inliers, local_bundle_ids, local_map_keys, word_inliers, word_matches, words_keys
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // corner_inliers, local_bundle_ids, local_map_keys, word_inliers, word_matches, words_keys
#include "rtabmap_ros/msg/detail/camera_models__functions.h"  // local_bundle_models
#include "rtabmap_ros/msg/detail/key_point__functions.h"  // words_values
#include "rtabmap_ros/msg/detail/point2f__functions.h"  // new_corners, ref_corners
#include "rtabmap_ros/msg/detail/point3f__functions.h"  // local_map_values
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // local_scan_map
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
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
size_t get_serialized_size_rtabmap_ros__msg__CameraModels(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_ros__msg__CameraModels(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, CameraModels)();
size_t get_serialized_size_rtabmap_ros__msg__KeyPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_ros__msg__KeyPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, KeyPoint)();
size_t get_serialized_size_rtabmap_ros__msg__Point2f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_ros__msg__Point2f(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point2f)();
size_t get_serialized_size_rtabmap_ros__msg__Point3f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_ros__msg__Point3f(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point3f)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rtabmap_ros
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();
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


using _OdomInfo__ros_msg_type = rtabmap_ros__msg__OdomInfo;

static bool _OdomInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OdomInfo__ros_msg_type * ros_message = static_cast<const _OdomInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lost
  {
    cdr << (ros_message->lost ? true : false);
  }

  // Field name: matches
  {
    cdr << ros_message->matches;
  }

  // Field name: inliers
  {
    cdr << ros_message->inliers;
  }

  // Field name: icp_inliers_ratio
  {
    cdr << ros_message->icp_inliers_ratio;
  }

  // Field name: icp_rotation
  {
    cdr << ros_message->icp_rotation;
  }

  // Field name: icp_translation
  {
    cdr << ros_message->icp_translation;
  }

  // Field name: icp_structural_complexity
  {
    cdr << ros_message->icp_structural_complexity;
  }

  // Field name: icp_structural_distribution
  {
    cdr << ros_message->icp_structural_distribution;
  }

  // Field name: icp_correspondences
  {
    cdr << ros_message->icp_correspondences;
  }

  // Field name: covariance
  {
    size_t size = 36;
    auto array_ptr = ros_message->covariance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: features
  {
    cdr << ros_message->features;
  }

  // Field name: local_map_size
  {
    cdr << ros_message->local_map_size;
  }

  // Field name: local_scan_map_size
  {
    cdr << ros_message->local_scan_map_size;
  }

  // Field name: local_key_frames
  {
    cdr << ros_message->local_key_frames;
  }

  // Field name: local_bundle_outliers
  {
    cdr << ros_message->local_bundle_outliers;
  }

  // Field name: local_bundle_constraints
  {
    cdr << ros_message->local_bundle_constraints;
  }

  // Field name: local_bundle_time
  {
    cdr << ros_message->local_bundle_time;
  }

  // Field name: key_frame_added
  {
    cdr << (ros_message->key_frame_added ? true : false);
  }

  // Field name: time_estimation
  {
    cdr << ros_message->time_estimation;
  }

  // Field name: time_particle_filtering
  {
    cdr << ros_message->time_particle_filtering;
  }

  // Field name: stamp
  {
    cdr << ros_message->stamp;
  }

  // Field name: interval
  {
    cdr << ros_message->interval;
  }

  // Field name: distance_travelled
  {
    cdr << ros_message->distance_travelled;
  }

  // Field name: memory_usage
  {
    cdr << ros_message->memory_usage;
  }

  // Field name: gravity_roll_error
  {
    cdr << ros_message->gravity_roll_error;
  }

  // Field name: gravity_pitch_error
  {
    cdr << ros_message->gravity_pitch_error;
  }

  // Field name: local_bundle_ids
  {
    size_t size = ros_message->local_bundle_ids.size;
    auto array_ptr = ros_message->local_bundle_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: local_bundle_models
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, CameraModels
      )()->data);
    size_t size = ros_message->local_bundle_models.size;
    auto array_ptr = ros_message->local_bundle_models.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: local_bundle_poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    size_t size = ros_message->local_bundle_poses.size;
    auto array_ptr = ros_message->local_bundle_poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

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

  // Field name: transform_filtered
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transform_filtered, cdr))
    {
      return false;
    }
  }

  // Field name: transform_ground_truth
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transform_ground_truth, cdr))
    {
      return false;
    }
  }

  // Field name: guess
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->guess, cdr))
    {
      return false;
    }
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: words_keys
  {
    size_t size = ros_message->words_keys.size;
    auto array_ptr = ros_message->words_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: words_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, KeyPoint
      )()->data);
    size_t size = ros_message->words_values.size;
    auto array_ptr = ros_message->words_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: word_matches
  {
    size_t size = ros_message->word_matches.size;
    auto array_ptr = ros_message->word_matches.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: word_inliers
  {
    size_t size = ros_message->word_inliers.size;
    auto array_ptr = ros_message->word_inliers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: local_map_keys
  {
    size_t size = ros_message->local_map_keys.size;
    auto array_ptr = ros_message->local_map_keys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: local_map_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point3f
      )()->data);
    size_t size = ros_message->local_map_values.size;
    auto array_ptr = ros_message->local_map_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: local_scan_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->local_scan_map, cdr))
    {
      return false;
    }
  }

  // Field name: ref_corners
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point2f
      )()->data);
    size_t size = ros_message->ref_corners.size;
    auto array_ptr = ros_message->ref_corners.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: new_corners
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point2f
      )()->data);
    size_t size = ros_message->new_corners.size;
    auto array_ptr = ros_message->new_corners.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: corner_inliers
  {
    size_t size = ros_message->corner_inliers.size;
    auto array_ptr = ros_message->corner_inliers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _OdomInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OdomInfo__ros_msg_type * ros_message = static_cast<_OdomInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lost = tmp ? true : false;
  }

  // Field name: matches
  {
    cdr >> ros_message->matches;
  }

  // Field name: inliers
  {
    cdr >> ros_message->inliers;
  }

  // Field name: icp_inliers_ratio
  {
    cdr >> ros_message->icp_inliers_ratio;
  }

  // Field name: icp_rotation
  {
    cdr >> ros_message->icp_rotation;
  }

  // Field name: icp_translation
  {
    cdr >> ros_message->icp_translation;
  }

  // Field name: icp_structural_complexity
  {
    cdr >> ros_message->icp_structural_complexity;
  }

  // Field name: icp_structural_distribution
  {
    cdr >> ros_message->icp_structural_distribution;
  }

  // Field name: icp_correspondences
  {
    cdr >> ros_message->icp_correspondences;
  }

  // Field name: covariance
  {
    size_t size = 36;
    auto array_ptr = ros_message->covariance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: features
  {
    cdr >> ros_message->features;
  }

  // Field name: local_map_size
  {
    cdr >> ros_message->local_map_size;
  }

  // Field name: local_scan_map_size
  {
    cdr >> ros_message->local_scan_map_size;
  }

  // Field name: local_key_frames
  {
    cdr >> ros_message->local_key_frames;
  }

  // Field name: local_bundle_outliers
  {
    cdr >> ros_message->local_bundle_outliers;
  }

  // Field name: local_bundle_constraints
  {
    cdr >> ros_message->local_bundle_constraints;
  }

  // Field name: local_bundle_time
  {
    cdr >> ros_message->local_bundle_time;
  }

  // Field name: key_frame_added
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_frame_added = tmp ? true : false;
  }

  // Field name: time_estimation
  {
    cdr >> ros_message->time_estimation;
  }

  // Field name: time_particle_filtering
  {
    cdr >> ros_message->time_particle_filtering;
  }

  // Field name: stamp
  {
    cdr >> ros_message->stamp;
  }

  // Field name: interval
  {
    cdr >> ros_message->interval;
  }

  // Field name: distance_travelled
  {
    cdr >> ros_message->distance_travelled;
  }

  // Field name: memory_usage
  {
    cdr >> ros_message->memory_usage;
  }

  // Field name: gravity_roll_error
  {
    cdr >> ros_message->gravity_roll_error;
  }

  // Field name: gravity_pitch_error
  {
    cdr >> ros_message->gravity_pitch_error;
  }

  // Field name: local_bundle_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_bundle_ids.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->local_bundle_ids);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->local_bundle_ids, size)) {
      return "failed to create array for field 'local_bundle_ids'";
    }
    auto array_ptr = ros_message->local_bundle_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: local_bundle_models
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, CameraModels
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_bundle_models.data) {
      rtabmap_ros__msg__CameraModels__Sequence__fini(&ros_message->local_bundle_models);
    }
    if (!rtabmap_ros__msg__CameraModels__Sequence__init(&ros_message->local_bundle_models, size)) {
      return "failed to create array for field 'local_bundle_models'";
    }
    auto array_ptr = ros_message->local_bundle_models.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: local_bundle_poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_bundle_poses.data) {
      geometry_msgs__msg__Pose__Sequence__fini(&ros_message->local_bundle_poses);
    }
    if (!geometry_msgs__msg__Pose__Sequence__init(&ros_message->local_bundle_poses, size)) {
      return "failed to create array for field 'local_bundle_poses'";
    }
    auto array_ptr = ros_message->local_bundle_poses.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

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

  // Field name: transform_filtered
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transform_filtered))
    {
      return false;
    }
  }

  // Field name: transform_ground_truth
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transform_ground_truth))
    {
      return false;
    }
  }

  // Field name: guess
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->guess))
    {
      return false;
    }
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: words_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->words_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->words_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->words_keys, size)) {
      return "failed to create array for field 'words_keys'";
    }
    auto array_ptr = ros_message->words_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: words_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, KeyPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->words_values.data) {
      rtabmap_ros__msg__KeyPoint__Sequence__fini(&ros_message->words_values);
    }
    if (!rtabmap_ros__msg__KeyPoint__Sequence__init(&ros_message->words_values, size)) {
      return "failed to create array for field 'words_values'";
    }
    auto array_ptr = ros_message->words_values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: word_matches
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_matches.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_matches);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_matches, size)) {
      return "failed to create array for field 'word_matches'";
    }
    auto array_ptr = ros_message->word_matches.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: word_inliers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->word_inliers.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->word_inliers);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->word_inliers, size)) {
      return "failed to create array for field 'word_inliers'";
    }
    auto array_ptr = ros_message->word_inliers.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: local_map_keys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_map_keys.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->local_map_keys);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->local_map_keys, size)) {
      return "failed to create array for field 'local_map_keys'";
    }
    auto array_ptr = ros_message->local_map_keys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: local_map_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point3f
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_map_values.data) {
      rtabmap_ros__msg__Point3f__Sequence__fini(&ros_message->local_map_values);
    }
    if (!rtabmap_ros__msg__Point3f__Sequence__init(&ros_message->local_map_values, size)) {
      return "failed to create array for field 'local_map_values'";
    }
    auto array_ptr = ros_message->local_map_values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: local_scan_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->local_scan_map))
    {
      return false;
    }
  }

  // Field name: ref_corners
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point2f
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ref_corners.data) {
      rtabmap_ros__msg__Point2f__Sequence__fini(&ros_message->ref_corners);
    }
    if (!rtabmap_ros__msg__Point2f__Sequence__init(&ros_message->ref_corners, size)) {
      return "failed to create array for field 'ref_corners'";
    }
    auto array_ptr = ros_message->ref_corners.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: new_corners
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, Point2f
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->new_corners.data) {
      rtabmap_ros__msg__Point2f__Sequence__fini(&ros_message->new_corners);
    }
    if (!rtabmap_ros__msg__Point2f__Sequence__init(&ros_message->new_corners, size)) {
      return "failed to create array for field 'new_corners'";
    }
    auto array_ptr = ros_message->new_corners.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: corner_inliers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->corner_inliers.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->corner_inliers);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->corner_inliers, size)) {
      return "failed to create array for field 'corner_inliers'";
    }
    auto array_ptr = ros_message->corner_inliers.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t get_serialized_size_rtabmap_ros__msg__OdomInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OdomInfo__ros_msg_type * ros_message = static_cast<const _OdomInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name lost
  {
    size_t item_size = sizeof(ros_message->lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matches
  {
    size_t item_size = sizeof(ros_message->matches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inliers
  {
    size_t item_size = sizeof(ros_message->inliers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name icp_inliers_ratio
  {
    size_t item_size = sizeof(ros_message->icp_inliers_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name icp_rotation
  {
    size_t item_size = sizeof(ros_message->icp_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name icp_translation
  {
    size_t item_size = sizeof(ros_message->icp_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name icp_structural_complexity
  {
    size_t item_size = sizeof(ros_message->icp_structural_complexity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name icp_structural_distribution
  {
    size_t item_size = sizeof(ros_message->icp_structural_distribution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name icp_correspondences
  {
    size_t item_size = sizeof(ros_message->icp_correspondences);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name covariance
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->covariance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name features
  {
    size_t item_size = sizeof(ros_message->features);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_map_size
  {
    size_t item_size = sizeof(ros_message->local_map_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_scan_map_size
  {
    size_t item_size = sizeof(ros_message->local_scan_map_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_key_frames
  {
    size_t item_size = sizeof(ros_message->local_key_frames);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_bundle_outliers
  {
    size_t item_size = sizeof(ros_message->local_bundle_outliers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_bundle_constraints
  {
    size_t item_size = sizeof(ros_message->local_bundle_constraints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_bundle_time
  {
    size_t item_size = sizeof(ros_message->local_bundle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_frame_added
  {
    size_t item_size = sizeof(ros_message->key_frame_added);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_estimation
  {
    size_t item_size = sizeof(ros_message->time_estimation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_particle_filtering
  {
    size_t item_size = sizeof(ros_message->time_particle_filtering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp
  {
    size_t item_size = sizeof(ros_message->stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name interval
  {
    size_t item_size = sizeof(ros_message->interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_travelled
  {
    size_t item_size = sizeof(ros_message->distance_travelled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name memory_usage
  {
    size_t item_size = sizeof(ros_message->memory_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gravity_roll_error
  {
    size_t item_size = sizeof(ros_message->gravity_roll_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gravity_pitch_error
  {
    size_t item_size = sizeof(ros_message->gravity_pitch_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_bundle_ids
  {
    size_t array_size = ros_message->local_bundle_ids.size;
    auto array_ptr = ros_message->local_bundle_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_bundle_models
  {
    size_t array_size = ros_message->local_bundle_models.size;
    auto array_ptr = ros_message->local_bundle_models.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_ros__msg__CameraModels(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name local_bundle_poses
  {
    size_t array_size = ros_message->local_bundle_poses.size;
    auto array_ptr = ros_message->local_bundle_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name transform

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);
  // field.name transform_filtered

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform_filtered), current_alignment);
  // field.name transform_ground_truth

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform_ground_truth), current_alignment);
  // field.name guess

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->guess), current_alignment);
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name words_keys
  {
    size_t array_size = ros_message->words_keys.size;
    auto array_ptr = ros_message->words_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name words_values
  {
    size_t array_size = ros_message->words_values.size;
    auto array_ptr = ros_message->words_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_ros__msg__KeyPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name word_matches
  {
    size_t array_size = ros_message->word_matches.size;
    auto array_ptr = ros_message->word_matches.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name word_inliers
  {
    size_t array_size = ros_message->word_inliers.size;
    auto array_ptr = ros_message->word_inliers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_map_keys
  {
    size_t array_size = ros_message->local_map_keys.size;
    auto array_ptr = ros_message->local_map_keys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_map_values
  {
    size_t array_size = ros_message->local_map_values.size;
    auto array_ptr = ros_message->local_map_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_ros__msg__Point3f(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name local_scan_map

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->local_scan_map), current_alignment);
  // field.name ref_corners
  {
    size_t array_size = ros_message->ref_corners.size;
    auto array_ptr = ros_message->ref_corners.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_ros__msg__Point2f(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name new_corners
  {
    size_t array_size = ros_message->new_corners.size;
    auto array_ptr = ros_message->new_corners.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rtabmap_ros__msg__Point2f(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name corner_inliers
  {
    size_t array_size = ros_message->corner_inliers.size;
    auto array_ptr = ros_message->corner_inliers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OdomInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_ros__msg__OdomInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_ros
size_t max_serialized_size_rtabmap_ros__msg__OdomInfo(
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
  // member: lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: matches
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: inliers
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: icp_inliers_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: icp_rotation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: icp_translation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: icp_structural_complexity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: icp_structural_distribution
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: icp_correspondences
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: covariance
  {
    size_t array_size = 36;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: features
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_map_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_scan_map_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_key_frames
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_bundle_outliers
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_bundle_constraints
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_bundle_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: key_frame_added
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: time_estimation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_particle_filtering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: interval
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance_travelled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: memory_usage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gravity_roll_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gravity_pitch_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_bundle_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_bundle_models
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__CameraModels(
        full_bounded, current_alignment);
    }
  }
  // member: local_bundle_poses
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: transform_filtered
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: transform_ground_truth
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: guess
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: words_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: words_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__KeyPoint(
        full_bounded, current_alignment);
    }
  }
  // member: word_matches
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: word_inliers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_map_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: local_map_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__Point3f(
        full_bounded, current_alignment);
    }
  }
  // member: local_scan_map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        full_bounded, current_alignment);
    }
  }
  // member: ref_corners
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__Point2f(
        full_bounded, current_alignment);
    }
  }
  // member: new_corners
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_ros__msg__Point2f(
        full_bounded, current_alignment);
    }
  }
  // member: corner_inliers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _OdomInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_ros__msg__OdomInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OdomInfo = {
  "rtabmap_ros::msg",
  "OdomInfo",
  _OdomInfo__cdr_serialize,
  _OdomInfo__cdr_deserialize,
  _OdomInfo__get_serialized_size,
  _OdomInfo__max_serialized_size
};

static rosidl_message_type_support_t _OdomInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OdomInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_ros, msg, OdomInfo)() {
  return &_OdomInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
