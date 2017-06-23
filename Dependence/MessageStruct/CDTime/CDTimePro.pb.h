// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CDTime/CDTimePro.proto

#ifndef PROTOBUF_CDTime_2fCDTimePro_2eproto__INCLUDED
#define PROTOBUF_CDTime_2fCDTimePro_2eproto__INCLUDED

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

namespace CDTimePro {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CDTime_2fCDTimePro_2eproto();
void protobuf_AssignDesc_CDTime_2fCDTimePro_2eproto();
void protobuf_ShutdownFile_CDTime_2fCDTimePro_2eproto();

class CDTimeData;
class CDTimeList;

// ===================================================================

class CDTimeData : public ::google::protobuf::Message {
 public:
  CDTimeData();
  virtual ~CDTimeData();

  CDTimeData(const CDTimeData& from);

  inline CDTimeData& operator=(const CDTimeData& from) {
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
  static const CDTimeData& default_instance();

  void Swap(CDTimeData* other);

  // implements Message ----------------------------------------------

  CDTimeData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDTimeData& from);
  void MergeFrom(const CDTimeData& from);
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

  // optional int32 channelType = 1;
  inline bool has_channeltype() const;
  inline void clear_channeltype();
  static const int kChannelTypeFieldNumber = 1;
  inline ::google::protobuf::int32 channeltype() const;
  inline void set_channeltype(::google::protobuf::int32 value);

  // optional int32 time = 2;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 2;
  inline ::google::protobuf::int32 time() const;
  inline void set_time(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CDTimePro.CDTimeData)
 private:
  inline void set_has_channeltype();
  inline void clear_has_channeltype();
  inline void set_has_time();
  inline void clear_has_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 channeltype_;
  ::google::protobuf::int32 time_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CDTime_2fCDTimePro_2eproto();
  friend void protobuf_AssignDesc_CDTime_2fCDTimePro_2eproto();
  friend void protobuf_ShutdownFile_CDTime_2fCDTimePro_2eproto();

  void InitAsDefaultInstance();
  static CDTimeData* default_instance_;
};
// -------------------------------------------------------------------

class CDTimeList : public ::google::protobuf::Message {
 public:
  CDTimeList();
  virtual ~CDTimeList();

  CDTimeList(const CDTimeList& from);

  inline CDTimeList& operator=(const CDTimeList& from) {
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
  static const CDTimeList& default_instance();

  void Swap(CDTimeList* other);

  // implements Message ----------------------------------------------

  CDTimeList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDTimeList& from);
  void MergeFrom(const CDTimeList& from);
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

  // repeated .CDTimePro.CDTimeData dataList = 1;
  inline int datalist_size() const;
  inline void clear_datalist();
  static const int kDataListFieldNumber = 1;
  inline const ::CDTimePro::CDTimeData& datalist(int index) const;
  inline ::CDTimePro::CDTimeData* mutable_datalist(int index);
  inline ::CDTimePro::CDTimeData* add_datalist();
  inline const ::google::protobuf::RepeatedPtrField< ::CDTimePro::CDTimeData >&
      datalist() const;
  inline ::google::protobuf::RepeatedPtrField< ::CDTimePro::CDTimeData >*
      mutable_datalist();

  // @@protoc_insertion_point(class_scope:CDTimePro.CDTimeList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::CDTimePro::CDTimeData > datalist_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_CDTime_2fCDTimePro_2eproto();
  friend void protobuf_AssignDesc_CDTime_2fCDTimePro_2eproto();
  friend void protobuf_ShutdownFile_CDTime_2fCDTimePro_2eproto();

  void InitAsDefaultInstance();
  static CDTimeList* default_instance_;
};
// ===================================================================


// ===================================================================

// CDTimeData

// optional int32 channelType = 1;
inline bool CDTimeData::has_channeltype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDTimeData::set_has_channeltype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDTimeData::clear_has_channeltype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDTimeData::clear_channeltype() {
  channeltype_ = 0;
  clear_has_channeltype();
}
inline ::google::protobuf::int32 CDTimeData::channeltype() const {
  return channeltype_;
}
inline void CDTimeData::set_channeltype(::google::protobuf::int32 value) {
  set_has_channeltype();
  channeltype_ = value;
}

// optional int32 time = 2;
inline bool CDTimeData::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDTimeData::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDTimeData::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDTimeData::clear_time() {
  time_ = 0;
  clear_has_time();
}
inline ::google::protobuf::int32 CDTimeData::time() const {
  return time_;
}
inline void CDTimeData::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
}

// -------------------------------------------------------------------

// CDTimeList

// repeated .CDTimePro.CDTimeData dataList = 1;
inline int CDTimeList::datalist_size() const {
  return datalist_.size();
}
inline void CDTimeList::clear_datalist() {
  datalist_.Clear();
}
inline const ::CDTimePro::CDTimeData& CDTimeList::datalist(int index) const {
  return datalist_.Get(index);
}
inline ::CDTimePro::CDTimeData* CDTimeList::mutable_datalist(int index) {
  return datalist_.Mutable(index);
}
inline ::CDTimePro::CDTimeData* CDTimeList::add_datalist() {
  return datalist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CDTimePro::CDTimeData >&
CDTimeList::datalist() const {
  return datalist_;
}
inline ::google::protobuf::RepeatedPtrField< ::CDTimePro::CDTimeData >*
CDTimeList::mutable_datalist() {
  return &datalist_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace CDTimePro

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CDTime_2fCDTimePro_2eproto__INCLUDED