// Generated by gencpp from file cruiser_msgs/cruiser_joint_motion.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISER_JOINT_MOTION_H
#define CRUISER_MSGS_MESSAGE_CRUISER_JOINT_MOTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cruiser_msgs
{
template <class ContainerAllocator>
struct cruiser_joint_motion_
{
  typedef cruiser_joint_motion_<ContainerAllocator> Type;

  cruiser_joint_motion_()
    : header()
    , datapacket()  {
    }
  cruiser_joint_motion_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , datapacket(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _datapacket_type;
  _datapacket_type datapacket;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> const> ConstPtr;

}; // struct cruiser_joint_motion_

typedef ::cruiser_msgs::cruiser_joint_motion_<std::allocator<void> > cruiser_joint_motion;

typedef boost::shared_ptr< ::cruiser_msgs::cruiser_joint_motion > cruiser_joint_motionPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiser_joint_motion const> cruiser_joint_motionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.datapacket == rhs.datapacket;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "550613a4ae39cd5ce70b393463b493f5";
  }

  static const char* value(const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x550613a4ae39cd5cULL;
  static const uint64_t static_value2 = 0xe70b393463b493f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiser_joint_motion";
  }

  static const char* value(const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string datapacket\n"
"\n"
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

  static const char* value(const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.datapacket);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiser_joint_motion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiser_joint_motion_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "datapacket: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.datapacket);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISER_JOINT_MOTION_H