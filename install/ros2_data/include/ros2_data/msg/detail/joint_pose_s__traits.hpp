// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_data:msg/JointPoseS.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__MSG__DETAIL__JOINT_POSE_S__TRAITS_HPP_
#define ROS2_DATA__MSG__DETAIL__JOINT_POSE_S__TRAITS_HPP_

#include "ros2_data/msg/detail/joint_pose_s__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::msg::JointPoseS>()
{
  return "ros2_data::msg::JointPoseS";
}

template<>
inline const char * name<ros2_data::msg::JointPoseS>()
{
  return "ros2_data/msg/JointPoseS";
}

template<>
struct has_fixed_size<ros2_data::msg::JointPoseS>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_data::msg::JointPoseS>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_data::msg::JointPoseS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_DATA__MSG__DETAIL__JOINT_POSE_S__TRAITS_HPP_
