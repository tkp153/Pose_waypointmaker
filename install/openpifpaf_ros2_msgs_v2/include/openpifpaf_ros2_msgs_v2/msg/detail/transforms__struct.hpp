// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openpifpaf_ros2_msgs_v2:msg/Transforms.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__TRANSFORMS__STRUCT_HPP_
#define OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__TRANSFORMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'transforms'
#include "openpifpaf_ros2_msgs_v2/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__openpifpaf_ros2_msgs_v2__msg__Transforms __attribute__((deprecated))
#else
# define DEPRECATED__openpifpaf_ros2_msgs_v2__msg__Transforms __declspec(deprecated)
#endif

namespace openpifpaf_ros2_msgs_v2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Transforms_
{
  using Type = Transforms_<ContainerAllocator>;

  explicit Transforms_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Transforms_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _transforms_type =
    std::vector<openpifpaf_ros2_msgs_v2::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<openpifpaf_ros2_msgs_v2::msg::Transform_<ContainerAllocator>>::other>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__transforms(
    const std::vector<openpifpaf_ros2_msgs_v2::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<openpifpaf_ros2_msgs_v2::msg::Transform_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator> *;
  using ConstRawPtr =
    const openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openpifpaf_ros2_msgs_v2__msg__Transforms
    std::shared_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openpifpaf_ros2_msgs_v2__msg__Transforms
    std::shared_ptr<openpifpaf_ros2_msgs_v2::msg::Transforms_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transforms_ & other) const
  {
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transforms_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transforms_

// alias to use template instance with default allocator
using Transforms =
  openpifpaf_ros2_msgs_v2::msg::Transforms_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs_v2

#endif  // OPENPIFPAF_ROS2_MSGS_V2__MSG__DETAIL__TRANSFORMS__STRUCT_HPP_
