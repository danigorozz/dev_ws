// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_data:action/MoveXYZW.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_XYZW__TRAITS_HPP_
#define ROS2_DATA__ACTION__DETAIL__MOVE_XYZW__TRAITS_HPP_

#include "ros2_data/action/detail/move_xyzw__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_Goal>()
{
  return "ros2_data::action::MoveXYZW_Goal";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_Goal>()
{
  return "ros2_data/action/MoveXYZW_Goal";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_Result>()
{
  return "ros2_data::action::MoveXYZW_Result";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_Result>()
{
  return "ros2_data/action/MoveXYZW_Result";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_Feedback>()
{
  return "ros2_data::action::MoveXYZW_Feedback";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_Feedback>()
{
  return "ros2_data/action/MoveXYZW_Feedback";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros2_data/action/detail/move_xyzw__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_SendGoal_Request>()
{
  return "ros2_data::action::MoveXYZW_SendGoal_Request";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_SendGoal_Request>()
{
  return "ros2_data/action/MoveXYZW_SendGoal_Request";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros2_data::action::MoveXYZW_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros2_data::action::MoveXYZW_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_SendGoal_Response>()
{
  return "ros2_data::action::MoveXYZW_SendGoal_Response";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_SendGoal_Response>()
{
  return "ros2_data/action/MoveXYZW_SendGoal_Response";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_SendGoal>()
{
  return "ros2_data::action::MoveXYZW_SendGoal";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_SendGoal>()
{
  return "ros2_data/action/MoveXYZW_SendGoal";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_data::action::MoveXYZW_SendGoal_Request>::value &&
    has_fixed_size<ros2_data::action::MoveXYZW_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_data::action::MoveXYZW_SendGoal_Request>::value &&
    has_bounded_size<ros2_data::action::MoveXYZW_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros2_data::action::MoveXYZW_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_data::action::MoveXYZW_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_data::action::MoveXYZW_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_GetResult_Request>()
{
  return "ros2_data::action::MoveXYZW_GetResult_Request";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_GetResult_Request>()
{
  return "ros2_data/action/MoveXYZW_GetResult_Request";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_data/action/detail/move_xyzw__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_GetResult_Response>()
{
  return "ros2_data::action::MoveXYZW_GetResult_Response";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_GetResult_Response>()
{
  return "ros2_data/action/MoveXYZW_GetResult_Response";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros2_data::action::MoveXYZW_Result>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros2_data::action::MoveXYZW_Result>::value> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_GetResult>()
{
  return "ros2_data::action::MoveXYZW_GetResult";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_GetResult>()
{
  return "ros2_data/action/MoveXYZW_GetResult";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_data::action::MoveXYZW_GetResult_Request>::value &&
    has_fixed_size<ros2_data::action::MoveXYZW_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_data::action::MoveXYZW_GetResult_Request>::value &&
    has_bounded_size<ros2_data::action::MoveXYZW_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros2_data::action::MoveXYZW_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_data::action::MoveXYZW_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_data::action::MoveXYZW_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros2_data/action/detail/move_xyzw__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveXYZW_FeedbackMessage>()
{
  return "ros2_data::action::MoveXYZW_FeedbackMessage";
}

template<>
inline const char * name<ros2_data::action::MoveXYZW_FeedbackMessage>()
{
  return "ros2_data/action/MoveXYZW_FeedbackMessage";
}

template<>
struct has_fixed_size<ros2_data::action::MoveXYZW_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros2_data::action::MoveXYZW_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveXYZW_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros2_data::action::MoveXYZW_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_data::action::MoveXYZW_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros2_data::action::MoveXYZW>
  : std::true_type
{
};

template<>
struct is_action_goal<ros2_data::action::MoveXYZW_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros2_data::action::MoveXYZW_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros2_data::action::MoveXYZW_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_XYZW__TRAITS_HPP_
