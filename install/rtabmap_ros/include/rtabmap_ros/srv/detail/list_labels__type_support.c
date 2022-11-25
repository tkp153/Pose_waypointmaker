// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_ros:srv/ListLabels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_ros/srv/detail/list_labels__rosidl_typesupport_introspection_c.h"
#include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_ros/srv/detail/list_labels__functions.h"
#include "rtabmap_ros/srv/detail/list_labels__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__srv__ListLabels_Request__init(message_memory);
}

void ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_fini_function(void * message_memory)
{
  rtabmap_ros__srv__ListLabels_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__ListLabels_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_members = {
  "rtabmap_ros__srv",  // message namespace
  "ListLabels_Request",  // message name
  1,  // number of fields
  sizeof(rtabmap_ros__srv__ListLabels_Request),
  ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_member_array,  // message members
  ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle = {
  0,
  &ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, ListLabels_Request)() {
  if (!ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle.typesupport_identifier) {
    ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ListLabels_Request__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rtabmap_ros/srv/detail/list_labels__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rtabmap_ros/srv/detail/list_labels__functions.h"
// already included above
// #include "rtabmap_ros/srv/detail/list_labels__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `labels`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__srv__ListLabels_Response__init(message_memory);
}

void ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_fini_function(void * message_memory)
{
  rtabmap_ros__srv__ListLabels_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__ListLabels_Response, ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__ListLabels_Response, labels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_members = {
  "rtabmap_ros__srv",  // message namespace
  "ListLabels_Response",  // message name
  2,  // number of fields
  sizeof(rtabmap_ros__srv__ListLabels_Response),
  ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_member_array,  // message members
  ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle = {
  0,
  &ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, ListLabels_Response)() {
  if (!ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle.typesupport_identifier) {
    ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ListLabels_Response__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rtabmap_ros/srv/detail/list_labels__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_members = {
  "rtabmap_ros__srv",  // service namespace
  "ListLabels",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_Request_message_type_support_handle,
  NULL  // response message
  // rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_Response_message_type_support_handle
};

static rosidl_service_type_support_t rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle = {
  0,
  &rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, ListLabels_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, ListLabels_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, ListLabels)() {
  if (!rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle.typesupport_identifier) {
    rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, ListLabels_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, ListLabels_Response)()->data;
  }

  return &rtabmap_ros__srv__detail__list_labels__rosidl_typesupport_introspection_c__ListLabels_service_type_support_handle;
}
