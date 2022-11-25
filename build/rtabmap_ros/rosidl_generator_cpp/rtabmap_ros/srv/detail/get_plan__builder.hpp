// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_
#define RTABMAP_ROS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_

#include "rtabmap_ros/srv/detail/get_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_GetPlan_Request_tolerance
{
public:
  explicit Init_GetPlan_Request_tolerance(::rtabmap_ros::srv::GetPlan_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::srv::GetPlan_Request tolerance(::rtabmap_ros::srv::GetPlan_Request::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::GetPlan_Request msg_;
};

class Init_GetPlan_Request_goal
{
public:
  explicit Init_GetPlan_Request_goal(::rtabmap_ros::srv::GetPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GetPlan_Request_tolerance goal(::rtabmap_ros::srv::GetPlan_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_GetPlan_Request_tolerance(msg_);
  }

private:
  ::rtabmap_ros::srv::GetPlan_Request msg_;
};

class Init_GetPlan_Request_goal_node
{
public:
  Init_GetPlan_Request_goal_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_Request_goal goal_node(::rtabmap_ros::srv::GetPlan_Request::_goal_node_type arg)
  {
    msg_.goal_node = std::move(arg);
    return Init_GetPlan_Request_goal(msg_);
  }

private:
  ::rtabmap_ros::srv::GetPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::GetPlan_Request>()
{
  return rtabmap_ros::srv::builder::Init_GetPlan_Request_goal_node();
}

}  // namespace rtabmap_ros


namespace rtabmap_ros
{

namespace srv
{

namespace builder
{

class Init_GetPlan_Response_plan
{
public:
  Init_GetPlan_Response_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rtabmap_ros::srv::GetPlan_Response plan(::rtabmap_ros::srv::GetPlan_Response::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::srv::GetPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::srv::GetPlan_Response>()
{
  return rtabmap_ros::srv::builder::Init_GetPlan_Response_plan();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_
