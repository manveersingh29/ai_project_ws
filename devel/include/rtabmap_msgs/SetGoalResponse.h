// Generated by gencpp from file rtabmap_msgs/SetGoalResponse.msg
// DO NOT EDIT!


#ifndef RTABMAP_MSGS_MESSAGE_SETGOALRESPONSE_H
#define RTABMAP_MSGS_MESSAGE_SETGOALRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace rtabmap_msgs
{
template <class ContainerAllocator>
struct SetGoalResponse_
{
  typedef SetGoalResponse_<ContainerAllocator> Type;

  SetGoalResponse_()
    : path_ids()
    , path_poses()
    , planning_time(0.0)  {
    }
  SetGoalResponse_(const ContainerAllocator& _alloc)
    : path_ids(_alloc)
    , path_poses(_alloc)
    , planning_time(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _path_ids_type;
  _path_ids_type path_ids;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _path_poses_type;
  _path_poses_type path_poses;

   typedef float _planning_time_type;
  _planning_time_type planning_time;





  typedef boost::shared_ptr< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetGoalResponse_

typedef ::rtabmap_msgs::SetGoalResponse_<std::allocator<void> > SetGoalResponse;

typedef boost::shared_ptr< ::rtabmap_msgs::SetGoalResponse > SetGoalResponsePtr;
typedef boost::shared_ptr< ::rtabmap_msgs::SetGoalResponse const> SetGoalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator1> & lhs, const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator2> & rhs)
{
  return lhs.path_ids == rhs.path_ids &&
    lhs.path_poses == rhs.path_poses &&
    lhs.planning_time == rhs.planning_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator1> & lhs, const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rtabmap_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adca6a85ab21f03d516676b74309de28";
  }

  static const char* value(const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xadca6a85ab21f03dULL;
  static const uint64_t static_value2 = 0x516676b74309de28ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_msgs/SetGoalResponse";
  }

  static const char* value(const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"#response \n"
"int32[] path_ids\n"
"geometry_msgs/Pose[] path_poses\n"
"float32 planning_time\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path_ids);
      stream.next(m.path_poses);
      stream.next(m.planning_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGoalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rtabmap_msgs::SetGoalResponse_<ContainerAllocator>& v)
  {
    s << indent << "path_ids[]" << std::endl;
    for (size_t i = 0; i < v.path_ids.size(); ++i)
    {
      s << indent << "  path_ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.path_ids[i]);
    }
    s << indent << "path_poses[]" << std::endl;
    for (size_t i = 0; i < v.path_poses.size(); ++i)
    {
      s << indent << "  path_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.path_poses[i]);
    }
    s << indent << "planning_time: ";
    Printer<float>::stream(s, indent + "  ", v.planning_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_MSGS_MESSAGE_SETGOALRESPONSE_H
