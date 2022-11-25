// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_ros:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__GPS__BUILDER_HPP_
#define RTABMAP_ROS__MSG__DETAIL__GPS__BUILDER_HPP_

#include "rtabmap_ros/msg/detail/gps__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtabmap_ros
{

namespace msg
{

namespace builder
{

class Init_GPS_bearing
{
public:
  explicit Init_GPS_bearing(::rtabmap_ros::msg::GPS & msg)
  : msg_(msg)
  {}
  ::rtabmap_ros::msg::GPS bearing(::rtabmap_ros::msg::GPS::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_ros::msg::GPS msg_;
};

class Init_GPS_error
{
public:
  explicit Init_GPS_error(::rtabmap_ros::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_bearing error(::rtabmap_ros::msg::GPS::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_GPS_bearing(msg_);
  }

private:
  ::rtabmap_ros::msg::GPS msg_;
};

class Init_GPS_altitude
{
public:
  explicit Init_GPS_altitude(::rtabmap_ros::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_error altitude(::rtabmap_ros::msg::GPS::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_GPS_error(msg_);
  }

private:
  ::rtabmap_ros::msg::GPS msg_;
};

class Init_GPS_latitude
{
public:
  explicit Init_GPS_latitude(::rtabmap_ros::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_altitude latitude(::rtabmap_ros::msg::GPS::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GPS_altitude(msg_);
  }

private:
  ::rtabmap_ros::msg::GPS msg_;
};

class Init_GPS_longitude
{
public:
  explicit Init_GPS_longitude(::rtabmap_ros::msg::GPS & msg)
  : msg_(msg)
  {}
  Init_GPS_latitude longitude(::rtabmap_ros::msg::GPS::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GPS_latitude(msg_);
  }

private:
  ::rtabmap_ros::msg::GPS msg_;
};

class Init_GPS_stamp
{
public:
  Init_GPS_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPS_longitude stamp(::rtabmap_ros::msg::GPS::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GPS_longitude(msg_);
  }

private:
  ::rtabmap_ros::msg::GPS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_ros::msg::GPS>()
{
  return rtabmap_ros::msg::builder::Init_GPS_stamp();
}

}  // namespace rtabmap_ros

#endif  // RTABMAP_ROS__MSG__DETAIL__GPS__BUILDER_HPP_
