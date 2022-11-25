// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_ros:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_ros/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
#include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_ros/msg/detail/key_point__functions.h"
#include "rtabmap_ros/msg/detail/key_point__struct.h"


// Include directives for member types
// Member `pt`
#include "rtabmap_ros/msg/point2f.h"
// Member `pt`
#include "rtabmap_ros/msg/detail/point2f__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__msg__KeyPoint__init(message_memory);
}

void KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_fini_function(void * message_memory)
{
  rtabmap_ros__msg__KeyPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_member_array[6] = {
  {
    "pt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__KeyPoint, pt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__KeyPoint, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__KeyPoint, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__KeyPoint, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octave",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__KeyPoint, octave),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__KeyPoint, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_members = {
  "rtabmap_ros__msg",  // message namespace
  "KeyPoint",  // message name
  6,  // number of fields
  sizeof(rtabmap_ros__msg__KeyPoint),
  KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_member_array,  // message members
  KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_type_support_handle = {
  0,
  &KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, KeyPoint)() {
  KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, Point2f)();
  if (!KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_type_support_handle.typesupport_identifier) {
    KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &KeyPoint__rosidl_typesupport_introspection_c__KeyPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
