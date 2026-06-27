
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_Goal() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__init(msg: *mut FollowCartesianTrajectory_Goal) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Goal>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Goal>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Goal>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub trajectory: super::super::msg::rmw::CartesianTrajectory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path_tolerance: super::super::msg::rmw::CartesianTolerance,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_tolerance: super::super::msg::rmw::CartesianTolerance,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_time_tolerance: builtin_interfaces::msg::rmw::Duration,

}



impl Default for FollowCartesianTrajectory_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_Goal() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_Result() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Result__init(msg: *mut FollowCartesianTrajectory_Result) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Result>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Result>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Result>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_string: rosidl_runtime_rs::String,

}

impl FollowCartesianTrajectory_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCESSFUL: i32 = 0;

    /// e.g. illegal quaternions in poses
    pub const INVALID_GOAL: i32 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_JOINTS: i32 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OLD_HEADER_TIMESTAMP: i32 = -3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PATH_TOLERANCE_VIOLATED: i32 = -4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GOAL_TOLERANCE_VIOLATED: i32 = -5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_POSTURE: i32 = -6;

}


impl Default for FollowCartesianTrajectory_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_Result__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_Result where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_Result() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__init(msg: *mut FollowCartesianTrajectory_Feedback) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Feedback>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Feedback>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_Feedback>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controlled_frame: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub desired: super::super::msg::rmw::CartesianTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual: super::super::msg::rmw::CartesianTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: super::super::msg::rmw::CartesianTrajectoryPoint,

}



impl Default for FollowCartesianTrajectory_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__init(msg: *mut FollowCartesianTrajectory_FeedbackMessage) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_FeedbackMessage>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_FeedbackMessage>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_FeedbackMessage>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::FollowCartesianTrajectory_Feedback,

}



impl Default for FollowCartesianTrajectory_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage() }
  }
}




#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__init(msg: *mut FollowCartesianTrajectory_SendGoal_Request) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Request>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Request>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Request>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::FollowCartesianTrajectory_Goal,

}



impl Default for FollowCartesianTrajectory_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__init(msg: *mut FollowCartesianTrajectory_SendGoal_Response) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Response>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Response>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_SendGoal_Response>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for FollowCartesianTrajectory_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__init(msg: *mut FollowCartesianTrajectory_GetResult_Request) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Request>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Request>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Request>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for FollowCartesianTrajectory_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request() }
  }
}


#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "cartesian_control_msgs__rosidl_generator_c")]
extern "C" {
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__init(msg: *mut FollowCartesianTrajectory_GetResult_Response) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Response>, size: usize) -> bool;
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Response>);
    fn cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<FollowCartesianTrajectory_GetResult_Response>) -> bool;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::FollowCartesianTrajectory_Result,

}



impl Default for FollowCartesianTrajectory_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FollowCartesianTrajectory_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FollowCartesianTrajectory_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "cartesian_control_msgs/action/FollowCartesianTrajectory_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response() }
  }
}






#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowCartesianTrajectory_SendGoal;

impl rosidl_runtime_rs::Service for FollowCartesianTrajectory_SendGoal {
    type Request = FollowCartesianTrajectory_SendGoal_Request;
    type Response = FollowCartesianTrajectory_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal() }
    }
}




#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowCartesianTrajectory_GetResult;

impl rosidl_runtime_rs::Service for FollowCartesianTrajectory_GetResult {
    type Request = FollowCartesianTrajectory_GetResult_Request;
    type Response = FollowCartesianTrajectory_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult() }
    }
}


