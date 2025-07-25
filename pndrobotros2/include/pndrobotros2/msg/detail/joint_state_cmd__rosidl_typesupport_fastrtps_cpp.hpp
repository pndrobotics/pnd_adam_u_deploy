// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pndrobotros2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pndrobotros2/msg/detail/joint_state_cmd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pndrobotros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pndrobotros2
cdr_serialize(
  const pndrobotros2::msg::JointStateCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pndrobotros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pndrobotros2::msg::JointStateCmd & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pndrobotros2
get_serialized_size(
  const pndrobotros2::msg::JointStateCmd & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pndrobotros2
max_serialized_size_JointStateCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pndrobotros2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pndrobotros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pndrobotros2, msg, JointStateCmd)();

#ifdef __cplusplus
}
#endif

#endif  // PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
