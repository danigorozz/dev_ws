// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_data:action/MoveXYZ.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
#include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_data/action/detail/move_xyz__functions.h"
#include "ros2_data/action/detail/move_xyz__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_Goal__init(message_memory);
}

void MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_member_array[4] = {
  {
    "positionx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_Goal, positionx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "positiony",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_Goal, positiony),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "positionz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_Goal, positionz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_Goal, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_Goal",  // message name
  4,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_Goal),
  MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_member_array,  // message members
  MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_type_support_handle = {
  0,
  &MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_Goal)() {
  if (!MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_Goal__rosidl_typesupport_introspection_c__MoveXYZ_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_Result__init(message_memory);
}

void MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_Result",  // message name
  1,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_Result),
  MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_member_array,  // message members
  MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_type_support_handle = {
  0,
  &MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_Result)() {
  if (!MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_Result__rosidl_typesupport_introspection_c__MoveXYZ_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_Feedback__init(message_memory);
}

void MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_Feedback",  // message name
  1,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_Feedback),
  MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_member_array,  // message members
  MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_type_support_handle = {
  0,
  &MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_Feedback)() {
  if (!MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_Feedback__rosidl_typesupport_introspection_c__MoveXYZ_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ros2_data/action/move_xyz.h"
// Member `goal`
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_SendGoal_Request__init(message_memory);
}

void MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(ros2_data__action__MoveXYZ_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_SendGoal_Request),
  MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_member_array,  // message members
  MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_SendGoal_Request)() {
  MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_Goal)();
  if (!MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_SendGoal_Response__init(message_memory);
}

void MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(ros2_data__action__MoveXYZ_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_SendGoal_Response),
  MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_member_array,  // message members
  MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_SendGoal_Response)() {
  MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_service_members = {
  "ros2_data__action",  // service namespace
  "MoveXYZ_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_service_type_support_handle = {
  0,
  &ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_SendGoal)() {
  if (!ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_service_type_support_handle.typesupport_identifier) {
    ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_SendGoal_Response)()->data;
  }

  return &ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.h"


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

void MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_GetResult_Request__init(message_memory);
}

void MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_GetResult_Request),
  MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_member_array,  // message members
  MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_type_support_handle = {
  0,
  &MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_GetResult_Request)() {
  MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_GetResult_Request__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ros2_data/action/move_xyz.h"
// Member `result`
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_GetResult_Response__init(message_memory);
}

void MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(ros2_data__action__MoveXYZ_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_GetResult_Response),
  MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_member_array,  // message members
  MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_type_support_handle = {
  0,
  &MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_GetResult_Response)() {
  MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_Result)();
  if (!MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_GetResult_Response__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_service_members = {
  "ros2_data__action",  // service namespace
  "MoveXYZ_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_service_type_support_handle = {
  0,
  &ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_GetResult)() {
  if (!ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_service_type_support_handle.typesupport_identifier) {
    ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_GetResult_Response)()->data;
  }

  return &ros2_data__action__detail__move_xyz__rosidl_typesupport_introspection_c__MoveXYZ_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__functions.h"
// already included above
// #include "ros2_data/action/detail/move_xyz__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ros2_data/action/move_xyz.h"
// Member `feedback`
// already included above
// #include "ros2_data/action/detail/move_xyz__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__action__MoveXYZ_FeedbackMessage__init(message_memory);
}

void MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_fini_function(void * message_memory)
{
  ros2_data__action__MoveXYZ_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__action__MoveXYZ_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(ros2_data__action__MoveXYZ_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_members = {
  "ros2_data__action",  // message namespace
  "MoveXYZ_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ros2_data__action__MoveXYZ_FeedbackMessage),
  MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_member_array,  // message members
  MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_FeedbackMessage)() {
  MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveXYZ_Feedback)();
  if (!MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveXYZ_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXYZ_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
