// Generated by gencpp from file find_object_2d/DetectionInfo.msg
// DO NOT EDIT!


#ifndef FIND_OBJECT_2D_MESSAGE_DETECTIONINFO_H
#define FIND_OBJECT_2D_MESSAGE_DETECTIONINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Float32MultiArray.h>

namespace find_object_2d
{
template <class ContainerAllocator>
struct DetectionInfo_
{
  typedef DetectionInfo_<ContainerAllocator> Type;

  DetectionInfo_()
    : header()
    , ids()
    , widths()
    , heights()
    , filePaths()
    , inliers()
    , outliers()
    , homographies()  {
    }
  DetectionInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ids(_alloc)
    , widths(_alloc)
    , heights(_alloc)
    , filePaths(_alloc)
    , inliers(_alloc)
    , outliers(_alloc)
    , homographies(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::std_msgs::Int32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Int32_<ContainerAllocator> >::other >  _ids_type;
  _ids_type ids;

   typedef std::vector< ::std_msgs::Int32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Int32_<ContainerAllocator> >::other >  _widths_type;
  _widths_type widths;

   typedef std::vector< ::std_msgs::Int32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Int32_<ContainerAllocator> >::other >  _heights_type;
  _heights_type heights;

   typedef std::vector< ::std_msgs::String_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::String_<ContainerAllocator> >::other >  _filePaths_type;
  _filePaths_type filePaths;

   typedef std::vector< ::std_msgs::Int32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Int32_<ContainerAllocator> >::other >  _inliers_type;
  _inliers_type inliers;

   typedef std::vector< ::std_msgs::Int32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Int32_<ContainerAllocator> >::other >  _outliers_type;
  _outliers_type outliers;

   typedef std::vector< ::std_msgs::Float32MultiArray_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Float32MultiArray_<ContainerAllocator> >::other >  _homographies_type;
  _homographies_type homographies;




  typedef boost::shared_ptr< ::find_object_2d::DetectionInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::find_object_2d::DetectionInfo_<ContainerAllocator> const> ConstPtr;

}; // struct DetectionInfo_

typedef ::find_object_2d::DetectionInfo_<std::allocator<void> > DetectionInfo;

typedef boost::shared_ptr< ::find_object_2d::DetectionInfo > DetectionInfoPtr;
typedef boost::shared_ptr< ::find_object_2d::DetectionInfo const> DetectionInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::find_object_2d::DetectionInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::find_object_2d::DetectionInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace find_object_2d

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'find_object_2d': ['/home/zack/test_ws/src/find-object/msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::find_object_2d::DetectionInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::find_object_2d::DetectionInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::find_object_2d::DetectionInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c344e94bd36ff0758e87d95453ebd0bd";
  }

  static const char* value(const ::find_object_2d::DetectionInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc344e94bd36ff075ULL;
  static const uint64_t static_value2 = 0x8e87d95453ebd0bdULL;
};

template<class ContainerAllocator>
struct DataType< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "find_object_2d/DetectionInfo";
  }

  static const char* value(const ::find_object_2d::DetectionInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
Header header\n\
\n\
# All arrays should have the same size\n\
std_msgs/Int32[] ids\n\
std_msgs/Int32[] widths\n\
std_msgs/Int32[] heights\n\
std_msgs/String[] filePaths\n\
std_msgs/Int32[] inliers\n\
std_msgs/Int32[] outliers\n\
# 3x3 homography matrix: [h11, h12, h13, h21, h22, h23, h31, h32, h33] (h31 = dx and h32 = dy, see QTransform)\n\
std_msgs/Float32MultiArray[] homographies\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: std_msgs/Int32\n\
int32 data\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
\n\
================================================================================\n\
MSG: std_msgs/Float32MultiArray\n\
# Please look at the MultiArrayLayout message definition for\n\
# documentation on all multiarrays.\n\
\n\
MultiArrayLayout  layout        # specification of data layout\n\
float32[]         data          # array of data\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayLayout\n\
# The multiarray declares a generic multi-dimensional array of a\n\
# particular data type.  Dimensions are ordered from outer most\n\
# to inner most.\n\
\n\
MultiArrayDimension[] dim # Array of dimension properties\n\
uint32 data_offset        # padding elements at front of data\n\
\n\
# Accessors should ALWAYS be written in terms of dimension stride\n\
# and specified outer-most dimension first.\n\
# \n\
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]\n\
#\n\
# A standard, 3-channel 640x480 image with interleaved color channels\n\
# would be specified as:\n\
#\n\
# dim[0].label  = \"height\"\n\
# dim[0].size   = 480\n\
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)\n\
# dim[1].label  = \"width\"\n\
# dim[1].size   = 640\n\
# dim[1].stride = 3*640 = 1920\n\
# dim[2].label  = \"channel\"\n\
# dim[2].size   = 3\n\
# dim[2].stride = 3\n\
#\n\
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayDimension\n\
string label   # label of given dimension\n\
uint32 size    # size of given dimension (in type units)\n\
uint32 stride  # stride of given dimension\n\
";
  }

  static const char* value(const ::find_object_2d::DetectionInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ids);
      stream.next(m.widths);
      stream.next(m.heights);
      stream.next(m.filePaths);
      stream.next(m.inliers);
      stream.next(m.outliers);
      stream.next(m.homographies);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectionInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::find_object_2d::DetectionInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::find_object_2d::DetectionInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ids[]" << std::endl;
    for (size_t i = 0; i < v.ids.size(); ++i)
    {
      s << indent << "  ids[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "    ", v.ids[i]);
    }
    s << indent << "widths[]" << std::endl;
    for (size_t i = 0; i < v.widths.size(); ++i)
    {
      s << indent << "  widths[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "    ", v.widths[i]);
    }
    s << indent << "heights[]" << std::endl;
    for (size_t i = 0; i < v.heights.size(); ++i)
    {
      s << indent << "  heights[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "    ", v.heights[i]);
    }
    s << indent << "filePaths[]" << std::endl;
    for (size_t i = 0; i < v.filePaths.size(); ++i)
    {
      s << indent << "  filePaths[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "    ", v.filePaths[i]);
    }
    s << indent << "inliers[]" << std::endl;
    for (size_t i = 0; i < v.inliers.size(); ++i)
    {
      s << indent << "  inliers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "    ", v.inliers[i]);
    }
    s << indent << "outliers[]" << std::endl;
    for (size_t i = 0; i < v.outliers.size(); ++i)
    {
      s << indent << "  outliers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "    ", v.outliers[i]);
    }
    s << indent << "homographies[]" << std::endl;
    for (size_t i = 0; i < v.homographies.size(); ++i)
    {
      s << indent << "  homographies[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Float32MultiArray_<ContainerAllocator> >::stream(s, indent + "    ", v.homographies[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FIND_OBJECT_2D_MESSAGE_DETECTIONINFO_H
