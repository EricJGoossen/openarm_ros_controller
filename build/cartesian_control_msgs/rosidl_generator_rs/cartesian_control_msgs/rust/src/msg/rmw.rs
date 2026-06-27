#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianPosture() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__msg__CartesianPosture__init(msg: *mut CartesianPosture) -> bool;
    fn cartesian_control_msgs__msg__CartesianPosture__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CartesianPosture>, size: usize) -> bool;
    fn cartesian_control_msgs__msg__CartesianPosture__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CartesianPosture>);
    fn cartesian_control_msgs__msg__CartesianPosture__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CartesianPosture>, out_seq: *mut rosidl_runtime_rs::Sequence<CartesianPosture>) -> bool;
}

// Corresponds to cartesian_control_msgs__msg__CartesianPosture
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Posture joint names may reflect a subset of all available joints (empty posture definitions are
/// also possible). The length of posture_joint_names and posture_joint_values have to be equal.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianPosture {

    // This member is not documented.
    #[allow(missing_docs)]
    pub posture_joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posture_joint_values: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for CartesianPosture {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__msg__CartesianPosture__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__msg__CartesianPosture__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CartesianPosture {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianPosture__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianPosture__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianPosture__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CartesianPosture {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CartesianPosture where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/msg/CartesianPosture";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianPosture() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianTolerance() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__msg__CartesianTolerance__init(msg: *mut CartesianTolerance) -> bool;
    fn cartesian_control_msgs__msg__CartesianTolerance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CartesianTolerance>, size: usize) -> bool;
    fn cartesian_control_msgs__msg__CartesianTolerance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CartesianTolerance>);
    fn cartesian_control_msgs__msg__CartesianTolerance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CartesianTolerance>, out_seq: *mut rosidl_runtime_rs::Sequence<CartesianTolerance>) -> bool;
}

// Corresponds to cartesian_control_msgs__msg__CartesianTolerance
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianTolerance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position_error: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation_error: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist_error: geometry_msgs::msg::rmw::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration_error: geometry_msgs::msg::rmw::Accel,

}



impl Default for CartesianTolerance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__msg__CartesianTolerance__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__msg__CartesianTolerance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CartesianTolerance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTolerance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTolerance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTolerance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CartesianTolerance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CartesianTolerance where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/msg/CartesianTolerance";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianTolerance() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianTrajectory() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__msg__CartesianTrajectory__init(msg: *mut CartesianTrajectory) -> bool;
    fn cartesian_control_msgs__msg__CartesianTrajectory__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CartesianTrajectory>, size: usize) -> bool;
    fn cartesian_control_msgs__msg__CartesianTrajectory__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CartesianTrajectory>);
    fn cartesian_control_msgs__msg__CartesianTrajectory__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CartesianTrajectory>, out_seq: *mut rosidl_runtime_rs::Sequence<CartesianTrajectory>) -> bool;
}

// Corresponds to cartesian_control_msgs__msg__CartesianTrajectory
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// header.frame_id is the frame in which all data from CartesianTrajectoryPoint[] is given

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianTrajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub points: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CartesianTrajectoryPoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controlled_frame: rosidl_runtime_rs::String,

}



impl Default for CartesianTrajectory {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__msg__CartesianTrajectory__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__msg__CartesianTrajectory__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CartesianTrajectory {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTrajectory__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTrajectory__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTrajectory__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CartesianTrajectory {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CartesianTrajectory where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/msg/CartesianTrajectory";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianTrajectory() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianTrajectoryPoint() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__msg__CartesianTrajectoryPoint__init(msg: *mut CartesianTrajectoryPoint) -> bool;
    fn cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CartesianTrajectoryPoint>, size: usize) -> bool;
    fn cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CartesianTrajectoryPoint>);
    fn cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CartesianTrajectoryPoint>, out_seq: *mut rosidl_runtime_rs::Sequence<CartesianTrajectoryPoint>) -> bool;
}

// Corresponds to cartesian_control_msgs__msg__CartesianTrajectoryPoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianTrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time_from_start: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: geometry_msgs::msg::rmw::Accel,

    /// A more suitable datatype would be good, see https://github.com/ros/common_msgs/issues/137
    pub jerk: geometry_msgs::msg::rmw::Accel,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posture: super::super::msg::rmw::CartesianPosture,

}



impl Default for CartesianTrajectoryPoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__msg__CartesianTrajectoryPoint__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__msg__CartesianTrajectoryPoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CartesianTrajectoryPoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__msg__CartesianTrajectoryPoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CartesianTrajectoryPoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CartesianTrajectoryPoint where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/msg/CartesianTrajectoryPoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__msg__CartesianTrajectoryPoint() }
  }
}


