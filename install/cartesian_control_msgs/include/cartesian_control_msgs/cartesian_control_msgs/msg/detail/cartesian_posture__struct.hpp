// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_posture.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__STRUCT_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__msg__CartesianPosture __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__msg__CartesianPosture __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianPosture_
{
  using Type = CartesianPosture_<ContainerAllocator>;

  explicit CartesianPosture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CartesianPosture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _posture_joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _posture_joint_names_type posture_joint_names;
  using _posture_joint_values_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _posture_joint_values_type posture_joint_values;

  // setters for named parameter idiom
  Type & set__posture_joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->posture_joint_names = _arg;
    return *this;
  }
  Type & set__posture_joint_values(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->posture_joint_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__msg__CartesianPosture
    std::shared_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__msg__CartesianPosture
    std::shared_ptr<cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianPosture_ & other) const
  {
    if (this->posture_joint_names != other.posture_joint_names) {
      return false;
    }
    if (this->posture_joint_values != other.posture_joint_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianPosture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianPosture_

// alias to use template instance with default allocator
using CartesianPosture =
  cartesian_control_msgs::msg::CartesianPosture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_POSTURE__STRUCT_HPP_
