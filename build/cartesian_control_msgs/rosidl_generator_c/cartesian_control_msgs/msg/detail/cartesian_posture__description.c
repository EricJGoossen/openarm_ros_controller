// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from cartesian_control_msgs:msg/CartesianPosture.idl
// generated code does not contain a copyright notice

#include "cartesian_control_msgs/msg/detail/cartesian_posture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_cartesian_control_msgs
const rosidl_type_hash_t *
cartesian_control_msgs__msg__CartesianPosture__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x6f, 0xec, 0x27, 0x0a, 0x78, 0x6a, 0xe6,
      0x82, 0x40, 0x44, 0xd1, 0x2e, 0xfc, 0xd6, 0xda,
      0xa5, 0xb5, 0x7e, 0x3b, 0xa8, 0xab, 0x69, 0x63,
      0xc5, 0xc7, 0x41, 0xa2, 0xf0, 0x3c, 0x7e, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char cartesian_control_msgs__msg__CartesianPosture__TYPE_NAME[] = "cartesian_control_msgs/msg/CartesianPosture";

// Define type names, field names, and default values
static char cartesian_control_msgs__msg__CartesianPosture__FIELD_NAME__posture_joint_names[] = "posture_joint_names";
static char cartesian_control_msgs__msg__CartesianPosture__FIELD_NAME__posture_joint_values[] = "posture_joint_values";

static rosidl_runtime_c__type_description__Field cartesian_control_msgs__msg__CartesianPosture__FIELDS[] = {
  {
    {cartesian_control_msgs__msg__CartesianPosture__FIELD_NAME__posture_joint_names, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {cartesian_control_msgs__msg__CartesianPosture__FIELD_NAME__posture_joint_values, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
cartesian_control_msgs__msg__CartesianPosture__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cartesian_control_msgs__msg__CartesianPosture__TYPE_NAME, 43, 43},
      {cartesian_control_msgs__msg__CartesianPosture__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Posture joint names may reflect a subset of all available joints (empty posture definitions are\n"
  "# also possible). The length of posture_joint_names and posture_joint_values have to be equal.\n"
  "\n"
  "string[] posture_joint_names\n"
  "float64[] posture_joint_values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
cartesian_control_msgs__msg__CartesianPosture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cartesian_control_msgs__msg__CartesianPosture__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 254, 254},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cartesian_control_msgs__msg__CartesianPosture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cartesian_control_msgs__msg__CartesianPosture__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
