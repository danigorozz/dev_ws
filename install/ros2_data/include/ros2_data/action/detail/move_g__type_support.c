// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_data:action/MoveG.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
#include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_data/action/detail/move_g__functions.h"
#include "ros2_data/action/detail/move_g__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_Goal__init(message_memory);
}

void MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_member_array[1] = {
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_Goal, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_Goal",  // message name
  1,  // number of fields
  sizeof(ros2_data__action__MoveG_Goal),
  MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_member_array,  // message members
  MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_type_support_handle = {
  0,
  &MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_Goal)() {
  if (!MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_type_support_handle.typesupport_identifier) {
    MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_Goal__rosidl_typesupport_introspection_c__MoveG_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_g__functions.h"
// already included above
// #include "ros2_data/action/detail/move_g__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_Result__init(message_memory);
}

void MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_Result",  // message name
  1,  // number of fields
  sizeof(ros2_data__action__MoveG_Result),
  MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_member_array,  // message members
  MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_type_support_handle = {
  0,
  &MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_Result)() {
  if (!MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_type_support_handle.typesupport_identifier) {
    MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_Result__rosidl_typesupport_introspection_c__MoveG_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_g__functions.h"
// already included above
// #include "ros2_data/action/detail/move_g__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_Feedback__init(message_memory);
}

void MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_Feedback",  // message name
  1,  // number of fields
  sizeof(ros2_data__action__MoveG_Feedback),
  MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_member_array,  // message members
  MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_type_support_handle = {
  0,
  &MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_Feedback)() {
  if (!MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_Feedback__rosidl_typesupport_introspection_c__MoveG_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_g__functions.h"
// already included above
// #include "ros2_data/action/detail/move_g__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ros2_data/action/move_g.h"
// Member `goal`
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_SendGoal_Request__init(message_memory);
}

void MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveG_SendGoal_Request),
  MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_member_array,  // message members
  MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_SendGoal_Request)() {
  MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_Goal)();
  if (!MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_SendGoal_Request__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_g__functions.h"
// already included above
// #include "ros2_data/action/detail/move_g__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_SendGoal_Response__init(message_memory);
}

void MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveG_SendGoal_Response),
  MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_member_array,  // message members
  MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_SendGoal_Response)() {
  MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_SendGoal_Response__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_service_members = {
  "ros2_data__action",  // service namespace
  "MoveG_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_service_type_support_handle = {
  0,
  &ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_SendGoal)() {
  if (!ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_service_type_support_handle.typesupport_identifier) {
    ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_SendGoal_Response)()->data;
  }

  return &ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_g__functions.h"
// already included above
// #include "ros2_data/action/detail/move_g__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_GetResult_Request__init(message_memory);
}

void MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ros2_data__action__MoveG_GetResult_Request),
  MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_member_array,  // message members
  MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_type_support_handle = {
  0,
  &MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_GetResult_Request)() {
  MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_GetResult_Request__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_g__functions.h"
// already included above
// #include "ros2_data/action/detail/move_g__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ros2_data/action/move_g.h"
// Member `result`
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_GetResult_Response__init(message_memory);
}

void MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveG_GetResult_Response),
  MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_member_array,  // message members
  MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_type_support_handle = {
  0,
  &MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_GetResult_Response)() {
  MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_Result)();
  if (!MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_GetResult_Response__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_service_members = {
  "ros2_data__action",  // service namespace
  "MoveG_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_service_type_support_handle = {
  0,
  &ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_GetResult)() {
  if (!ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_service_type_support_handle.typesupport_identifier) {
    ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_GetResult_Response)()->data;
  }

  return &ros2_data__action__detail__move_g__rosidl_typesupport_introspection_c__MoveG_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_g__functions.h"
// already included above
// #include "ros2_data/action/detail/move_g__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ros2_data/action/move_g.h"
// Member `feedback`
// already included above
// #include "ros2_data/action/detail/move_g__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveG_FeedbackMessage__init(message_memory);
}

void MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_fini_function(void * message_memory)
{
  ros2_data__action__MoveG_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveG_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_members = {
  "ros2_data__action",  // message namespace
  "MoveG_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveG_FeedbackMessage),
  MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_member_array,  // message members
  MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_FeedbackMessage)() {
  MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveG_Feedback)();
  if (!MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveG_FeedbackMessage__rosidl_typesupport_introspection_c__MoveG_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
