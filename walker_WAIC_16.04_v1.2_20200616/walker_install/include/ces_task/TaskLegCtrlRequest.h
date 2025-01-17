// Generated by gencpp from file ces_task/TaskLegCtrlRequest.msg
// DO NOT EDIT!


#ifndef CES_TASK_MESSAGE_TASKLEGCTRLREQUEST_H
#define CES_TASK_MESSAGE_TASKLEGCTRLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ces_task
{
template <class ContainerAllocator>
struct TaskLegCtrlRequest_
{
  typedef TaskLegCtrlRequest_<ContainerAllocator> Type;

  TaskLegCtrlRequest_()
    : task_id()
    , demander()
    , executor()
    , cmd()  {
    }
  TaskLegCtrlRequest_(const ContainerAllocator& _alloc)
    : task_id(_alloc)
    , demander(_alloc)
    , executor(_alloc)
    , cmd(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _task_id_type;
  _task_id_type task_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _demander_type;
  _demander_type demander;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _executor_type;
  _executor_type executor;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type;
  _cmd_type cmd;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_START;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_STOP;

  typedef boost::shared_ptr< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TaskLegCtrlRequest_

typedef ::ces_task::TaskLegCtrlRequest_<std::allocator<void> > TaskLegCtrlRequest;

typedef boost::shared_ptr< ::ces_task::TaskLegCtrlRequest > TaskLegCtrlRequestPtr;
typedef boost::shared_ptr< ::ces_task::TaskLegCtrlRequest const> TaskLegCtrlRequestConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      TaskLegCtrlRequest_<ContainerAllocator>::CMD_START =
        
          "start"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      TaskLegCtrlRequest_<ContainerAllocator>::CMD_STOP =
        
          "stop"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ces_task

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ces_task': ['/home/cjl/core_ws/walker_ws/walker2_motion_output/src/ces_task/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c31edd7c6e13e952878e69949e90ae23";
  }

  static const char* value(const ::ces_task::TaskLegCtrlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc31edd7c6e13e952ULL;
  static const uint64_t static_value2 = 0x878e69949e90ae23ULL;
};

template<class ContainerAllocator>
struct DataType< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ces_task/TaskLegCtrlRequest";
  }

  static const char* value(const ::ces_task::TaskLegCtrlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string task_id\n\
\n\
\n\
string demander\n\
\n\
\n\
string executor\n\
\n\
\n\
string CMD_START=start\n\
string CMD_STOP=stop\n\
string cmd\n\
\n\
";
  }

  static const char* value(const ::ces_task::TaskLegCtrlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.task_id);
      stream.next(m.demander);
      stream.next(m.executor);
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskLegCtrlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ces_task::TaskLegCtrlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ces_task::TaskLegCtrlRequest_<ContainerAllocator>& v)
  {
    s << indent << "task_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.task_id);
    s << indent << "demander: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.demander);
    s << indent << "executor: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.executor);
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CES_TASK_MESSAGE_TASKLEGCTRLREQUEST_H
