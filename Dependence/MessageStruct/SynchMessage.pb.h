// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SynchMessage.proto

#ifndef PROTOBUF_SynchMessage_2eproto__INCLUDED
#define PROTOBUF_SynchMessage_2eproto__INCLUDED

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

namespace SynchMessage {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SynchMessage_2eproto();
void protobuf_AssignDesc_SynchMessage_2eproto();
void protobuf_ShutdownFile_SynchMessage_2eproto();

class CommonMessage;

// ===================================================================

class CommonMessage : public ::google::protobuf::Message {
 public:
  CommonMessage();
  virtual ~CommonMessage();

  CommonMessage(const CommonMessage& from);

  inline CommonMessage& operator=(const CommonMessage& from) {
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
  static const CommonMessage& default_instance();

  void Swap(CommonMessage* other);

  // implements Message ----------------------------------------------

  CommonMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommonMessage& from);
  void MergeFrom(const CommonMessage& from);
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

  // required int64 charid = 1;
  inline bool has_charid() const;
  inline void clear_charid();
  static const int kCharidFieldNumber = 1;
  inline ::google::protobuf::int64 charid() const;
  inline void set_charid(::google::protobuf::int64 value);

  // optional int32 msgid = 2;
  inline bool has_msgid() const;
  inline void clear_msgid();
  static const int kMsgidFieldNumber = 2;
  inline ::google::protobuf::int32 msgid() const;
  inline void set_msgid(::google::protobuf::int32 value);

  // optional bytes content = 3;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 3;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const void* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:SynchMessage.CommonMessage)
 private:
  inline void set_has_charid();
  inline void clear_has_charid();
  inline void set_has_msgid();
  inline void clear_has_msgid();
  inline void set_has_content();
  inline void clear_has_content();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 charid_;
  ::std::string* content_;
  ::google::protobuf::int32 msgid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_SynchMessage_2eproto();
  friend void protobuf_AssignDesc_SynchMessage_2eproto();
  friend void protobuf_ShutdownFile_SynchMessage_2eproto();

  void InitAsDefaultInstance();
  static CommonMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// CommonMessage

// required int64 charid = 1;
inline bool CommonMessage::has_charid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommonMessage::set_has_charid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommonMessage::clear_has_charid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CommonMessage::clear_charid() {
  charid_ = GOOGLE_LONGLONG(0);
  clear_has_charid();
}
inline ::google::protobuf::int64 CommonMessage::charid() const {
  return charid_;
}
inline void CommonMessage::set_charid(::google::protobuf::int64 value) {
  set_has_charid();
  charid_ = value;
}

// optional int32 msgid = 2;
inline bool CommonMessage::has_msgid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CommonMessage::set_has_msgid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CommonMessage::clear_has_msgid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CommonMessage::clear_msgid() {
  msgid_ = 0;
  clear_has_msgid();
}
inline ::google::protobuf::int32 CommonMessage::msgid() const {
  return msgid_;
}
inline void CommonMessage::set_msgid(::google::protobuf::int32 value) {
  set_has_msgid();
  msgid_ = value;
}

// optional bytes content = 3;
inline bool CommonMessage::has_content() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CommonMessage::set_has_content() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CommonMessage::clear_has_content() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CommonMessage::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& CommonMessage::content() const {
  return *content_;
}
inline void CommonMessage::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void CommonMessage::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void CommonMessage::set_content(const void* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CommonMessage::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* CommonMessage::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CommonMessage::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace SynchMessage

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SynchMessage_2eproto__INCLUDED
