/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef obs_thrift_server_TYPES_H
#define obs_thrift_server_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>




class SourceDimensions;

typedef struct _SourceDimensions__isset {
  _SourceDimensions__isset() : leftMargin(true), topMargin(true), relativeWidth(true), relativeHeight(true) {}
  bool leftMargin :1;
  bool topMargin :1;
  bool relativeWidth :1;
  bool relativeHeight :1;
} _SourceDimensions__isset;

class SourceDimensions : public virtual ::apache::thrift::TBase {
 public:

  SourceDimensions(const SourceDimensions&);
  SourceDimensions& operator=(const SourceDimensions&);
  SourceDimensions() : leftMargin(0), topMargin(0), relativeWidth(1.0000000000000000), relativeHeight(1.0000000000000000) {
  }

  virtual ~SourceDimensions() noexcept;
  int32_t leftMargin;
  int32_t topMargin;
  double relativeWidth;
  double relativeHeight;

  _SourceDimensions__isset __isset;

  void __set_leftMargin(const int32_t val);

  void __set_topMargin(const int32_t val);

  void __set_relativeWidth(const double val);

  void __set_relativeHeight(const double val);

  bool operator == (const SourceDimensions & rhs) const
  {
    if (!(leftMargin == rhs.leftMargin))
      return false;
    if (!(topMargin == rhs.topMargin))
      return false;
    if (!(relativeWidth == rhs.relativeWidth))
      return false;
    if (!(relativeHeight == rhs.relativeHeight))
      return false;
    return true;
  }
  bool operator != (const SourceDimensions &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SourceDimensions & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SourceDimensions &a, SourceDimensions &b);

std::ostream& operator<<(std::ostream& out, const SourceDimensions& obj);



#endif
