// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_control_msgs:action/FollowCartesianTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartesian_control_msgs/action/follow_cartesian_trajectory.hpp"


#ifndef CARTESIAN_CONTROL_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__STRUCT_HPP_
#define CARTESIAN_CONTROL_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory__struct.hpp"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__struct.hpp"
// Member 'goal_time_tolerance'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Goal __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Goal __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_Goal_
{
  using Type = FollowCartesianTrajectory_Goal_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init),
    path_tolerance(_init),
    goal_tolerance(_init),
    goal_time_tolerance(_init)
  {
    (void)_init;
  }

  explicit FollowCartesianTrajectory_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init),
    path_tolerance(_alloc, _init),
    goal_tolerance(_alloc, _init),
    goal_time_tolerance(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_type =
    cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _path_tolerance_type =
    cartesian_control_msgs::msg::CartesianTolerance_<ContainerAllocator>;
  _path_tolerance_type path_tolerance;
  using _goal_tolerance_type =
    cartesian_control_msgs::msg::CartesianTolerance_<ContainerAllocator>;
  _goal_tolerance_type goal_tolerance;
  using _goal_time_tolerance_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _goal_time_tolerance_type goal_time_tolerance;

  // setters for named parameter idiom
  Type & set__trajectory(
    const cartesian_control_msgs::msg::CartesianTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__path_tolerance(
    const cartesian_control_msgs::msg::CartesianTolerance_<ContainerAllocator> & _arg)
  {
    this->path_tolerance = _arg;
    return *this;
  }
  Type & set__goal_tolerance(
    const cartesian_control_msgs::msg::CartesianTolerance_<ContainerAllocator> & _arg)
  {
    this->goal_tolerance = _arg;
    return *this;
  }
  Type & set__goal_time_tolerance(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->goal_time_tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Goal
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Goal
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_Goal_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->path_tolerance != other.path_tolerance) {
      return false;
    }
    if (this->goal_tolerance != other.goal_tolerance) {
      return false;
    }
    if (this->goal_time_tolerance != other.goal_time_tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_Goal_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_Goal =
  cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs


#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Result __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Result __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_Result_
{
  using Type = FollowCartesianTrajectory_Result_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_string = "";
    }
  }

  explicit FollowCartesianTrajectory_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_string = "";
    }
  }

  // field types and members
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _error_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_string_type error_string;

  // setters for named parameter idiom
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_string = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SUCCESSFUL =
    0;
  static constexpr int32_t INVALID_GOAL =
    -1;
  static constexpr int32_t INVALID_JOINTS =
    -2;
  static constexpr int32_t OLD_HEADER_TIMESTAMP =
    -3;
  static constexpr int32_t PATH_TOLERANCE_VIOLATED =
    -4;
  static constexpr int32_t GOAL_TOLERANCE_VIOLATED =
    -5;
  static constexpr int32_t INVALID_POSTURE =
    -6;

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Result
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Result
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_string != other.error_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_Result_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_Result =
  cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t FollowCartesianTrajectory_Result_<ContainerAllocator>::SUCCESSFUL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t FollowCartesianTrajectory_Result_<ContainerAllocator>::INVALID_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t FollowCartesianTrajectory_Result_<ContainerAllocator>::INVALID_JOINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t FollowCartesianTrajectory_Result_<ContainerAllocator>::OLD_HEADER_TIMESTAMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t FollowCartesianTrajectory_Result_<ContainerAllocator>::PATH_TOLERANCE_VIOLATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t FollowCartesianTrajectory_Result_<ContainerAllocator>::GOAL_TOLERANCE_VIOLATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t FollowCartesianTrajectory_Result_<ContainerAllocator>::INVALID_POSTURE;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "cartesian_control_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_Feedback_
{
  using Type = FollowCartesianTrajectory_Feedback_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    desired(_init),
    actual(_init),
    error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controlled_frame = "";
    }
  }

  explicit FollowCartesianTrajectory_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    controlled_frame(_alloc),
    desired(_alloc, _init),
    actual(_alloc, _init),
    error(_alloc, _init)
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
  using _controlled_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _controlled_frame_type controlled_frame;
  using _desired_type =
    cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>;
  _desired_type desired;
  using _actual_type =
    cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>;
  _actual_type actual;
  using _error_type =
    cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__controlled_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->controlled_frame = _arg;
    return *this;
  }
  Type & set__desired(
    const cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->desired = _arg;
    return *this;
  }
  Type & set__actual(
    const cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->actual = _arg;
    return *this;
  }
  Type & set__error(
    const cartesian_control_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_Feedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->controlled_frame != other.controlled_frame) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    if (this->actual != other.actual) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_Feedback_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_Feedback =
  cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_SendGoal_Request_
{
  using Type = FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FollowCartesianTrajectory_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const cartesian_control_msgs::action::FollowCartesianTrajectory_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_SendGoal_Request_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_SendGoal_Request =
  cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_SendGoal_Response_
{
  using Type = FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FollowCartesianTrajectory_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_SendGoal_Response_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_SendGoal_Response =
  cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_SendGoal_Event_
{
  using Type = FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit FollowCartesianTrajectory_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Event
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_SendGoal_Event_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_SendGoal_Event =
  cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs

namespace cartesian_control_msgs
{

namespace action
{

struct FollowCartesianTrajectory_SendGoal
{
  using Request = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Request;
  using Response = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Response;
  using Event = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal_Event;
};

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_GetResult_Request_
{
  using Type = FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FollowCartesianTrajectory_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_GetResult_Request_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_GetResult_Request =
  cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_GetResult_Response_
{
  using Type = FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FollowCartesianTrajectory_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const cartesian_control_msgs::action::FollowCartesianTrajectory_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_GetResult_Response_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_GetResult_Response =
  cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_GetResult_Event_
{
  using Type = FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit FollowCartesianTrajectory_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Event
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_GetResult_Event_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_GetResult_Event =
  cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs

namespace cartesian_control_msgs
{

namespace action
{

struct FollowCartesianTrajectory_GetResult
{
  using Request = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Request;
  using Response = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Response;
  using Event = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult_Event;
};

}  // namespace action

}  // namespace cartesian_control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "cartesian_control_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage __declspec(deprecated)
#endif

namespace cartesian_control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowCartesianTrajectory_FeedbackMessage_
{
  using Type = FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator>;

  explicit FollowCartesianTrajectory_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FollowCartesianTrajectory_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage
    std::shared_ptr<cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowCartesianTrajectory_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowCartesianTrajectory_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowCartesianTrajectory_FeedbackMessage_

// alias to use template instance with default allocator
using FollowCartesianTrajectory_FeedbackMessage =
  cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_control_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace cartesian_control_msgs
{

namespace action
{

struct FollowCartesianTrajectory
{
  /// The goal message defined in the action definition.
  using Goal = cartesian_control_msgs::action::FollowCartesianTrajectory_Goal;
  /// The result message defined in the action definition.
  using Result = cartesian_control_msgs::action::FollowCartesianTrajectory_Result;
  /// The feedback message defined in the action definition.
  using Feedback = cartesian_control_msgs::action::FollowCartesianTrajectory_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = cartesian_control_msgs::action::FollowCartesianTrajectory_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = cartesian_control_msgs::action::FollowCartesianTrajectory_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = cartesian_control_msgs::action::FollowCartesianTrajectory_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FollowCartesianTrajectory FollowCartesianTrajectory;

}  // namespace action

}  // namespace cartesian_control_msgs

#endif  // CARTESIAN_CONTROL_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__STRUCT_HPP_
