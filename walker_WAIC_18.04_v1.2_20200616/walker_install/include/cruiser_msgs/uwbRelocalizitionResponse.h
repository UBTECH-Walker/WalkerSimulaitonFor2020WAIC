// Generated by gencpp from file cruiser_msgs/uwbRelocalizitionResponse.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_UWBRELOCALIZITIONRESPONSE_H
#define CRUISER_MSGS_MESSAGE_UWBRELOCALIZITIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cruiser_msgs
{
template <class ContainerAllocator>
struct uwbRelocalizitionResponse_
{
  typedef uwbRelocalizitionResponse_<ContainerAllocator> Type;

  uwbRelocalizitionResponse_()
    : status(0)  {
    }
  uwbRelocalizitionResponse_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(STATE_IDLE)
  #undef STATE_IDLE
#endif
#if defined(_WIN32) && defined(STATE_ESTMATING)
  #undef STATE_ESTMATING
#endif
#if defined(_WIN32) && defined(STATE_SUCCESS)
  #undef STATE_SUCCESS
#endif
#if defined(_WIN32) && defined(STATE_FAIL)
  #undef STATE_FAIL
#endif
#if defined(_WIN32) && defined(TRIGGER_SUCCESS)
  #undef TRIGGER_SUCCESS
#endif

  enum {
    STATE_IDLE = 0,
    STATE_ESTMATING = 1,
    STATE_SUCCESS = 2,
    STATE_FAIL = 3,
    TRIGGER_SUCCESS = 4,
  };


  typedef boost::shared_ptr< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct uwbRelocalizitionResponse_

typedef ::cruiser_msgs::uwbRelocalizitionResponse_<std::allocator<void> > uwbRelocalizitionResponse;

typedef boost::shared_ptr< ::cruiser_msgs::uwbRelocalizitionResponse > uwbRelocalizitionResponsePtr;
typedef boost::shared_ptr< ::cruiser_msgs::uwbRelocalizitionResponse const> uwbRelocalizitionResponseConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1c005e1fd8169ae41397758a18e6927e";
  }

  static const char* value(const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1c005e1fd8169ae4ULL;
  static const uint64_t static_value2 = 0x1397758a18e6927eULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/uwbRelocalizitionResponse";
  }

  static const char* value(const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 STATE_IDLE =0\n"
"int32 STATE_ESTMATING =1\n"
"int32 STATE_SUCCESS = 2\n"
"int32 STATE_FAIL = 3\n"
"int32 TRIGGER_SUCCESS = 4\n"
"int32 status\n"
"\n"
"\n"
;
  }

  static const char* value(const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct uwbRelocalizitionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::uwbRelocalizitionResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_UWBRELOCALIZITIONRESPONSE_H