
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub trajectory: super::msg::CartesianTrajectory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path_tolerance: super::msg::CartesianTolerance,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_tolerance: super::msg::CartesianTolerance,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_time_tolerance: builtin_interfaces::msg::Duration,

}



impl Default for FollowCartesianTrajectory_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_Goal {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        trajectory: super::msg::CartesianTrajectory::into_rmw_message(std::borrow::Cow::Owned(msg.trajectory)).into_owned(),
        path_tolerance: super::msg::CartesianTolerance::into_rmw_message(std::borrow::Cow::Owned(msg.path_tolerance)).into_owned(),
        goal_tolerance: super::msg::CartesianTolerance::into_rmw_message(std::borrow::Cow::Owned(msg.goal_tolerance)).into_owned(),
        goal_time_tolerance: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.goal_time_tolerance)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        trajectory: super::msg::CartesianTrajectory::into_rmw_message(std::borrow::Cow::Borrowed(&msg.trajectory)).into_owned(),
        path_tolerance: super::msg::CartesianTolerance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path_tolerance)).into_owned(),
        goal_tolerance: super::msg::CartesianTolerance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_tolerance)).into_owned(),
        goal_time_tolerance: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_time_tolerance)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      trajectory: super::msg::CartesianTrajectory::from_rmw_message(msg.trajectory),
      path_tolerance: super::msg::CartesianTolerance::from_rmw_message(msg.path_tolerance),
      goal_tolerance: super::msg::CartesianTolerance::from_rmw_message(msg.goal_tolerance),
      goal_time_tolerance: builtin_interfaces::msg::Duration::from_rmw_message(msg.goal_time_tolerance),
    }
  }
}


// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_string: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_Result::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_Result {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error_code: msg.error_code,
        error_string: msg.error_string.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error_code: msg.error_code,
        error_string: msg.error_string.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error_code: msg.error_code,
      error_string: msg.error_string.to_string(),
    }
  }
}


// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controlled_frame: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub desired: super::msg::CartesianTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual: super::msg::CartesianTrajectoryPoint,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: super::msg::CartesianTrajectoryPoint,

}



impl Default for FollowCartesianTrajectory_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_Feedback {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        controlled_frame: msg.controlled_frame.as_str().into(),
        desired: super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.desired)).into_owned(),
        actual: super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.actual)).into_owned(),
        error: super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.error)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        controlled_frame: msg.controlled_frame.as_str().into(),
        desired: super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.desired)).into_owned(),
        actual: super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.actual)).into_owned(),
        error: super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.error)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      controlled_frame: msg.controlled_frame.to_string(),
      desired: super::msg::CartesianTrajectoryPoint::from_rmw_message(msg.desired),
      actual: super::msg::CartesianTrajectoryPoint::from_rmw_message(msg.actual),
      error: super::msg::CartesianTrajectoryPoint::from_rmw_message(msg.error),
    }
  }
}


// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::FollowCartesianTrajectory_Feedback,

}



impl Default for FollowCartesianTrajectory_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_FeedbackMessage {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::FollowCartesianTrajectory_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::FollowCartesianTrajectory_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::FollowCartesianTrajectory_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::FollowCartesianTrajectory_Goal,

}



impl Default for FollowCartesianTrajectory_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_SendGoal_Request {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::FollowCartesianTrajectory_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::FollowCartesianTrajectory_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::FollowCartesianTrajectory_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for FollowCartesianTrajectory_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_SendGoal_Response {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for FollowCartesianTrajectory_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_GetResult_Request {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FollowCartesianTrajectory_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::FollowCartesianTrajectory_Result,

}



impl Default for FollowCartesianTrajectory_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::FollowCartesianTrajectory_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for FollowCartesianTrajectory_GetResult_Response {
  type RmwMsg = super::action::rmw::FollowCartesianTrajectory_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::FollowCartesianTrajectory_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::FollowCartesianTrajectory_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::FollowCartesianTrajectory_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "cartesian_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory() -> *const std::ffi::c_void;
}

// Corresponds to cartesian_control_msgs__action__FollowCartesianTrajectory
#[allow(missing_docs, non_camel_case_types)]
pub struct FollowCartesianTrajectory;

impl rosidl_runtime_rs::Action for FollowCartesianTrajectory {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = FollowCartesianTrajectory_Goal;

  /// The result message defined in the action definition.
  type Result = FollowCartesianTrajectory_Result;

  /// The feedback message defined in the action definition.
  type Feedback = FollowCartesianTrajectory_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::FollowCartesianTrajectory_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::FollowCartesianTrajectory_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::FollowCartesianTrajectory_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__cartesian_control_msgs__action__FollowCartesianTrajectory() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::FollowCartesianTrajectory_Goal,
  ) -> super::action::rmw::FollowCartesianTrajectory_SendGoal_Request {
   super::action::rmw::FollowCartesianTrajectory_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::FollowCartesianTrajectory_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::FollowCartesianTrajectory_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::FollowCartesianTrajectory_SendGoal_Response {
   super::action::rmw::FollowCartesianTrajectory_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::FollowCartesianTrajectory_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::FollowCartesianTrajectory_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::FollowCartesianTrajectory_Feedback,
  ) -> super::action::rmw::FollowCartesianTrajectory_FeedbackMessage {
    let mut message = super::action::rmw::FollowCartesianTrajectory_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::FollowCartesianTrajectory_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::FollowCartesianTrajectory_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::FollowCartesianTrajectory_GetResult_Request {
   super::action::rmw::FollowCartesianTrajectory_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::FollowCartesianTrajectory_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::FollowCartesianTrajectory_Result,
  ) -> super::action::rmw::FollowCartesianTrajectory_GetResult_Response {
   super::action::rmw::FollowCartesianTrajectory_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::FollowCartesianTrajectory_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::FollowCartesianTrajectory_Result,
  ) {
    (response.status, response.result)
  }
}


