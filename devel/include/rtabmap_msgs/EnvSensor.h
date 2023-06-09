// Generated by gencpp from file rtabmap_msgs/EnvSensor.msg
// DO NOT EDIT!


#ifndef RTABMAP_MSGS_MESSAGE_ENVSENSOR_H
#define RTABMAP_MSGS_MESSAGE_ENVSENSOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace rtabmap_msgs
{
template <class ContainerAllocator>
struct EnvSensor_
{
  typedef EnvSensor_<ContainerAllocator> Type;

  EnvSensor_()
    : header()
    , type(0)
    , value(0.0)  {
    }
  EnvSensor_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(0)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _type_type;
  _type_type type;

   typedef double _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> const> ConstPtr;

}; // struct EnvSensor_

typedef ::rtabmap_msgs::EnvSensor_<std::allocator<void> > EnvSensor;

typedef boost::shared_ptr< ::rtabmap_msgs::EnvSensor > EnvSensorPtr;
typedef boost::shared_ptr< ::rtabmap_msgs::EnvSensor const> EnvSensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_msgs::EnvSensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rtabmap_msgs::EnvSensor_<ContainerAllocator1> & lhs, const ::rtabmap_msgs::EnvSensor_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.type == rhs.type &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rtabmap_msgs::EnvSensor_<ContainerAllocator1> & lhs, const ::rtabmap_msgs::EnvSensor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rtabmap_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9df4dc52b9b74f3a81eaae9eecf9c0e0";
  }

  static const char* value(const ::rtabmap_msgs::EnvSensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9df4dc52b9b74f3aULL;
  static const uint64_t static_value2 = 0x81eaae9eecf9c0e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_msgs/EnvSensor";
  }

  static const char* value(const ::rtabmap_msgs::EnvSensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"Header header\n"
"\n"
"# EnvSensor\n"
"int32 type\n"
"float64 value\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::rtabmap_msgs::EnvSensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnvSensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_msgs::EnvSensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rtabmap_msgs::EnvSensor_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "value: ";
    Printer<double>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_MSGS_MESSAGE_ENVSENSOR_H
