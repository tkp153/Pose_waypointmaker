// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_ros:msg/RGBDImages.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_ros/msg/detail/rgbd_images__rosidl_typesupport_introspection_c.h"
#include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_ros/msg/detail/rgbd_images__functions.h"
#include "rtabmap_ros/msg/detail/rgbd_images__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rgbd_images`
#include "rtabmap_ros/msg/rgbd_image.h"
// Member `rgbd_images`
#include "rtabmap_ros/msg/detail/rgbd_image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__msg__RGBDImages__init(message_memory);
}

void RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_fini_function(void * message_memory)
{
  rtabmap_ros__msg__RGBDImages__fini(message_memory);
}

size_t RGBDImages__rosidl_typesupport_introspection_c__size_function__RGBDImage__rgbd_images(
  const void * untyped_member)
{
  const rtabmap_ros__msg__RGBDImage__Sequence * member =
    (const rtabmap_ros__msg__RGBDImage__Sequence *)(untyped_member);
  return member->size;
}

const void * RGBDImages__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__rgbd_images(
  const void * untyped_member, size_t index)
{
  const rtabmap_ros__msg__RGBDImage__Sequence * member =
    (const rtabmap_ros__msg__RGBDImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RGBDImages__rosidl_typesupport_introspection_c__get_function__RGBDImage__rgbd_images(
  void * untyped_member, size_t index)
{
  rtabmap_ros__msg__RGBDImage__Sequence * member =
    (rtabmap_ros__msg__RGBDImage__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RGBDImages__rosidl_typesupport_introspection_c__resize_function__RGBDImage__rgbd_images(
  void * untyped_member, size_t size)
{
  rtabmap_ros__msg__RGBDImage__Sequence * member =
    (rtabmap_ros__msg__RGBDImage__Sequence *)(untyped_member);
  rtabmap_ros__msg__RGBDImage__Sequence__fini(member);
  return rtabmap_ros__msg__RGBDImage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImages, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgbd_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__RGBDImages, rgbd_images),  // bytes offset in struct
    NULL,  // default value
    RGBDImages__rosidl_typesupport_introspection_c__size_function__RGBDImage__rgbd_images,  // size() function pointer
    RGBDImages__rosidl_typesupport_introspection_c__get_const_function__RGBDImage__rgbd_images,  // get_const(index) function pointer
    RGBDImages__rosidl_typesupport_introspection_c__get_function__RGBDImage__rgbd_images,  // get(index) function pointer
    RGBDImages__rosidl_typesupport_introspection_c__resize_function__RGBDImage__rgbd_images  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_members = {
  "rtabmap_ros__msg",  // message namespace
  "RGBDImages",  // message name
  2,  // number of fields
  sizeof(rtabmap_ros__msg__RGBDImages),
  RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_member_array,  // message members
  RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_init_function,  // function to initialize message memory (memory has to be allocated)
  RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_type_support_handle = {
  0,
  &RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, RGBDImages)() {
  RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, RGBDImage)();
  if (!RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_type_support_handle.typesupport_identifier) {
    RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RGBDImages__rosidl_typesupport_introspection_c__RGBDImages_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
