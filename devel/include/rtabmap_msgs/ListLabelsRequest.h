// Generated by gencpp from file rtabmap_msgs/ListLabelsRequest.msg
// DO NOT EDIT!


#ifndef RTABMAP_MSGS_MESSAGE_LISTLABELSREQUEST_H
#define RTABMAP_MSGS_MESSAGE_LISTLABELSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rtabmap_msgs
{
template <class ContainerAllocator>
struct ListLabelsRequest_
{
  typedef ListLabelsRequest_<ContainerAllocator> Type;

  ListLabelsRequest_()
    {
    }
  ListLabelsRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ListLabelsRequest_

typedef ::rtabmap_msgs::ListLabelsRequest_<std::allocator<void> > ListLabelsRequest;

typedef boost::shared_ptr< ::rtabmap_msgs::ListLabelsRequest > ListLabelsRequestPtr;
typedef boost::shared_ptr< ::rtabmap_msgs::ListLabelsRequest const> ListLabelsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace rtabmap_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_msgs/ListLabelsRequest";
  }

  static const char* value(const ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#request\n"
;
  }

  static const char* value(const ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ListLabelsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rtabmap_msgs::ListLabelsRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_MSGS_MESSAGE_LISTLABELSREQUEST_H
