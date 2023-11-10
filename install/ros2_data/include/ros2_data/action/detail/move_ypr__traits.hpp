// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_data:action/MoveYPR.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_YPR__TRAITS_HPP_
#define ROS2_DATA__ACTION__DETAIL__MOVE_YPR__TRAITS_HPP_

#include "ros2_data/action/detail/move_ypr__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_Goal>()
{
  return "ros2_data::action::MoveYPR_Goal";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_Goal>()
{
  return "ros2_data/action/MoveYPR_Goal";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_data::action::MoveYPR_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_Result>()
{
  return "ros2_data::action::MoveYPR_Result";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_Result>()
{
  return "ros2_data/action/MoveYPR_Result";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_data::action::MoveYPR_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_Feedback>()
{
  return "ros2_data::action::MoveYPR_Feedback";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_Feedback>()
{
  return "ros2_data/action/MoveYPR_Feedback";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_data::action::MoveYPR_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros2_data/action/detail/move_ypr__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_SendGoal_Request>()
{
  return "ros2_data::action::MoveYPR_SendGoal_Request";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_SendGoal_Request>()
{
  return "ros2_data/action/MoveYPR_SendGoal_Request";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros2_data::action::MoveYPR_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros2_data::action::MoveYPR_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_data::action::MoveYPR_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_SendGoal_Response>()
{
  return "ros2_data::action::MoveYPR_SendGoal_Response";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_SendGoal_Response>()
{
  return "ros2_data/action/MoveYPR_SendGoal_Response";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros2_data::action::MoveYPR_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_SendGoal>()
{
  return "ros2_data::action::MoveYPR_SendGoal";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_SendGoal>()
{
  return "ros2_data/action/MoveYPR_SendGoal";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_data::action::MoveYPR_SendGoal_Request>::value &&
    has_fixed_size<ros2_data::action::MoveYPR_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_data::action::MoveYPR_SendGoal_Request>::value &&
    has_bounded_size<ros2_data::action::MoveYPR_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros2_data::action::MoveYPR_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_data::action::MoveYPR_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_data::action::MoveYPR_SendGoal_Response>
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
inline const char * data_type<ros2_data::action::MoveYPR_GetResult_Request>()
{
  return "ros2_data::action::MoveYPR_GetResult_Request";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_GetResult_Request>()
{
  return "ros2_data/action/MoveYPR_GetResult_Request";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_data::action::MoveYPR_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_data/action/detail/move_ypr__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_GetResult_Response>()
{
  return "ros2_data::action::MoveYPR_GetResult_Response";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_GetResult_Response>()
{
  return "ros2_data/action/MoveYPR_GetResult_Response";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros2_data::action::MoveYPR_Result>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros2_data::action::MoveYPR_Result>::value> {};

template<>
struct is_message<ros2_data::action::MoveYPR_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_GetResult>()
{
  return "ros2_data::action::MoveYPR_GetResult";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_GetResult>()
{
  return "ros2_data/action/MoveYPR_GetResult";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_data::action::MoveYPR_GetResult_Request>::value &&
    has_fixed_size<ros2_data::action::MoveYPR_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_data::action::MoveYPR_GetResult_Request>::value &&
    has_bounded_size<ros2_data::action::MoveYPR_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros2_data::action::MoveYPR_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_data::action::MoveYPR_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_data::action::MoveYPR_GetResult_Response>
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
// #include "ros2_data/action/detail/move_ypr__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::action::MoveYPR_FeedbackMessage>()
{
  return "ros2_data::action::MoveYPR_FeedbackMessage";
}

template<>
inline const char * name<ros2_data::action::MoveYPR_FeedbackMessage>()
{
  return "ros2_data/action/MoveYPR_FeedbackMessage";
}

template<>
struct has_fixed_size<ros2_data::action::MoveYPR_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros2_data::action::MoveYPR_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_data::action::MoveYPR_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros2_data::action::MoveYPR_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_data::action::MoveYPR_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros2_data::action::MoveYPR>
  : std::true_type
{
};

template<>
struct is_action_goal<ros2_data::action::MoveYPR_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros2_data::action::MoveYPR_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros2_data::action::MoveYPR_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_YPR__TRAITS_HPP_
