// Generated by gencpp from file ardrone_autonomy/RecordEnableRequest.msg
// DO NOT EDIT!


#ifndef ARDRONE_AUTONOMY_MESSAGE_RECORDENABLEREQUEST_H
#define ARDRONE_AUTONOMY_MESSAGE_RECORDENABLEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ardrone_autonomy
{
template <class ContainerAllocator>
struct RecordEnableRequest_
{
  typedef RecordEnableRequest_<ContainerAllocator> Type;

  RecordEnableRequest_()
    : enable(false)  {
    }
  RecordEnableRequest_(const ContainerAllocator& _alloc)
    : enable(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enable_type;
  _enable_type enable;




  typedef boost::shared_ptr< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RecordEnableRequest_

typedef ::ardrone_autonomy::RecordEnableRequest_<std::allocator<void> > RecordEnableRequest;

typedef boost::shared_ptr< ::ardrone_autonomy::RecordEnableRequest > RecordEnableRequestPtr;
typedef boost::shared_ptr< ::ardrone_autonomy::RecordEnableRequest const> RecordEnableRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ardrone_autonomy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ardrone_autonomy': ['/home/zack/test_ws/src/hypharos_ardrone_navigation/third_parties/ardrone_autonomy/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1211af706069c9ULL;
  static const uint64_t static_value2 = 0x94c06e00eb59ac9eULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ardrone_autonomy/RecordEnableRequest";
  }

  static const char* value(const ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool enable\n\
";
  }

  static const char* value(const ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecordEnableRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ardrone_autonomy::RecordEnableRequest_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARDRONE_AUTONOMY_MESSAGE_RECORDENABLEREQUEST_H
