// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from cartesian_control_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

#include "cartesian_control_msgs/msg/detail/cartesian_tolerance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_cartesian_control_msgs
const rosidl_type_hash_t *
cartesian_control_msgs__msg__CartesianTolerance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0x0e, 0x52, 0x8e, 0xf0, 0xb9, 0xa7, 0xaf,
      0xfe, 0xd4, 0xd2, 0x2b, 0x84, 0xea, 0x8c, 0x55,
      0xec, 0xf2, 0xda, 0xbc, 0x39, 0xe5, 0x11, 0x3a,
      0x32, 0xdc, 0xcc, 0x5a, 0xf4, 0x50, 0x56, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "geometry_msgs/msg/detail/accel__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Accel__EXPECTED_HASH = {1, {
    0xdc, 0x44, 0x82, 0x43, 0xde, 0xd9, 0xb1, 0xfc,
    0xbc, 0xca, 0x24, 0xab, 0xa0, 0xc2, 0x2f, 0x01,
    0x3d, 0xae, 0x06, 0xc3, 0x54, 0xba, 0x2d, 0x84,
    0x95, 0x71, 0xc0, 0xa2, 0xa3, 0xf5, 0x7c, 0xa0,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char cartesian_control_msgs__msg__CartesianTolerance__TYPE_NAME[] = "cartesian_control_msgs/msg/CartesianTolerance";
static char geometry_msgs__msg__Accel__TYPE_NAME[] = "geometry_msgs/msg/Accel";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__position_error[] = "position_error";
static char cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__orientation_error[] = "orientation_error";
static char cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__twist_error[] = "twist_error";
static char cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__acceleration_error[] = "acceleration_error";

static rosidl_runtime_c__type_description__Field cartesian_control_msgs__msg__CartesianTolerance__FIELDS[] = {
  {
    {cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__position_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__orientation_error, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__twist_error, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {cartesian_control_msgs__msg__CartesianTolerance__FIELD_NAME__acceleration_error, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Accel__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription cartesian_control_msgs__msg__CartesianTolerance__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Accel__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
cartesian_control_msgs__msg__CartesianTolerance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cartesian_control_msgs__msg__CartesianTolerance__TYPE_NAME, 45, 45},
      {cartesian_control_msgs__msg__CartesianTolerance__FIELDS, 4, 4},
    },
    {cartesian_control_msgs__msg__CartesianTolerance__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Accel__EXPECTED_HASH, geometry_msgs__msg__Accel__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Accel__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Vector3 position_error\n"
  "geometry_msgs/Vector3 orientation_error\n"
  "geometry_msgs/Twist twist_error\n"
  "geometry_msgs/Accel acceleration_error";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
cartesian_control_msgs__msg__CartesianTolerance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cartesian_control_msgs__msg__CartesianTolerance__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cartesian_control_msgs__msg__CartesianTolerance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cartesian_control_msgs__msg__CartesianTolerance__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Accel__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
