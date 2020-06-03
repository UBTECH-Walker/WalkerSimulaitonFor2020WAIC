// Generated by gencpp from file cruiser_msgs/PowerSettingResponse.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_POWERSETTINGRESPONSE_H
#define CRUISER_MSGS_MESSAGE_POWERSETTINGRESPONSE_H


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
struct PowerSettingResponse_
{
  typedef PowerSettingResponse_<ContainerAllocator> Type;

  PowerSettingResponse_()
    : year(0)
    , month(0)
    , day(0)
    , hour(0)
    , min(0)
    , sec(0)
    , manual(false)
    , adapter(false)
    , station(false)
    , timer(false)
    , state(0)
    , success(false)  {
    }
  PowerSettingResponse_(const ContainerAllocator& _alloc)
    : year(0)
    , month(0)
    , day(0)
    , hour(0)
    , min(0)
    , sec(0)
    , manual(false)
    , adapter(false)
    , station(false)
    , timer(false)
    , state(0)
    , success(false)  {
  (void)_alloc;
    }



   typedef uint16_t _year_type;
  _year_type year;

   typedef uint8_t _month_type;
  _month_type month;

   typedef uint8_t _day_type;
  _day_type day;

   typedef uint8_t _hour_type;
  _hour_type hour;

   typedef uint8_t _min_type;
  _min_type min;

   typedef uint8_t _sec_type;
  _sec_type sec;

   typedef uint8_t _manual_type;
  _manual_type manual;

   typedef uint8_t _adapter_type;
  _adapter_type adapter;

   typedef uint8_t _station_type;
  _station_type station;

   typedef uint8_t _timer_type;
  _timer_type timer;

   typedef uint8_t _state_type;
  _state_type state;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PowerSettingResponse_

typedef ::cruiser_msgs::PowerSettingResponse_<std::allocator<void> > PowerSettingResponse;

typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingResponse > PowerSettingResponsePtr;
typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingResponse const> PowerSettingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator2> & rhs)
{
  return lhs.year == rhs.year &&
    lhs.month == rhs.month &&
    lhs.day == rhs.day &&
    lhs.hour == rhs.hour &&
    lhs.min == rhs.min &&
    lhs.sec == rhs.sec &&
    lhs.manual == rhs.manual &&
    lhs.adapter == rhs.adapter &&
    lhs.station == rhs.station &&
    lhs.timer == rhs.timer &&
    lhs.state == rhs.state &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d22520ac39d556453b510a4435e4340f";
  }

  static const char* value(const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd22520ac39d55645ULL;
  static const uint64_t static_value2 = 0x3b510a4435e4340fULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/PowerSettingResponse";
  }

  static const char* value(const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 year\n"
"uint8 month\n"
"uint8 day\n"
"uint8 hour\n"
"uint8 min\n"
"uint8 sec\n"
"bool manual\n"
"bool adapter\n"
"bool station\n"
"bool timer\n"
"uint8 state\n"
"\n"
"bool success\n"
"\n"
"\n"
;
  }

  static const char* value(const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.year);
      stream.next(m.month);
      stream.next(m.day);
      stream.next(m.hour);
      stream.next(m.min);
      stream.next(m.sec);
      stream.next(m.manual);
      stream.next(m.adapter);
      stream.next(m.station);
      stream.next(m.timer);
      stream.next(m.state);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerSettingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::PowerSettingResponse_<ContainerAllocator>& v)
  {
    s << indent << "year: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.year);
    s << indent << "month: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.month);
    s << indent << "day: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.day);
    s << indent << "hour: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hour);
    s << indent << "min: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.min);
    s << indent << "sec: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sec);
    s << indent << "manual: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.manual);
    s << indent << "adapter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.adapter);
    s << indent << "station: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.station);
    s << indent << "timer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.timer);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_POWERSETTINGRESPONSE_H