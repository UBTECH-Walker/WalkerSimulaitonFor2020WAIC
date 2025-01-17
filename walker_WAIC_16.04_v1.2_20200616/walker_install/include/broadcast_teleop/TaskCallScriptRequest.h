// Generated by gencpp from file broadcast_teleop/TaskCallScriptRequest.msg
// DO NOT EDIT!


#ifndef BROADCAST_TELEOP_MESSAGE_TASKCALLSCRIPTREQUEST_H
#define BROADCAST_TELEOP_MESSAGE_TASKCALLSCRIPTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace broadcast_teleop
{
template <class ContainerAllocator>
struct TaskCallScriptRequest_
{
  typedef TaskCallScriptRequest_<ContainerAllocator> Type;

  TaskCallScriptRequest_()
    : task_id()
    , cmd()  {
    }
  TaskCallScriptRequest_(const ContainerAllocator& _alloc)
    : task_id(_alloc)
    , cmd(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _task_id_type;
  _task_id_type task_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TaskCallScriptRequest_

typedef ::broadcast_teleop::TaskCallScriptRequest_<std::allocator<void> > TaskCallScriptRequest;

typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptRequest > TaskCallScriptRequestPtr;
typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptRequest const> TaskCallScriptRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace broadcast_teleop

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17ec07612d3a4046c8d248878192c259";
  }

  static const char* value(const ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17ec07612d3a4046ULL;
  static const uint64_t static_value2 = 0xc8d248878192c259ULL;
};

template<class ContainerAllocator>
struct DataType< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "broadcast_teleop/TaskCallScriptRequest";
  }

  static const char* value(const ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
string task_id\n\
\n\
\n\
string cmd\n\
\n\
";
  }

  static const char* value(const ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.task_id);
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskCallScriptRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::broadcast_teleop::TaskCallScriptRequest_<ContainerAllocator>& v)
  {
    s << indent << "task_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.task_id);
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BROADCAST_TELEOP_MESSAGE_TASKCALLSCRIPTREQUEST_H
