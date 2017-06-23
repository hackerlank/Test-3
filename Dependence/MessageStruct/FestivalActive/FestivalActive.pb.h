// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FestivalActive/FestivalActive.proto

#ifndef PROTOBUF_FestivalActive_2fFestivalActive_2eproto__INCLUDED
#define PROTOBUF_FestivalActive_2fFestivalActive_2eproto__INCLUDED

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

namespace FestivalActivePackage {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_FestivalActive_2fFestivalActive_2eproto();
void protobuf_AssignDesc_FestivalActive_2fFestivalActive_2eproto();
void protobuf_ShutdownFile_FestivalActive_2fFestivalActive_2eproto();

class FestivalActiveStartEnd;
class ReqFestivalPrize;
class AckFestivalPrize;

// ===================================================================

class FestivalActiveStartEnd : public ::google::protobuf::Message {
 public:
  FestivalActiveStartEnd();
  virtual ~FestivalActiveStartEnd();

  FestivalActiveStartEnd(const FestivalActiveStartEnd& from);

  inline FestivalActiveStartEnd& operator=(const FestivalActiveStartEnd& from) {
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
  static const FestivalActiveStartEnd& default_instance();

  void Swap(FestivalActiveStartEnd* other);

  // implements Message ----------------------------------------------

  FestivalActiveStartEnd* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FestivalActiveStartEnd& from);
  void MergeFrom(const FestivalActiveStartEnd& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 flag = 2;
  inline bool has_flag() const;
  inline void clear_flag();
  static const int kFlagFieldNumber = 2;
  inline ::google::protobuf::int32 flag() const;
  inline void set_flag(::google::protobuf::int32 value);

  // optional int64 begintime = 3;
  inline bool has_begintime() const;
  inline void clear_begintime();
  static const int kBegintimeFieldNumber = 3;
  inline ::google::protobuf::int64 begintime() const;
  inline void set_begintime(::google::protobuf::int64 value);

  // optional int64 endtime = 4;
  inline bool has_endtime() const;
  inline void clear_endtime();
  static const int kEndtimeFieldNumber = 4;
  inline ::google::protobuf::int64 endtime() const;
  inline void set_endtime(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:FestivalActivePackage.FestivalActiveStartEnd)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_flag();
  inline void clear_has_flag();
  inline void set_has_begintime();
  inline void clear_has_begintime();
  inline void set_has_endtime();
  inline void clear_has_endtime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 flag_;
  ::google::protobuf::int64 begintime_;
  ::google::protobuf::int64 endtime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_FestivalActive_2fFestivalActive_2eproto();
  friend void protobuf_AssignDesc_FestivalActive_2fFestivalActive_2eproto();
  friend void protobuf_ShutdownFile_FestivalActive_2fFestivalActive_2eproto();

  void InitAsDefaultInstance();
  static FestivalActiveStartEnd* default_instance_;
};
// -------------------------------------------------------------------

class ReqFestivalPrize : public ::google::protobuf::Message {
 public:
  ReqFestivalPrize();
  virtual ~ReqFestivalPrize();

  ReqFestivalPrize(const ReqFestivalPrize& from);

  inline ReqFestivalPrize& operator=(const ReqFestivalPrize& from) {
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
  static const ReqFestivalPrize& default_instance();

  void Swap(ReqFestivalPrize* other);

  // implements Message ----------------------------------------------

  ReqFestivalPrize* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ReqFestivalPrize& from);
  void MergeFrom(const ReqFestivalPrize& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:FestivalActivePackage.ReqFestivalPrize)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FestivalActive_2fFestivalActive_2eproto();
  friend void protobuf_AssignDesc_FestivalActive_2fFestivalActive_2eproto();
  friend void protobuf_ShutdownFile_FestivalActive_2fFestivalActive_2eproto();

  void InitAsDefaultInstance();
  static ReqFestivalPrize* default_instance_;
};
// -------------------------------------------------------------------

class AckFestivalPrize : public ::google::protobuf::Message {
 public:
  AckFestivalPrize();
  virtual ~AckFestivalPrize();

