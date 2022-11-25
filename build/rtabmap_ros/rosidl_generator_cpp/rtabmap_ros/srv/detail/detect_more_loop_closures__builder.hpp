// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/detect_more_loop_closures__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_DetectMoreLoopClosures_Request_inter_only
{
public:
  explicit Init_DetectMoreLoopClosures_Request_inter_only(::rtabmap_ros::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Request inter_only(::rtabmap_ros::srv::DetectMoreLoopClosures_Request::_inter_only_type arg)
  {
    msg_.inter_only = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_intra_only
{
public:
  explicit Init_DetectMoreLoopClosures_Request_intra_only(::rtabmap_ros::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_inter_only intra_only(::rtabmap_ros::srv::DetectMoreLoopClosures_Request::_intra_only_type arg)
  {
    msg_.intra_only = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_inter_only(msg_);
  }

private:
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_iterations
{
public:
  explicit Init_DetectMoreLoopClosures_Request_iterations(::rtabmap_ros::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_intra_only iterations(::rtabmap_ros::srv::DetectMoreLoopClosures_Request::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_intra_only(msg_);
  }

private:
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_cluster_angle
{
public:
  explicit Init_DetectMoreLoopClosures_Request_cluster_angle(::rtabmap_ros::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_iterations cluster_angle(::rtabmap_ros::srv::DetectMoreLoopClosures_Request::_cluster_angle_type arg)
  {
    msg_.cluster_angle = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_iterations(msg_);
  }

private:
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_cluster_radius_min
{
public:
  explicit Init_DetectMoreLoopClosures_Request_cluster_radius_min(::rtabmap_ros::srv::DetectMoreLoopClosures_Request & msg)
  : msg_(msg)
  {}
  Init_DetectMoreLoopClosures_Request_cluster_angle cluster_radius_min(::rtabmap_ros::srv::DetectMoreLoopClosures_Request::_cluster_radius_min_type arg)
  {
    msg_.cluster_radius_min = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_cluster_angle(msg_);
  }

private:
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Request msg_;
};

class Init_DetectMoreLoopClosures_Request_cluster_radius_max
{
public:
  Init_DetectMoreLoopClosures_Request_cluster_radius_max()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectMoreLoopClosures_Request_cluster_radius_min cluster_radius_max(::rtabmap_ros::srv::DetectMoreLoopClosures_Request::_cluster_radius_max_type arg)
  {
    msg_.cluster_radius_max = std::move(arg);
    return Init_DetectMoreLoopClosures_Request_cluster_radius_min(msg_);
  }

private:
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::DetectMoreLoopClosures_Request>()
{
  return rtabmap_ros::srv::builder::Init_DetectMoreLoopClosures_Request_cluster_radius_max();
}

}  // namespace rtabmap_ros


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_DetectMoreLoopClosures_Response_detected
{
public:
  Init_DetectMoreLoopClosures_Response_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Response detected(::rtabmap_ros::srv::DetectMoreLoopClosures_Response::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::DetectMoreLoopClosures_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::DetectMoreLoopClosures_Response>()
{
  return rtabmap_ros::srv::builder::Init_DetectMoreLoopClosures_Response_detected();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__BUILDER_HPP_
