// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_ros:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_ros/msg/detail/rgbd_image__rosidl_typesupport_introspection_c.h"
#include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_ros/msg/detail/rgbd_image__functions.h"
#include "rtabmap_ros/msg/detail/rgbd_image__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rgb_camera_info`
// Member `depth_camera_info`
#include "sensor_msgs/msg/camera_info.h"
// Member `rgb_camera_info`
// Member `depth_camera_info`
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_introspection_c.h"
// Member `rgb`
// Member `depth`
#include "sensor_msgs/msg/image.h"
// Member `rgb`
// Member `depth`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `rgb_compressed`
// Member `depth_compressed`
#include "sensor_msgs/msg/compressed_image.h"
// Member `rgb_compressed`
// Member `depth_compressed`
#include "sensor_msgs/msg/detail/compressed_image__rosidl_typesupport_introspection_c.h"
// Member `key_points`
#include "rtabmap_ros/msg/key_point.h"
// Member `key_points`
#include "rtabmap_ros/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "rtabmap_ros/msg/point3f.h"
// Member `points`
#include "rtabmap_ros/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `global_descriptor`
#include "rtabmap_ros/msg/global_descriptor.h"
// Member `global_descriptor`
#include "rtabmap_ros/msg/detail/global_descriptor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__msg__RGBDImage__init(message_memory);
}

void RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_fini_function(void * message_memory)
{
  rtabmap_ros__msg__RGBDImage__fini(message_memory);
}

size_t RGBDImage__rosidl_typesupport_introspection_c__size_function__KeyPoint__key_points(
  const void * untyped_member)
{
  const rtabmap_ros__msg__KeyPoint__Sequence * member =
    (const rtabmap_ros__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * RGBDImage__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__key_points(
  const void * untyped_member, size_t index)
{
  const rtabmap_ros__msg__KeyPoint__Sequence * member =
    (const rtabmap_ros__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RGBDImage__rosidl_typesupport_introspection_c__get_function__KeyPoint__key_points(
  void * untyped_member, size_t index)
{
  rtabmap_ros__msg__KeyPoint__Sequence * member =
    (rtabmap_ros__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RGBDImage__rosidl_typesupport_introspection_c__resize_function__KeyPoint__key_points(
  void * untyped_member, size_t size)
{
  rtabmap_ros__msg__KeyPoint__Sequence * member =
    (rtabmap_ros__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_ros__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_ros__msg__KeyPoint__Sequence__init(member, size);
}

size_t RGBDImage__rosidl_typesupport_introspection_c__size_function__Point3f__points(
  const void * untyped_member)
{
  const rtabmap_ros__msg__Point3f__Sequence * member =
    (const rtabmap_ros__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * RGBDImage__rosidl_typesupport_introspection_c__get_const_function__Point3f__points(
  const void * untyped_member, size_t index)
{
  const rtabmap_ros__msg__Point3f__Sequence * member =
    (const rtabmap_ros__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RGBDImage__rosidl_typesupport_introspection_c__get_function__Point3f__points(
  void * untyped_member, size_t index)
{
  rtabmap_ros__msg__Point3f__Sequence * member =
    (rtabmap_ros__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RGBDImage__rosidl_typesupport_introspection_c__resize_function__Point3f__points(
  void * untyped_member, size_t size)
{
  rtabmap_ros__msg__Point3f__Sequence * member =
    (rtabmap_ros__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_ros__msg__Point3f__Sequence__fini(member);
  return rtabmap_ros__msg__Point3f__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb_camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, rgb_camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, depth_camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, rgb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb_compressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, rgb_compressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_compressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, depth_compressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, key_points),  // bytes offset in struct
    NULL,  // default value
    RGBDImage__rosidl_typesupport_introspection_c__size_function__KeyPoint__key_points,  // size() function pointer
    RGBDImage__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__key_points,  // get_const(index) function pointer
    RGBDImage__rosidl_typesupport_introspection_c__get_function__KeyPoint__key_points,  // get(index) function pointer
    RGBDImage__rosidl_typesupport_introspection_c__resize_function__KeyPoint__key_points  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, points),  // bytes offset in struct
    NULL,  // default value
    RGBDImage__rosidl_typesupport_introspection_c__size_function__Point3f__points,  // size() function pointer
    RGBDImage__rosidl_typesupport_introspection_c__get_const_function__Point3f__points,  // get_const(index) function pointer
    RGBDImage__rosidl_typesupport_introspection_c__get_function__Point3f__points,  // get(index) function pointer
    RGBDImage__rosidl_typesupport_introspection_c__resize_function__Point3f__points  // resize(index) function pointer
  },
  {
    "descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, descriptors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_descriptor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImage, global_descriptor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_members = {
  "rtabmap_ros__msg",  // message namespace
  "RGBDImage",  // message name
  11,  // number of fields
  sizeof(rtabmap_ros__msg__RGBDImage),
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array,  // message members
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_init_function,  // function to initialize message memory (memory has to be allocated)
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle = {
  0,
  &RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, RGBDImage)() {
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CompressedImage)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CompressedImage)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, KeyPoint)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, Point3f)();
  RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, GlobalDescriptor)();
  if (!RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle.typesupport_identifier) {
    RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RGBDImage__rosidl_typesupport_introspection_c__RGBDImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