  AckFestivalPrize(const AckFestivalPrize& from);

  inline AckFestivalPrize& operator=(const AckFestivalPrize& from) {
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
  static const AckFestivalPrize& default_instance();

  void Swap(AckFestivalPrize* other);

  // implements Message ----------------------------------------------

  AckFestivalPrize* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AckFestivalPrize& from);
  void MergeFrom(const AckFestivalPrize& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 result = 2;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:FestivalActivePackage.AckFestivalPrize)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_FestivalActive_2fFestivalActive_2eproto();
  friend void protobuf_AssignDesc_FestivalActive_2fFestivalActive_2eproto();
  friend void protobuf_ShutdownFile_FestivalActive_2fFestivalActive_2eproto();

  void InitAsDefaultInstance();
  static AckFestivalPrize* default_instance_;
};
// ===================================================================


// ===================================================================

// FestivalActiveStartEnd

// required int32 id = 1;
inline bool FestivalActiveStartEnd::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FestivalActiveStartEnd::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FestivalActiveStartEnd::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FestivalActiveStartEnd::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 FestivalActiveStartEnd::id() const {
  return id_;
}
inline void FestivalActiveStartEnd::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 flag = 2;
inline bool FestivalActiveStartEnd::has_flag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FestivalActiveStartEnd::set_has_flag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FestivalActiveStartEnd::clear_has_flag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FestivalActiveStartEnd::clear_flag() {
  flag_ = 0;
  clear_has_flag();
}
inline ::google::protobuf::int32 FestivalActiveStartEnd::flag() const {
  return flag_;
}
inline void FestivalActiveStartEnd::set_flag(::google::protobuf::int32 value) {
  set_has_flag();
  flag_ = value;
}

// optional int64 begintime = 3;
inline bool FestivalActiveStartEnd::has_begintime() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FestivalActiveStartEnd::set_has_begintime() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FestivalActiveStartEnd::clear_has_begintime() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FestivalActiveStartEnd::clear_begintime() {
  begintime_ = GOOGLE_LONGLONG(0);
  clear_has_begintime();
}
inline ::google::protobuf::int64 FestivalActiveStartEnd::begintime() const {
  return begintime_;
}
inline void FestivalActiveStartEnd::set_begintime(::google::protobuf::int64 value) {
  set_has_begintime();
  begintime_ = value;
}

// optional int64 endtime = 4;
inline bool FestivalActiveStartEnd::has_endtime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FestivalActiveStartEnd::set_has_endtime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FestivalActiveStartEnd::clear_has_endtime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FestivalActiveStartEnd::clear_endtime() {
  endtime_ = GOOGLE_LONGLONG(0);
  clear_has_endtime();
}
inline ::google::protobuf::int64 FestivalActiveStartEnd::endtime() const {
  return endtime_;
}
inline void FestivalActiveStartEnd::set_endtime(::google::protobuf::int64 value) {
  set_has_endtime();
  endtime_ = value;
}

// -------------------------------------------------------------------

// ReqFestivalPrize

// required int32 id = 1;
inline bool ReqFestivalPrize::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ReqFestivalPrize::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ReqFestivalPrize::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ReqFestivalPrize::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ReqFestivalPrize::id() const {
  return id_;
}
inline void ReqFestivalPrize::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// -------------------------------------------------------------------

// AckFestivalPrize

// required int32 id = 1;
inline bool AckFestivalPrize::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AckFestivalPrize::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AckFestivalPrize::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AckFestivalPrize::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 AckFestivalPrize::id() const {
  return id_;
}
inline void AckFestivalPrize::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 result = 2;
inline bool AckFestivalPrize::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AckFestivalPrize::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AckFestivalPrize::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AckFestivalPrize::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 AckFestivalPrize::result() const {
  return result_;
}
inline void AckFestivalPrize::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace FestivalActivePackage

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FestivalActive_2fFestivalActive_2eproto__INCLUDED