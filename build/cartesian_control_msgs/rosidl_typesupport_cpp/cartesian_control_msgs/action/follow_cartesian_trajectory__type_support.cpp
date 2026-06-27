// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from cartesian_control_msgs:action/FollowCartesianTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
#include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_Goal_type_support_ids_t;

static const _FollowCartesianTrajectory_Goal_type_support_ids_t _FollowCartesianTrajectory_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_Goal_type_support_symbol_names_t _FollowCartesianTrajectory_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Goal)),
  }
};

typedef struct _FollowCartesianTrajectory_Goal_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_Goal_type_support_data_t;

static _FollowCartesianTrajectory_Goal_type_support_data_t _FollowCartesianTrajectory_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_Goal_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Goal)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_Result_type_support_ids_t;

static const _FollowCartesianTrajectory_Result_type_support_ids_t _FollowCartesianTrajectory_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_Result_type_support_symbol_names_t _FollowCartesianTrajectory_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Result)),
  }
};

typedef struct _FollowCartesianTrajectory_Result_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_Result_type_support_data_t;

static _FollowCartesianTrajectory_Result_type_support_data_t _FollowCartesianTrajectory_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_Result_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_Result_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_Result_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Result__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Result__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Result>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Result)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_Feedback_type_support_ids_t;

static const _FollowCartesianTrajectory_Feedback_type_support_ids_t _FollowCartesianTrajectory_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_Feedback_type_support_symbol_names_t _FollowCartesianTrajectory_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Feedback)),
  }
};

typedef struct _FollowCartesianTrajectory_Feedback_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_Feedback_type_support_data_t;

static _FollowCartesianTrajectory_Feedback_type_support_data_t _FollowCartesianTrajectory_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_Feedback_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_Feedback)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_SendGoal_Request_type_support_ids_t;

static const _FollowCartesianTrajectory_SendGoal_Request_type_support_ids_t _FollowCartesianTrajectory_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_SendGoal_Request_type_support_symbol_names_t _FollowCartesianTrajectory_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Request)),
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_SendGoal_Request_type_support_data_t;

static _FollowCartesianTrajectory_SendGoal_Request_type_support_data_t _FollowCartesianTrajectory_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_SendGoal_Request_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Request)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_SendGoal_Response_type_support_ids_t;

static const _FollowCartesianTrajectory_SendGoal_Response_type_support_ids_t _FollowCartesianTrajectory_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_SendGoal_Response_type_support_symbol_names_t _FollowCartesianTrajectory_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Response)),
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_SendGoal_Response_type_support_data_t;

static _FollowCartesianTrajectory_SendGoal_Response_type_support_data_t _FollowCartesianTrajectory_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_SendGoal_Response_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Response)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_SendGoal_Event_type_support_ids_t;

static const _FollowCartesianTrajectory_SendGoal_Event_type_support_ids_t _FollowCartesianTrajectory_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_SendGoal_Event_type_support_symbol_names_t _FollowCartesianTrajectory_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Event)),
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_SendGoal_Event_type_support_data_t;

static _FollowCartesianTrajectory_SendGoal_Event_type_support_data_t _FollowCartesianTrajectory_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_SendGoal_Event_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal_Event)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_SendGoal_type_support_ids_t;

static const _FollowCartesianTrajectory_SendGoal_type_support_ids_t _FollowCartesianTrajectory_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_SendGoal_type_support_symbol_names_t _FollowCartesianTrajectory_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal)),
  }
};

typedef struct _FollowCartesianTrajectory_SendGoal_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_SendGoal_type_support_data_t;

static _FollowCartesianTrajectory_SendGoal_type_support_data_t _FollowCartesianTrajectory_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_SendGoal_service_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowCartesianTrajectory_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal>,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_GetResult_Request_type_support_ids_t;

static const _FollowCartesianTrajectory_GetResult_Request_type_support_ids_t _FollowCartesianTrajectory_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_GetResult_Request_type_support_symbol_names_t _FollowCartesianTrajectory_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Request)),
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_Request_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_GetResult_Request_type_support_data_t;

