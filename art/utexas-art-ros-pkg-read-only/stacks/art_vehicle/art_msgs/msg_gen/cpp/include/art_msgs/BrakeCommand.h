/* Auto-generated by genmsg_cpp for file /home/james/ros/art/utexas-art-ros-pkg-read-only/stacks/art_vehicle/art_msgs/msg/BrakeCommand.msg */
#ifndef ART_MSGS_MESSAGE_BRAKECOMMAND_H
#define ART_MSGS_MESSAGE_BRAKECOMMAND_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace art_msgs
{
template <class ContainerAllocator>
struct BrakeCommand_ {
  typedef BrakeCommand_<ContainerAllocator> Type;

  BrakeCommand_()
  : header()
  , request(0)
  , position(0.0)
  {
  }

  BrakeCommand_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , request(0)
  , position(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint32_t _request_type;
  uint32_t request;

  typedef float _position_type;
  float position;

  enum { Absolute = 0 };
  enum { Relative = 1 };

private:
  static const char* __s_getDataType_() { return "art_msgs/BrakeCommand"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "7d9e24314a55cc39669333e821a84049"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ART brake controller command message\n\
\n\
# $Id$\n\
\n\
Header  header\n\
\n\
# request types\n\
uint32 Absolute = 0    # set absolute position: 0.0 is off, 1.0 is fully on\n\
uint32 Relative = 1    # change relative to current setting, [-1.0 to 1.0]\n\
\n\
uint32  request                # request type\n\
float32 position               # requested position\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, request);
    ros::serialization::serialize(stream, position);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, request);
    ros::serialization::deserialize(stream, position);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(request);
    size += ros::serialization::serializationLength(position);
    return size;
  }

  typedef boost::shared_ptr< ::art_msgs::BrakeCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::art_msgs::BrakeCommand_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct BrakeCommand
typedef  ::art_msgs::BrakeCommand_<std::allocator<void> > BrakeCommand;

typedef boost::shared_ptr< ::art_msgs::BrakeCommand> BrakeCommandPtr;
typedef boost::shared_ptr< ::art_msgs::BrakeCommand const> BrakeCommandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::art_msgs::BrakeCommand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::art_msgs::BrakeCommand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace art_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::art_msgs::BrakeCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::art_msgs::BrakeCommand_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::art_msgs::BrakeCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7d9e24314a55cc39669333e821a84049";
  }

  static const char* value(const  ::art_msgs::BrakeCommand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7d9e24314a55cc39ULL;
  static const uint64_t static_value2 = 0x669333e821a84049ULL;
};

template<class ContainerAllocator>
struct DataType< ::art_msgs::BrakeCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "art_msgs/BrakeCommand";
  }

  static const char* value(const  ::art_msgs::BrakeCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::art_msgs::BrakeCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ART brake controller command message\n\
\n\
# $Id$\n\
\n\
Header  header\n\
\n\
# request types\n\
uint32 Absolute = 0    # set absolute position: 0.0 is off, 1.0 is fully on\n\
uint32 Relative = 1    # change relative to current setting, [-1.0 to 1.0]\n\
\n\
uint32  request                # request type\n\
float32 position               # requested position\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::art_msgs::BrakeCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::art_msgs::BrakeCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::art_msgs::BrakeCommand_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::art_msgs::BrakeCommand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.request);
    stream.next(m.position);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct BrakeCommand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::art_msgs::BrakeCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::art_msgs::BrakeCommand_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "request: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.request);
    s << indent << "position: ";
    Printer<float>::stream(s, indent + "  ", v.position);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ART_MSGS_MESSAGE_BRAKECOMMAND_H

