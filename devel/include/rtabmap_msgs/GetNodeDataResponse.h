// Generated by gencpp from file rtabmap_msgs/GetNodeDataResponse.msg
// DO NOT EDIT!


#ifndef RTABMAP_MSGS_MESSAGE_GETNODEDATARESPONSE_H
#define RTABMAP_MSGS_MESSAGE_GETNODEDATARESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rtabmap_msgs/NodeData.h>

namespace rtabmap_msgs
{
template <class ContainerAllocator>
struct GetNodeDataResponse_
{
  typedef GetNodeDataResponse_<ContainerAllocator> Type;

  GetNodeDataResponse_()
    : data()  {
    }
  GetNodeDataResponse_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::rtabmap_msgs::NodeData_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::rtabmap_msgs::NodeData_<ContainerAllocator> >> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetNodeDataResponse_

typedef ::rtabmap_msgs::GetNodeDataResponse_<std::allocator<void> > GetNodeDataResponse;

typedef boost::shared_ptr< ::rtabmap_msgs::GetNodeDataResponse > GetNodeDataResponsePtr;
typedef boost::shared_ptr< ::rtabmap_msgs::GetNodeDataResponse const> GetNodeDataResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator1> & lhs, const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator1> & lhs, const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rtabmap_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b11b4a96c2ae402c3deff196e5f84cd3";
  }

  static const char* value(const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb11b4a96c2ae402cULL;
  static const uint64_t static_value2 = 0x3deff196e5f84cd3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_msgs/GetNodeDataResponse";
  }

  static const char* value(const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"NodeData[] data\n"
"\n"
"\n"
"================================================================================\n"
"MSG: rtabmap_msgs/NodeData\n"
"\n"
"int32 id\n"
"int32 mapId\n"
"int32 weight\n"
"float64 stamp\n"
"string label\n"
"\n"
"# Pose from odometry not corrected\n"
"geometry_msgs/Pose pose\n"
"\n"
"# Ground truth (optional)\n"
"geometry_msgs/Pose groundTruthPose\n"
"\n"
"# GPS (optional)\n"
"GPS gps\n"
"\n"
"# compressed image in /camera_link frame\n"
"# use rtabmap::util3d::uncompressImage() from \"rtabmap/core/util3d.h\"\n"
"uint8[] image\n"
"\n"
"# compressed depth image in /camera_link frame\n"
"# use rtabmap::util3d::uncompressImage() from \"rtabmap/core/util3d.h\"\n"
"uint8[] depth\n"
"\n"
"# Camera models\n"
"float32[] fx\n"
"float32[] fy\n"
"float32[] cx\n"
"float32[] cy\n"
"float32[] width\n"
"float32[] height\n"
"float32[] baseline\n"
"# local transform (/base_link -> /camera_link)\n"
"geometry_msgs/Transform[] localTransform\n"
"\n"
"# compressed 2D or 3D laser scan\n"
"# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
"uint8[] laserScan\n"
"int32 laserScanMaxPts\n"
"float32 laserScanMaxRange\n"
"int32 laserScanFormat\n"
"# local transform (/base_link -> /base_laser)\n"
"geometry_msgs/Transform laserScanLocalTransform\n"
"\n"
"# compressed user data\n"
"# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
"uint8[] userData\n"
"\n"
"# compressed occupancy grid\n"
"# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
"uint8[] grid_ground\n"
"uint8[] grid_obstacles\n"
"uint8[] grid_empty_cells\n"
"float32 grid_cell_size\n"
"Point3f grid_view_point\n"
"\n"
"# std::multimap<wordId, index>\n"
"# std::vector<cv::Keypoint>\n"
"# std::vector<cv::Point3f>\n"
"int32[] wordIdKeys\n"
"int32[] wordIdValues\n"
"KeyPoint[] wordKpts\n"
"Point3f[] wordPts\n"
"# compressed descriptors\n"
"# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
"uint8[] wordDescriptors\n"
"\n"
"GlobalDescriptor[] globalDescriptors\n"
"\n"
"EnvSensor[] env_sensors\n"
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
"\n"
"================================================================================\n"
"MSG: rtabmap_msgs/GPS\n"
"\n"
"float64 stamp      # in seconds\n"
"float64 longitude  # DD format\n"
"float64 latitude   # DD format\n"
"float64 altitude   # in meters\n"
"float64 error      # in meters\n"
"float64 bearing    # North 0->360 deg\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: rtabmap_msgs/Point3f\n"
"#class cv::Point3f\n"
"#{\n"
"#    float x;\n"
"#    float y;\n"
"#    float z;\n"
"#}\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: rtabmap_msgs/KeyPoint\n"
"#class cv::KeyPoint\n"
"#{\n"
"#    Point2f pt;\n"
"#    float size;\n"
"#    float angle;\n"
"#    float response;\n"
"#    int octave;\n"
"#    int class_id;\n"
"#}\n"
"\n"
"Point2f pt\n"
"float32 size\n"
"float32 angle\n"
"float32 response\n"
"int32 octave\n"
"int32 class_id\n"
"================================================================================\n"
"MSG: rtabmap_msgs/Point2f\n"
"#class cv::Point2f\n"
"#{\n"
"#    float x;\n"
"#    float y;\n"
"#}\n"
"\n"
"float32 x\n"
"float32 y\n"
"================================================================================\n"
"MSG: rtabmap_msgs/GlobalDescriptor\n"
"\n"
"Header header\n"
"\n"
"# compressed global descriptor\n"
"# use rtabmap::util3d::uncompressData() from \"rtabmap/core/util3d.h\"\n"
"int32 type\n"
"uint8[] info\n"
"uint8[] data\n"
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
"\n"
"================================================================================\n"
"MSG: rtabmap_msgs/EnvSensor\n"
"\n"
"Header header\n"
"\n"
"# EnvSensor\n"
"int32 type\n"
"float64 value\n"
;
  }

  static const char* value(const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetNodeDataResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rtabmap_msgs::GetNodeDataResponse_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rtabmap_msgs::NodeData_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_MSGS_MESSAGE_GETNODEDATARESPONSE_H
