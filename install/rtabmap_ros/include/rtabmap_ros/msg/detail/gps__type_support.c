// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_ros:msg/GPS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_ros/msg/detail/gps__rosidl_typesupport_introspection_c.h"
#include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_ros/msg/detail/gps__functions.h"
#include "rtabmap_ros/msg/detail/gps__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GPS__rosidl_typesupport_introspection_c__GPS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__msg__GPS__init(message_memory);
}

void GPS__rosidl_typesupport_introspection_c__GPS_fini_function(void * message_memory)
{
  rtabmap_ros__msg__GPS__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GPS__rosidl_typesupport_introspection_c__GPS_message_member_array[6] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__GPS, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__GPS, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__GPS, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__GPS, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__GPS, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bearing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__msg__GPS, bearing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GPS__rosidl_typesupport_introspection_c__GPS_message_members = {
  "rtabmap_ros__msg",  // message namespace
  "GPS",  // message name
  6,  // number of fields
  sizeof(rtabmap_ros__msg__GPS),
  GPS__rosidl_typesupport_introspection_c__GPS_message_member_array,  // message members
  GPS__rosidl_typesupport_introspection_c__GPS_init_function,  // function to initialize message memory (memory has to be allocated)
  GPS__rosidl_typesupport_introspection_c__GPS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle = {
  0,
  &GPS__rosidl_typesupport_introspection_c__GPS_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, msg, GPS)() {
  if (!GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle.typesupport_identifier) {
    GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
