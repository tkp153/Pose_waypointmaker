// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openpifpaf_ros2_msgs:msg/Transforms.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openpifpaf_ros2_msgs/msg/detail/transforms__rosidl_typesupport_introspection_c.h"
#include "openpifpaf_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openpifpaf_ros2_msgs/msg/detail/transforms__functions.h"
#include "openpifpaf_ros2_msgs/msg/detail/transforms__struct.h"


// Include directives for member types
// Member `transforms`
#include "openpifpaf_ros2_msgs/msg/transform.h"
// Member `transforms`
#include "openpifpaf_ros2_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Transforms__rosidl_typesupport_introspection_c__Transforms_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openpifpaf_ros2_msgs__msg__Transforms__init(message_memory);
}

void Transforms__rosidl_typesupport_introspection_c__Transforms_fini_function(void * message_memory)
{
  openpifpaf_ros2_msgs__msg__Transforms__fini(message_memory);
}

size_t Transforms__rosidl_typesupport_introspection_c__size_function__Transform__transforms(
  const void * untyped_member)
{
  const openpifpaf_ros2_msgs__msg__Transform__Sequence * member =
    (const openpifpaf_ros2_msgs__msg__Transform__Sequence *)(untyped_member);
  return member->size;
}

const void * Transforms__rosidl_typesupport_introspection_c__get_const_function__Transform__transforms(
  const void * untyped_member, size_t index)
{
  const openpifpaf_ros2_msgs__msg__Transform__Sequence * member =
    (const openpifpaf_ros2_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Transforms__rosidl_typesupport_introspection_c__get_function__Transform__transforms(
  void * untyped_member, size_t index)
{
  openpifpaf_ros2_msgs__msg__Transform__Sequence * member =
    (openpifpaf_ros2_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Transforms__rosidl_typesupport_introspection_c__resize_function__Transform__transforms(
  void * untyped_member, size_t size)
{
  openpifpaf_ros2_msgs__msg__Transform__Sequence * member =
    (openpifpaf_ros2_msgs__msg__Transform__Sequence *)(untyped_member);
  openpifpaf_ros2_msgs__msg__Transform__Sequence__fini(member);
  return openpifpaf_ros2_msgs__msg__Transform__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Transforms__rosidl_typesupport_introspection_c__Transforms_message_member_array[1] = {
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openpifpaf_ros2_msgs__msg__Transforms, transforms),  // bytes offset in struct
    NULL,  // default value
    Transforms__rosidl_typesupport_introspection_c__size_function__Transform__transforms,  // size() function pointer
    Transforms__rosidl_typesupport_introspection_c__get_const_function__Transform__transforms,  // get_const(index) function pointer
    Transforms__rosidl_typesupport_introspection_c__get_function__Transform__transforms,  // get(index) function pointer
    Transforms__rosidl_typesupport_introspection_c__resize_function__Transform__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Transforms__rosidl_typesupport_introspection_c__Transforms_message_members = {
  "openpifpaf_ros2_msgs__msg",  // message namespace
  "Transforms",  // message name
  1,  // number of fields
  sizeof(openpifpaf_ros2_msgs__msg__Transforms),
  Transforms__rosidl_typesupport_introspection_c__Transforms_message_member_array,  // message members
  Transforms__rosidl_typesupport_introspection_c__Transforms_init_function,  // function to initialize message memory (memory has to be allocated)
  Transforms__rosidl_typesupport_introspection_c__Transforms_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Transforms__rosidl_typesupport_introspection_c__Transforms_message_type_support_handle = {
  0,
  &Transforms__rosidl_typesupport_introspection_c__Transforms_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openpifpaf_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openpifpaf_ros2_msgs, msg, Transforms)() {
  Transforms__rosidl_typesupport_introspection_c__Transforms_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openpifpaf_ros2_msgs, msg, Transform)();
  if (!Transforms__rosidl_typesupport_introspection_c__Transforms_message_type_support_handle.typesupport_identifier) {
    Transforms__rosidl_typesupport_introspection_c__Transforms_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Transforms__rosidl_typesupport_introspection_c__Transforms_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
