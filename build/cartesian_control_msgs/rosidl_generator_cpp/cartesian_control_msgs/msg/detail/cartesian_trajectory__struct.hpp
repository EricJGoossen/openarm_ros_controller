// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_control_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/msg/cartesian_trajectory.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_HPP_
#define CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'points'
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectory __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianTrajectory_
{
  using Type = CartesianTrajectory_<ContainerAllocator>;

  explicit CartesianTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controlled_frame = "";
    }
  }

  explicit CartesianTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    controlled_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controlled_frame = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _points_type =
    std::vector<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>;
  _points_type points;
  using _controlled_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _controlled_frame_type controlled_frame;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__controlled_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->controlled_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectory
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__msg__CartesianTrajectory
    std::shared_ptr<cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->controlled_frame != other.controlled_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianTrajectory_

// alias to use template instance with default allocator
using CartesianTrajectory =
  cartesian_control_msgs::msg::CartesianTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_HPP_
