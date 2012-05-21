/* Auto-generated by genmsg_cpp for file /home/james/ros/art/utexas-art-ros-pkg-read-only/stacks/art_vehicle/art_msgs/msg/ArtLanes.msg */
#ifndef ART_MSGS_MESSAGE_ARTLANES_H
#define ART_MSGS_MESSAGE_ARTLANES_H
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
#include "art_msgs/ArtQuadrilateral.h"

namespace art_msgs
{
template <class ContainerAllocator>
struct ArtLanes_ {
  typedef ArtLanes_<ContainerAllocator> Type;

  ArtLanes_()
  : header()
  , polygons()
  {
  }

  ArtLanes_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , polygons(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> >::other >  _polygons_type;
  std::vector< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> >::other >  polygons;


  ROS_DEPRECATED uint32_t get_polygons_size() const { return (uint32_t)polygons.size(); }
  ROS_DEPRECATED void set_polygons_size(uint32_t size) { polygons.resize((size_t)size); }
  ROS_DEPRECATED void get_polygons_vec(std::vector< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> >::other > & vec) const { vec = this->polygons; }
  ROS_DEPRECATED void set_polygons_vec(const std::vector< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> >::other > & vec) { this->polygons = vec; }
private:
  static const char* __s_getDataType_() { return "art_msgs/ArtLanes"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "384de56fb723b4265b396fcf86b17531"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ART lanes message\n\
# $Id$\n\
\n\
Header header\n\
ArtQuadrilateral[] polygons\n\
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
================================================================================\n\
MSG: art_msgs/ArtQuadrilateral\n\
# ART quadrilateral polygon\n\
# $Id$\n\
\n\
# Each of these polygons is a quadrilateral.  The four vertex points\n\
# are ordered relative to the heading of the lane containing it.\n\
\n\
geometry_msgs/Polygon poly\n\
int32 bottom_left  = 0\n\
int32 top_left     = 1\n\
int32 top_right    = 2\n\
int32 bottom_right = 3\n\
int32 quad_size = 4\n\
\n\
geometry_msgs/Point midpoint # Middle of the polygon\n\
\n\
float32 heading         # average of right and left boundary headings\n\
float32 length          # length of the polygon\n\
int32 poly_id           # unique MapLanes ID\n\
\n\
bool is_stop            # this poly has a stop waypoint\n\
bool is_transition      # not a lane polygon, no waypoint\n\
bool contains_way       # both start_way and end_way are the contained waypoint\n\
\n\
MapID start_way\n\
MapID end_way\n\
\n\
LaneMarking left_boundary\n\
LaneMarking right_boundary\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Polygon\n\
#A specification of a polygon where the first and last points are assumed to be connected\n\
geometry_msgs/Point32[] points\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: art_msgs/MapID\n\
# Road map identifier for segments, lanes and way-points.\n\
# $Id$\n\
\n\
uint16 NULL_ID = 65535\n\
\n\
uint16 seg      # segment ID\n\
uint16 lane     # lane ID\n\
uint16 pt       # way-point ID\n\
\n\
================================================================================\n\
MSG: art_msgs/LaneMarking\n\
# Route Network Definition File lane marking\n\
# $Id$\n\
\n\
int16 DOUBLE_YELLOW = 0\n\
int16 SOLID_YELLOW = 1\n\
int16 SOLID_WHITE = 2\n\
int16 BROKEN_WHITE = 3\n\
int16 UNDEFINED = 4\n\
\n\
int16 lane_marking\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, polygons);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, polygons);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(polygons);
    return size;
  }

  typedef boost::shared_ptr< ::art_msgs::ArtLanes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::art_msgs::ArtLanes_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ArtLanes
typedef  ::art_msgs::ArtLanes_<std::allocator<void> > ArtLanes;

typedef boost::shared_ptr< ::art_msgs::ArtLanes> ArtLanesPtr;
typedef boost::shared_ptr< ::art_msgs::ArtLanes const> ArtLanesConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::art_msgs::ArtLanes_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::art_msgs::ArtLanes_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace art_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::art_msgs::ArtLanes_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::art_msgs::ArtLanes_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::art_msgs::ArtLanes_<ContainerAllocator> > {
  static const char* value() 
  {
    return "384de56fb723b4265b396fcf86b17531";
  }

  static const char* value(const  ::art_msgs::ArtLanes_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x384de56fb723b426ULL;
  static const uint64_t static_value2 = 0x5b396fcf86b17531ULL;
};

template<class ContainerAllocator>
struct DataType< ::art_msgs::ArtLanes_<ContainerAllocator> > {
  static const char* value() 
  {
    return "art_msgs/ArtLanes";
  }

  static const char* value(const  ::art_msgs::ArtLanes_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::art_msgs::ArtLanes_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ART lanes message\n\
# $Id$\n\
\n\
Header header\n\
ArtQuadrilateral[] polygons\n\
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
================================================================================\n\
MSG: art_msgs/ArtQuadrilateral\n\
# ART quadrilateral polygon\n\
# $Id$\n\
\n\
# Each of these polygons is a quadrilateral.  The four vertex points\n\
# are ordered relative to the heading of the lane containing it.\n\
\n\
geometry_msgs/Polygon poly\n\
int32 bottom_left  = 0\n\
int32 top_left     = 1\n\
int32 top_right    = 2\n\
int32 bottom_right = 3\n\
int32 quad_size = 4\n\
\n\
geometry_msgs/Point midpoint # Middle of the polygon\n\
\n\
float32 heading         # average of right and left boundary headings\n\
float32 length          # length of the polygon\n\
int32 poly_id           # unique MapLanes ID\n\
\n\
bool is_stop            # this poly has a stop waypoint\n\
bool is_transition      # not a lane polygon, no waypoint\n\
bool contains_way       # both start_way and end_way are the contained waypoint\n\
\n\
MapID start_way\n\
MapID end_way\n\
\n\
LaneMarking left_boundary\n\
LaneMarking right_boundary\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Polygon\n\
#A specification of a polygon where the first and last points are assumed to be connected\n\
geometry_msgs/Point32[] points\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: art_msgs/MapID\n\
# Road map identifier for segments, lanes and way-points.\n\
# $Id$\n\
\n\
uint16 NULL_ID = 65535\n\
\n\
uint16 seg      # segment ID\n\
uint16 lane     # lane ID\n\
uint16 pt       # way-point ID\n\
\n\
================================================================================\n\
MSG: art_msgs/LaneMarking\n\
# Route Network Definition File lane marking\n\
# $Id$\n\
\n\
int16 DOUBLE_YELLOW = 0\n\
int16 SOLID_YELLOW = 1\n\
int16 SOLID_WHITE = 2\n\
int16 BROKEN_WHITE = 3\n\
int16 UNDEFINED = 4\n\
\n\
int16 lane_marking\n\
\n\
";
  }

  static const char* value(const  ::art_msgs::ArtLanes_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::art_msgs::ArtLanes_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::art_msgs::ArtLanes_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::art_msgs::ArtLanes_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.polygons);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ArtLanes_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::art_msgs::ArtLanes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::art_msgs::ArtLanes_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "polygons[]" << std::endl;
    for (size_t i = 0; i < v.polygons.size(); ++i)
    {
      s << indent << "  polygons[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::art_msgs::ArtQuadrilateral_<ContainerAllocator> >::stream(s, indent + "    ", v.polygons[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ART_MSGS_MESSAGE_ARTLANES_H
