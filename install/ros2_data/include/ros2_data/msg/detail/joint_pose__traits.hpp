// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_data:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_
#define ROS2_DATA__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_

#include "ros2_data/msg/detail/joint_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::msg::JointPose>()
{
  return "ros2_data::msg::JointPose";
}

template<>
inline const char * name<ros2_data::msg::JointPose>()
{
  return "ros2_data/msg/JointPose";
}

template<>
struct has_fixed_size<ros2_data::msg::JointPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_data::msg::JointPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_data::msg::JointPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_DATA__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_
