// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__functions.h"
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cartesian_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CartesianTolerance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartesian_control_msgs::msg::CartesianTolerance(_init);
}

void CartesianTolerance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartesian_control_msgs::msg::CartesianTolerance *>(message_memory);
  typed_message->~CartesianTolerance();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CartesianTolerance_message_member_array[4] = {
  {
    "position_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs::msg::CartesianTolerance, position_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs::msg::CartesianTolerance, orientation_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "twist_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs::msg::CartesianTolerance, twist_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acceleration_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Accel>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_control_msgs::msg::CartesianTolerance, acceleration_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CartesianTolerance_message_members = {
  "cartesian_control_msgs::msg",  // message namespace
  "CartesianTolerance",  // message name
  4,  // number of fields
  sizeof(cartesian_control_msgs::msg::CartesianTolerance),
  false,  // has_any_key_member_
  CartesianTolerance_message_member_array,  // message members
  CartesianTolerance_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianTolerance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CartesianTolerance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CartesianTolerance_message_members,
  get_message_typesupport_handle_function,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_hash,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_description,
  &cartesian_control_msgs__msg__CartesianTolerance__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartesian_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_control_msgs::msg::CartesianTolerance>()
{
  return &::cartesian_control_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianTolerance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_control_msgs, msg, CartesianTolerance)() {
  return &::cartesian_control_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianTolerance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
