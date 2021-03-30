// Generated by gencpp from file tum_ardrone/SetReferenceRequest.msg
// DO NOT EDIT!


#ifndef TUM_ARDRONE_MESSAGE_SETREFERENCEREQUEST_H
#define TUM_ARDRONE_MESSAGE_SETREFERENCEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tum_ardrone
{
template <class ContainerAllocator>
struct SetReferenceRequest_
{
  typedef SetReferenceRequest_<ContainerAllocator> Type;

  SetReferenceRequest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , heading(0.0)  {
    }
  SetReferenceRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , heading(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _heading_type;
  _heading_type heading;




  typedef boost::shared_ptr< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetReferenceRequest_

typedef ::tum_ardrone::SetReferenceRequest_<std::allocator<void> > SetReferenceRequest;

typedef boost::shared_ptr< ::tum_ardrone::SetReferenceRequest > SetReferenceRequestPtr;
typedef boost::shared_ptr< ::tum_ardrone::SetReferenceRequest const> SetReferenceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tum_ardrone

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'tum_ardrone': ['/home/zack/test_ws/src/hypharos_ardrone_navigation/third_parties/tum_ardrone/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "51d24d6e3942a29c8c86b93db5eb8373";
  }

  static const char* value(const ::tum_ardrone::SetReferenceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x51d24d6e3942a29cULL;
  static const uint64_t static_value2 = 0x8c86b93db5eb8373ULL;
};

template<class ContainerAllocator>
struct DataType< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tum_ardrone/SetReferenceRequest";
  }

  static const char* value(const ::tum_ardrone::SetReferenceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 heading\n\
";
  }

  static const char* value(const ::tum_ardrone::SetReferenceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.heading);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetReferenceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tum_ardrone::SetReferenceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tum_ardrone::SetReferenceRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "heading: ";
    Printer<float>::stream(s, indent + "  ", v.heading);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUM_ARDRONE_MESSAGE_SETREFERENCEREQUEST_H
