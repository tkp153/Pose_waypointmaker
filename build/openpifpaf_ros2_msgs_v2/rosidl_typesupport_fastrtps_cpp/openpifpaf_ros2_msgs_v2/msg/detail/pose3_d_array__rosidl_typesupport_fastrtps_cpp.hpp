// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from openpifpaf_ros2_msgs_v2:msg/Pose3DArray.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__POSE3_D_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__POSE3_D_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "openpifpaf_ros2_msgs_v2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "openpifpaf_ros2_msgs_v2/msg/detail/pose3_d_array__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace openpifpaf_ros2_msgs_v2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
cdr_serialize(
  const openpifpaf_ros2_msgs_v2::msg::Pose3DArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  openpifpaf_ros2_msgs_v2::msg::Pose3DArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
get_serialized_size(
  const openpifpaf_ros2_msgs_v2::msg::Pose3DArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
max_serialized_size_Pose3DArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs_v2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openpifpaf_ros2_msgs_v2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openpifpaf_ros2_msgs_v2, msg, Pose3DArray)();

#ifdef __cplusplus
}
#endif

#endif  // OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__POSE3_D_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
