// Generated by gencpp from file servo_ctrl/EcatSetZero.msg
// DO NOT EDIT!


#ifndef SERVO_CTRL_MESSAGE_ECATSETZERO_H
#define SERVO_CTRL_MESSAGE_ECATSETZERO_H

#include <ros/service_traits.h>


#include <servo_ctrl/EcatSetZeroRequest.h>
#include <servo_ctrl/EcatSetZeroResponse.h>


namespace servo_ctrl
{

struct EcatSetZero
{

typedef EcatSetZeroRequest Request;
typedef EcatSetZeroResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct EcatSetZero
} // namespace servo_ctrl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::servo_ctrl::EcatSetZero > {
  static const char* value()
  {
    return "d3a64b889fd5801c30f651acd61f9dd1";
  }

  static const char* value(const ::servo_ctrl::EcatSetZero&) { return value(); }
};

template<>
struct DataType< ::servo_ctrl::EcatSetZero > {
  static const char* value()
  {
    return "servo_ctrl/EcatSetZero";
  }

  static const char* value(const ::servo_ctrl::EcatSetZero&) { return value(); }
};


// service_traits::MD5Sum< ::servo_ctrl::EcatSetZeroRequest> should match
// service_traits::MD5Sum< ::servo_ctrl::EcatSetZero >
template<>
struct MD5Sum< ::servo_ctrl::EcatSetZeroRequest>
{
  static const char* value()
  {
    return MD5Sum< ::servo_ctrl::EcatSetZero >::value();
  }
  static const char* value(const ::servo_ctrl::EcatSetZeroRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::servo_ctrl::EcatSetZeroRequest> should match
// service_traits::DataType< ::servo_ctrl::EcatSetZero >
template<>
struct DataType< ::servo_ctrl::EcatSetZeroRequest>
{
  static const char* value()
  {
    return DataType< ::servo_ctrl::EcatSetZero >::value();
  }
  static const char* value(const ::servo_ctrl::EcatSetZeroRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::servo_ctrl::EcatSetZeroResponse> should match
// service_traits::MD5Sum< ::servo_ctrl::EcatSetZero >
template<>
struct MD5Sum< ::servo_ctrl::EcatSetZeroResponse>
{
  static const char* value()
  {
    return MD5Sum< ::servo_ctrl::EcatSetZero >::value();
  }
  static const char* value(const ::servo_ctrl::EcatSetZeroResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::servo_ctrl::EcatSetZeroResponse> should match
// service_traits::DataType< ::servo_ctrl::EcatSetZero >
template<>
struct DataType< ::servo_ctrl::EcatSetZeroResponse>
{
  static const char* value()
  {
    return DataType< ::servo_ctrl::EcatSetZero >::value();
  }
  static const char* value(const ::servo_ctrl::EcatSetZeroResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERVO_CTRL_MESSAGE_ECATSETZERO_H