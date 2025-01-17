// Generated by gencpp from file perm_checker/PermCheck.msg
// DO NOT EDIT!


#ifndef PERM_CHECKER_MESSAGE_PERMCHECK_H
#define PERM_CHECKER_MESSAGE_PERMCHECK_H

#include <ros/service_traits.h>


#include <perm_checker/PermCheckRequest.h>
#include <perm_checker/PermCheckResponse.h>


namespace perm_checker
{

struct PermCheck
{

typedef PermCheckRequest Request;
typedef PermCheckResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PermCheck
} // namespace perm_checker


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::perm_checker::PermCheck > {
  static const char* value()
  {
    return "567625a38a97c54a8feb8f3c8d08ffa6";
  }

  static const char* value(const ::perm_checker::PermCheck&) { return value(); }
};

template<>
struct DataType< ::perm_checker::PermCheck > {
  static const char* value()
  {
    return "perm_checker/PermCheck";
  }

  static const char* value(const ::perm_checker::PermCheck&) { return value(); }
};


// service_traits::MD5Sum< ::perm_checker::PermCheckRequest> should match 
// service_traits::MD5Sum< ::perm_checker::PermCheck > 
template<>
struct MD5Sum< ::perm_checker::PermCheckRequest>
{
  static const char* value()
  {
    return MD5Sum< ::perm_checker::PermCheck >::value();
  }
  static const char* value(const ::perm_checker::PermCheckRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::perm_checker::PermCheckRequest> should match 
// service_traits::DataType< ::perm_checker::PermCheck > 
template<>
struct DataType< ::perm_checker::PermCheckRequest>
{
  static const char* value()
  {
    return DataType< ::perm_checker::PermCheck >::value();
  }
  static const char* value(const ::perm_checker::PermCheckRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::perm_checker::PermCheckResponse> should match 
// service_traits::MD5Sum< ::perm_checker::PermCheck > 
template<>
struct MD5Sum< ::perm_checker::PermCheckResponse>
{
  static const char* value()
  {
    return MD5Sum< ::perm_checker::PermCheck >::value();
  }
  static const char* value(const ::perm_checker::PermCheckResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::perm_checker::PermCheckResponse> should match 
// service_traits::DataType< ::perm_checker::PermCheck > 
template<>
struct DataType< ::perm_checker::PermCheckResponse>
{
  static const char* value()
  {
    return DataType< ::perm_checker::PermCheck >::value();
  }
  static const char* value(const ::perm_checker::PermCheckResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PERM_CHECKER_MESSAGE_PERMCHECK_H
