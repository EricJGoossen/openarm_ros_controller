// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_control_msgs:action/FollowCartesianTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/action/follow_cartesian_trajectory.h"


#ifndef CARTESIAN_CONTROL_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__STRUCT_H_
#define CARTESIAN_CONTROL_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory__struct.h"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.h"
// Member 'goal_time_tolerance'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_Goal
{
  cartesian_control_msgs__msg__CartesianTrajectory trajectory;
  cartesian_control_msgs__msg__CartesianTolerance path_tolerance;
  cartesian_control_msgs__msg__CartesianTolerance goal_tolerance;
  builtin_interfaces__msg__Duration goal_time_tolerance;
} cartesian_control_msgs__action__FollowCartesianTrajectory_Goal;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_Goal.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence;

// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result__SUCCESSFUL = 0l
};

/// Constant 'INVALID_GOAL'.
/**
  * e.g. illegal quaternions in poses
 */
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result__INVALID_GOAL = -1l
};

/// Constant 'INVALID_JOINTS'.
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result__INVALID_JOINTS = -2l
};

/// Constant 'OLD_HEADER_TIMESTAMP'.
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result__OLD_HEADER_TIMESTAMP = -3l
};

/// Constant 'PATH_TOLERANCE_VIOLATED'.
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result__PATH_TOLERANCE_VIOLATED = -4l
};

/// Constant 'GOAL_TOLERANCE_VIOLATED'.
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result__GOAL_TOLERANCE_VIOLATED = -5l
};

/// Constant 'INVALID_POSTURE'.
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result__INVALID_POSTURE = -6l
};

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_Result
{
  int32_t error_code;
  rosidl_runtime_c__String error_string;
} cartesian_control_msgs__action__FollowCartesianTrajectory_Result;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_Result.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'controlled_frame'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String controlled_frame;
  cartesian_control_msgs__msg__CartesianTrajectoryPoint desired;
  cartesian_control_msgs__msg__CartesianTrajectoryPoint actual;
  cartesian_control_msgs__msg__CartesianTrajectoryPoint error;
} cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cartesian_control_msgs__action__FollowCartesianTrajectory_Goal goal;
} cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence request;
  cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence response;
} cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response
{
  int8_t status;
  cartesian_control_msgs__action__FollowCartesianTrajectory_Result result;
} cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence request;
  cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence response;
} cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.h"

/// Struct defined in action/FollowCartesianTrajectory in the package cartesian_control_msgs.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback feedback;
} cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage;

// Struct for a sequence of cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage.
typedef struct cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence
{
  cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_CONTROL_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__STRUCT_H_