static _FollowCartesianTrajectory_GetResult_Request_type_support_data_t _FollowCartesianTrajectory_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_GetResult_Request_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Request)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_GetResult_Response_type_support_ids_t;

static const _FollowCartesianTrajectory_GetResult_Response_type_support_ids_t _FollowCartesianTrajectory_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_GetResult_Response_type_support_symbol_names_t _FollowCartesianTrajectory_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Response)),
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_Response_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_GetResult_Response_type_support_data_t;

static _FollowCartesianTrajectory_GetResult_Response_type_support_data_t _FollowCartesianTrajectory_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_GetResult_Response_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Response)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_GetResult_Event_type_support_ids_t;

static const _FollowCartesianTrajectory_GetResult_Event_type_support_ids_t _FollowCartesianTrajectory_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_GetResult_Event_type_support_symbol_names_t _FollowCartesianTrajectory_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Event)),
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_Event_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_GetResult_Event_type_support_data_t;

static _FollowCartesianTrajectory_GetResult_Event_type_support_data_t _FollowCartesianTrajectory_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_GetResult_Event_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult_Event)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_GetResult_type_support_ids_t;

static const _FollowCartesianTrajectory_GetResult_type_support_ids_t _FollowCartesianTrajectory_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_GetResult_type_support_symbol_names_t _FollowCartesianTrajectory_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult)),
  }
};

typedef struct _FollowCartesianTrajectory_GetResult_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_GetResult_type_support_data_t;

static _FollowCartesianTrajectory_GetResult_type_support_data_t _FollowCartesianTrajectory_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_GetResult_service_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowCartesianTrajectory_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult>,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__functions.h"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowCartesianTrajectory_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowCartesianTrajectory_FeedbackMessage_type_support_ids_t;

static const _FollowCartesianTrajectory_FeedbackMessage_type_support_ids_t _FollowCartesianTrajectory_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowCartesianTrajectory_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowCartesianTrajectory_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowCartesianTrajectory_FeedbackMessage_type_support_symbol_names_t _FollowCartesianTrajectory_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_FeedbackMessage)),
  }
};

typedef struct _FollowCartesianTrajectory_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _FollowCartesianTrajectory_FeedbackMessage_type_support_data_t;

static _FollowCartesianTrajectory_FeedbackMessage_type_support_data_t _FollowCartesianTrajectory_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowCartesianTrajectory_FeedbackMessage_message_typesupport_map = {
  2,
  "cartesian_control_msgs",
  &_FollowCartesianTrajectory_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_FollowCartesianTrajectory_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_FollowCartesianTrajectory_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowCartesianTrajectory_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowCartesianTrajectory_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage>()
{
  return &::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory_FeedbackMessage)() {
  return get_message_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace cartesian_control_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t FollowCartesianTrajectory_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &cartesian_control_msgs__action__FollowCartesianTrajectory__get_type_hash,
  &cartesian_control_msgs__action__FollowCartesianTrajectory__get_type_description,
  &cartesian_control_msgs__action__FollowCartesianTrajectory__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace cartesian_control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory>()
{
  using ::cartesian_control_msgs::action::rosidl_typesupport_cpp::FollowCartesianTrajectory_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  FollowCartesianTrajectory_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::cartesian_control_msgs::action::FollowCartesianTrajectory::Impl::SendGoalService>();
  FollowCartesianTrajectory_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::cartesian_control_msgs::action::FollowCartesianTrajectory::Impl::GetResultService>();
  FollowCartesianTrajectory_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::cartesian_control_msgs::action::FollowCartesianTrajectory::Impl::CancelGoalService>();
  FollowCartesianTrajectory_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::cartesian_control_msgs::action::FollowCartesianTrajectory::Impl::FeedbackMessage>();
  FollowCartesianTrajectory_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::cartesian_control_msgs::action::FollowCartesianTrajectory::Impl::GoalStatusMessage>();
  return &FollowCartesianTrajectory_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, cartesian_control_msgs, action, FollowCartesianTrajectory)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<cartesian_control_msgs::action::FollowCartesianTrajectory>();
}

#ifdef __cplusplus
}
#endif
