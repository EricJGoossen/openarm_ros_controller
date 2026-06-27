// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory_point.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/accel__struct.hpp"
// Member 'posture'
#include "cartesian_control_msgs/msg/detail/cartesian_posture__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectoryPoint __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianTrajectoryPoint_
{
  using Type = CartesianTrajectoryPoint_<ContainerAllocator>;

  explicit CartesianTrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_from_start(_init),
    pose(_init),
    twist(_init),
    acceleration(_init),
    jerk(_init),
    posture(_init)
  {
    (void)_init;
  }

  explicit CartesianTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_from_start(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init),
    acceleration(_alloc, _init),
    jerk(_alloc, _init),
    posture(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _time_from_start_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_from_start_type time_from_start;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _acceleration_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _jerk_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _jerk_type jerk;
  using _posture_type =
    cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator>;
  _posture_type posture;

  // setters for named parameter idiom
  Type & set__time_from_start(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_from_start = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__jerk(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->jerk = _arg;
    return *this;
  }
  Type & set__posture(
    const cartesian_control_msgs::msg::CartesianPosture_<ContainerAllocator> & _arg)
  {
    this->posture = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectoryPoint
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectoryPoint
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianTrajectoryPoint_ & other) const
  {
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    if (this->posture != other.posture) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianTrajectoryPoint_

// alias to use template instance with default allocator
using CartesianTrajectoryPoint =
  cartesian_control_msgs::msg::CartesianTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_
