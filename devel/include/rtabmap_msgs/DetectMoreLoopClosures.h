// Generated by gencpp from file rtabmap_msgs/DetectMoreLoopClosures.msg
// DO NOT EDIT!


#ifndef RTABMAP_MSGS_MESSAGE_DETECTMORELOOPCLOSURES_H
#define RTABMAP_MSGS_MESSAGE_DETECTMORELOOPCLOSURES_H

#include <ros/service_traits.h>


#include <rtabmap_msgs/DetectMoreLoopClosuresRequest.h>
#include <rtabmap_msgs/DetectMoreLoopClosuresResponse.h>


namespace rtabmap_msgs
{

struct DetectMoreLoopClosures
{

typedef DetectMoreLoopClosuresRequest Request;
typedef DetectMoreLoopClosuresResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DetectMoreLoopClosures
} // namespace rtabmap_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosures > {
  static const char* value()
  {
    return "4d201f0476beb2d12b70b64edae8edab";
  }

  static const char* value(const ::rtabmap_msgs::DetectMoreLoopClosures&) { return value(); }
};

template<>
struct DataType< ::rtabmap_msgs::DetectMoreLoopClosures > {
  static const char* value()
  {
    return "rtabmap_msgs/DetectMoreLoopClosures";
  }

  static const char* value(const ::rtabmap_msgs::DetectMoreLoopClosures&) { return value(); }
};


// service_traits::MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosuresRequest> should match
// service_traits::MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosures >
template<>
struct MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosuresRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosures >::value();
  }
  static const char* value(const ::rtabmap_msgs::DetectMoreLoopClosuresRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtabmap_msgs::DetectMoreLoopClosuresRequest> should match
// service_traits::DataType< ::rtabmap_msgs::DetectMoreLoopClosures >
template<>
struct DataType< ::rtabmap_msgs::DetectMoreLoopClosuresRequest>
{
  static const char* value()
  {
    return DataType< ::rtabmap_msgs::DetectMoreLoopClosures >::value();
  }
  static const char* value(const ::rtabmap_msgs::DetectMoreLoopClosuresRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosuresResponse> should match
// service_traits::MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosures >
template<>
struct MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosuresResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rtabmap_msgs::DetectMoreLoopClosures >::value();
  }
  static const char* value(const ::rtabmap_msgs::DetectMoreLoopClosuresResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtabmap_msgs::DetectMoreLoopClosuresResponse> should match
// service_traits::DataType< ::rtabmap_msgs::DetectMoreLoopClosures >
template<>
struct DataType< ::rtabmap_msgs::DetectMoreLoopClosuresResponse>
{
  static const char* value()
  {
    return DataType< ::rtabmap_msgs::DetectMoreLoopClosures >::value();
  }
  static const char* value(const ::rtabmap_msgs::DetectMoreLoopClosuresResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RTABMAP_MSGS_MESSAGE_DETECTMORELOOPCLOSURES_H
