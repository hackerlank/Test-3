// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerReturnBool.proto

#ifndef PROTOBUF_ServerReturnBool_2eproto__INCLUDED
#define PROTOBUF_ServerReturnBool_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace ServerReturn {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ServerReturnBool_2eproto();
void protobuf_AssignDesc_ServerReturnBool_2eproto();
void protobuf_ShutdownFile_ServerReturnBool_2eproto();

class ServerRetBool;
class ServerRetBoolInt;

// ===================================================================

class ServerRetBool : public ::google::protobuf::Message {
 public:
  ServerRetBool();
  virtual ~ServerRetBool();

  ServerRetBool(const ServerRetBool& from);

  inline ServerRetBool& operator=(const ServerRetBool& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerRetBool& default_instance();

  void Swap(ServerRetBool* other);

  // implements Message ----------------------------------------------

  ServerRetBool* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerRetBool& from);
  void MergeFrom(const ServerRetBool& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool ret = 1;
  inline bool has_ret() const;
  inline void clear_ret();
  static const int kRetFieldNumber = 1;
  inline bool ret() const;
  inline void set_ret(bool value);

  // @@protoc_insertion_point(class_scope:ServerReturn.ServerRetBool)
 private:
  inline void set_has_ret();
  inline void clear_has_ret();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool ret_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_ServerReturnBool_2eproto();
  friend void protobuf_AssignDesc_ServerReturnBool_2eproto();
  friend void protobuf_ShutdownFile_ServerReturnBool_2eproto();

  void InitAsDefaultInstance();
  static ServerRetBool* default_instance_;
};
// -------------------------------------------------------------------

class ServerRetBoolInt : public ::google::protobuf::Message {
 public:
  ServerRetBoolInt();
  virtual ~ServerRetBoolInt();

  ServerRetBoolInt(const ServerRetBoolInt& from);

  inline ServerRetBoolInt& operator=(const ServerRetBoolInt& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerRetBoolInt& default_instance();

  void Swap(ServerRetBoolInt* other);

  // implements Message ----------------------------------------------

  ServerRetBoolInt* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerRetBoolInt& from);
  void MergeFrom(const ServerRetBoolInt& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool retf = 1;
  inline bool has_retf() const;
  inline void clear_retf();
  static const int kRetfFieldNumber = 1;
  inline bool retf() const;
  inline void set_retf(bool value);

  // required int32 rets = 2;
  inline bool has_rets() const;
  inline void clear_rets();
  static const int kRetsFieldNumber = 2;
  inline ::google::protobuf::int32 rets() const;
  inline void set_rets(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ServerReturn.ServerRetBoolInt)
 private:
  inline void set_has_retf();
  inline void clear_has_retf();
  inline void set_has_rets();
  inline void clear_has_rets();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool retf_;
  ::google::protobuf::int32 rets_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_ServerReturnBool_2eproto();
  friend void protobuf_AssignDesc_ServerReturnBool_2eproto();
  friend void protobuf_ShutdownFile_ServerReturnBool_2eproto();

  void InitAsDefaultInstance();
  static ServerRetBoolInt* default_instance_;
};
// ===================================================================


// ===================================================================

// ServerRetBool

// required bool ret = 1;
inline bool ServerRetBool::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerRetBool::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerRetBool::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerRetBool::clear_ret() {
  ret_ = false;
  clear_has_ret();
}
inline bool ServerRetBool::ret() const {
  return ret_;
}
inline void ServerRetBool::set_ret(bool value) {
  set_has_ret();
  ret_ = value;
}

// -------------------------------------------------------------------

// ServerRetBoolInt

// required bool retf = 1;
inline bool ServerRetBoolInt::has_retf() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerRetBoolInt::set_has_retf() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerRetBoolInt::clear_has_retf() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerRetBoolInt::clear_retf() {
  retf_ = false;
  clear_has_retf();
}
inline bool ServerRetBoolInt::retf() const {
  return retf_;
}
inline void ServerRetBoolInt::set_retf(bool value) {
  set_has_retf();
  retf_ = value;
}

// required int32 rets = 2;
inline bool ServerRetBoolInt::has_rets() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerRetBoolInt::set_has_rets() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServerRetBoolInt::clear_has_rets() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServerRetBoolInt::clear_rets() {
  rets_ = 0;
  clear_has_rets();
}
inline ::google::protobuf::int32 ServerRetBoolInt::rets() const {
  return rets_;
}
inline void ServerRetBoolInt::set_rets(::google::protobuf::int32 value) {
  set_has_rets();
  rets_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ServerReturn

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ServerReturnBool_2eproto__INCLUDED
