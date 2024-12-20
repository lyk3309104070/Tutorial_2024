// Generated by gencpp from file ssr_pkg/Carry.msg
// DO NOT EDIT!


#ifndef SSR_PKG_MESSAGE_CARRY_H
#define SSR_PKG_MESSAGE_CARRY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ssr_pkg
{
template <class ContainerAllocator>
struct Carry_
{
  typedef Carry_<ContainerAllocator> Type;

  Carry_()
    : grade()
    , year(0)
    , data()
    , random_int(0)  {
    }
  Carry_(const ContainerAllocator& _alloc)
    : grade(_alloc)
    , year(0)
    , data(_alloc)
    , random_int(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _grade_type;
  _grade_type grade;

   typedef int64_t _year_type;
  _year_type year;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _data_type;
  _data_type data;

   typedef int32_t _random_int_type;
  _random_int_type random_int;





  typedef boost::shared_ptr< ::ssr_pkg::Carry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ssr_pkg::Carry_<ContainerAllocator> const> ConstPtr;

}; // struct Carry_

typedef ::ssr_pkg::Carry_<std::allocator<void> > Carry;

typedef boost::shared_ptr< ::ssr_pkg::Carry > CarryPtr;
typedef boost::shared_ptr< ::ssr_pkg::Carry const> CarryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ssr_pkg::Carry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ssr_pkg::Carry_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ssr_pkg::Carry_<ContainerAllocator1> & lhs, const ::ssr_pkg::Carry_<ContainerAllocator2> & rhs)
{
  return lhs.grade == rhs.grade &&
    lhs.year == rhs.year &&
    lhs.data == rhs.data &&
    lhs.random_int == rhs.random_int;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ssr_pkg::Carry_<ContainerAllocator1> & lhs, const ::ssr_pkg::Carry_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ssr_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ssr_pkg::Carry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ssr_pkg::Carry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ssr_pkg::Carry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ssr_pkg::Carry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ssr_pkg::Carry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ssr_pkg::Carry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ssr_pkg::Carry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b6bb1dac0ecd93b0aaac9dc0dfa6056";
  }

  static const char* value(const ::ssr_pkg::Carry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b6bb1dac0ecd93bULL;
  static const uint64_t static_value2 = 0x0aaac9dc0dfa6056ULL;
};

template<class ContainerAllocator>
struct DataType< ::ssr_pkg::Carry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ssr_pkg/Carry";
  }

  static const char* value(const ::ssr_pkg::Carry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ssr_pkg::Carry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string grade\n"
"int64 year\n"
"string data\n"
"int32 random_int\n"
;
  }

  static const char* value(const ::ssr_pkg::Carry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ssr_pkg::Carry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grade);
      stream.next(m.year);
      stream.next(m.data);
      stream.next(m.random_int);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Carry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ssr_pkg::Carry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ssr_pkg::Carry_<ContainerAllocator>& v)
  {
    s << indent << "grade: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.grade);
    s << indent << "year: ";
    Printer<int64_t>::stream(s, indent + "  ", v.year);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.data);
    s << indent << "random_int: ";
    Printer<int32_t>::stream(s, indent + "  ", v.random_int);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SSR_PKG_MESSAGE_CARRY_H
