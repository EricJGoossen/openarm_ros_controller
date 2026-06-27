#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to cartesian_control_msgs__msg__CartesianPosture
/// Posture joint names may reflect a subset of all available joints (empty posture definitions are
/// also possible). The length of posture_joint_names and posture_joint_values have to be equal.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianPosture {

    // This member is not documented.
    #[allow(missing_docs)]
    pub posture_joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posture_joint_values: Vec<f64>,

}



impl Default for CartesianPosture {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CartesianPosture::default())
  }
}

impl rosidl_runtime_rs::Message for CartesianPosture {
  type RmwMsg = super::msg::rmw::CartesianPosture;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        posture_joint_names: msg.posture_joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        posture_joint_values: msg.posture_joint_values.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        posture_joint_names: msg.posture_joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        posture_joint_values: msg.posture_joint_values.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      posture_joint_names: msg.posture_joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      posture_joint_values: msg.posture_joint_values
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to cartesian_control_msgs__msg__CartesianTolerance

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianTolerance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position_error: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation_error: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist_error: geometry_msgs::msg::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration_error: geometry_msgs::msg::Accel,

}



impl Default for CartesianTolerance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CartesianTolerance::default())
  }
}

impl rosidl_runtime_rs::Message for CartesianTolerance {
  type RmwMsg = super::msg::rmw::CartesianTolerance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position_error: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.position_error)).into_owned(),
        orientation_error: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.orientation_error)).into_owned(),
        twist_error: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist_error)).into_owned(),
        acceleration_error: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Owned(msg.acceleration_error)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position_error: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position_error)).into_owned(),
        orientation_error: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation_error)).into_owned(),
        twist_error: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist_error)).into_owned(),
        acceleration_error: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.acceleration_error)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position_error: geometry_msgs::msg::Vector3::from_rmw_message(msg.position_error),
      orientation_error: geometry_msgs::msg::Vector3::from_rmw_message(msg.orientation_error),
      twist_error: geometry_msgs::msg::Twist::from_rmw_message(msg.twist_error),
      acceleration_error: geometry_msgs::msg::Accel::from_rmw_message(msg.acceleration_error),
    }
  }
}


// Corresponds to cartesian_control_msgs__msg__CartesianTrajectory
/// header.frame_id is the frame in which all data from CartesianTrajectoryPoint[] is given

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianTrajectory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub points: Vec<super::msg::CartesianTrajectoryPoint>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controlled_frame: std::string::String,

}



impl Default for CartesianTrajectory {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CartesianTrajectory::default())
  }
}

impl rosidl_runtime_rs::Message for CartesianTrajectory {
  type RmwMsg = super::msg::rmw::CartesianTrajectory;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        points: msg.points
          .into_iter()
          .map(|elem| super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        controlled_frame: msg.controlled_frame.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        points: msg.points
          .iter()
          .map(|elem| super::msg::CartesianTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        controlled_frame: msg.controlled_frame.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      points: msg.points
          .into_iter()
          .map(super::msg::CartesianTrajectoryPoint::from_rmw_message)
          .collect(),
      controlled_frame: msg.controlled_frame.to_string(),
    }
  }
}


// Corresponds to cartesian_control_msgs__msg__CartesianTrajectoryPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CartesianTrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time_from_start: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: geometry_msgs::msg::Accel,

    /// A more suitable datatype would be good, see https://github.com/ros/common_msgs/issues/137
    pub jerk: geometry_msgs::msg::Accel,


    // This member is not documented.
    #[allow(missing_docs)]
    pub posture: super::msg::CartesianPosture,

}



impl Default for CartesianTrajectoryPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CartesianTrajectoryPoint::default())
  }
}

impl rosidl_runtime_rs::Message for CartesianTrajectoryPoint {
  type RmwMsg = super::msg::rmw::CartesianTrajectoryPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time_from_start: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.time_from_start)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
        acceleration: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Owned(msg.acceleration)).into_owned(),
        jerk: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Owned(msg.jerk)).into_owned(),
        posture: super::msg::CartesianPosture::into_rmw_message(std::borrow::Cow::Owned(msg.posture)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time_from_start: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_from_start)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
        acceleration: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.acceleration)).into_owned(),
        jerk: geometry_msgs::msg::Accel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.jerk)).into_owned(),
        posture: super::msg::CartesianPosture::into_rmw_message(std::borrow::Cow::Borrowed(&msg.posture)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time_from_start: builtin_interfaces::msg::Duration::from_rmw_message(msg.time_from_start),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
      acceleration: geometry_msgs::msg::Accel::from_rmw_message(msg.acceleration),
      jerk: geometry_msgs::msg::Accel::from_rmw_message(msg.jerk),
      posture: super::msg::CartesianPosture::from_rmw_message(msg.posture),
    }
  }
}


