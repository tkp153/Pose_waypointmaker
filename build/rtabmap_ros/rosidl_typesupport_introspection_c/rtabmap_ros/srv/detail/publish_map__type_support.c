// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_ros:srv/PublishMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_ros/srv/detail/publish_map__rosidl_typesupport_introspection_c.h"
#include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_ros/srv/detail/publish_map__functions.h"
#include "rtabmap_ros/srv/detail/publish_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__srv__PublishMap_Request__init(message_memory);
}

void PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_fini_function(void * message_memory)
{
  rtabmap_ros__srv__PublishMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_member_array[3] = {
  {
    "global_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__PublishMap_Request, global_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__PublishMap_Request, optimized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "graph_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__PublishMap_Request, graph_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_members = {
  "rtabmap_ros__srv",  // message namespace
  "PublishMap_Request",  // message name
  3,  // number of fields
  sizeof(rtabmap_ros__srv__PublishMap_Request),
  PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_member_array,  // message members
  PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_type_support_handle = {
  0,
  &PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, PublishMap_Request)() {
  if (!PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_type_support_handle.typesupport_identifier) {
    PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PublishMap_Request__rosidl_typesupport_introspection_c__PublishMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rtabmap_ros/srv/detail/publish_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rtabmap_ros/srv/detail/publish_map__functions.h"
// already included above
// #include "rtabmap_ros/srv/detail/publish_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__srv__PublishMap_Response__init(message_memory);
}

void PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_fini_function(void * message_memory)
{
  rtabmap_ros__srv__PublishMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__PublishMap_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_members = {
  "rtabmap_ros__srv",  // message namespace
  "PublishMap_Response",  // message name
  1,  // number of fields
  sizeof(rtabmap_ros__srv__PublishMap_Response),
  PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_member_array,  // message members
  PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_type_support_handle = {
  0,
  &PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, PublishMap_Response)() {
  if (!PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_type_support_handle.typesupport_identifier) {
    PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PublishMap_Response__rosidl_typesupport_introspection_c__PublishMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rtabmap_ros/srv/detail/publish_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_service_members = {
  "rtabmap_ros__srv",  // service namespace
  "PublishMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_Request_message_type_support_handle,
  NULL  // response message
  // rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_service_type_support_handle = {
  0,
  &rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, PublishMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, PublishMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, PublishMap)() {
  if (!rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_service_type_support_handle.typesupport_identifier) {
    rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, PublishMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, PublishMap_Response)()->data;
  }

  return &rtabmap_ros__srv__detail__publish_map__rosidl_typesupport_introspection_c__PublishMap_service_type_support_handle;
}
