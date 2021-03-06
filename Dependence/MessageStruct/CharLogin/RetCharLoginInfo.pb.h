// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CharLogin/RetCharLoginInfo.proto

#ifndef PROTOBUF_CharLogin_2fRetCharLoginInfo_2eproto__INCLUDED
#define PROTOBUF_CharLogin_2fRetCharLoginInfo_2eproto__INCLUDED

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

namespace CharLogin {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CharLogin_2fRetCharLoginInfo_2eproto();
void protobuf_AssignDesc_CharLogin_2fRetCharLoginInfo_2eproto();
void protobuf_ShutdownFile_CharLogin_2fRetCharLoginInfo_2eproto();

class RetCharLoginInfo;
class CharExitGame;

// ===================================================================

class RetCharLoginInfo : public ::google::protobuf::Message {
 public:
  RetCharLoginInfo();
  virtual ~RetCharLoginInfo();

  RetCharLoginInfo(const RetCharLoginInfo& from);

  inline RetCharLoginInfo& operator=(const RetCharLoginInfo& from) {
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
  static const RetCharLoginInfo& default_instance();

  void Swap(RetCharLoginInfo* other);

  // implements Message ----------------------------------------------

  RetCharLoginInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RetCharLoginInfo& from);
  void MergeFrom(const RetCharLoginInfo& from);
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

  // required int64 mapid = 2;
  inline bool has_mapid() const;
  inline void clear_mapid();
  static const int kMapidFieldNumber = 2;
  inline ::google::protobuf::int64 mapid() const;
  inline void set_mapid(::google::protobuf::int64 value);

  // optional bool ison = 3;
  inline bool has_ison() const;
  inline void clear_ison();
  static const int kIsonFieldNumber = 3;
  inline bool ison() const;
  inline void set_ison(bool value);

  // optional string openID = 4;
  inline bool has_openid() const;
  inline void clear_openid();
  static const int kOpenIDFieldNumber = 4;
  inline const ::std::string& openid() const;
  inline void set_openid(const ::std::string& value);
  inline void set_openid(const char* value);
  inline void set_openid(const char* value, size_t size);
  inline ::std::string* mutable_openid();
  inline ::std::string* release_openid();
  inline void set_allocated_openid(::std::string* openid);

  // @@protoc_insertion_point(class_scope:CharLogin.RetCharLoginInfo)
 private:
  inline void set_has_charid();
  inline void clear_has_charid();
  inline void set_has_mapid();
  inline void clear_has_mapid();
  inline void set_has_ison();
  inline void clear_has_ison();
  inline void set_has_openid();
  inline void clear_has_openid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 charid_;
  ::google::protobuf::int64 mapid_;
  ::std::string* openid_;
  bool ison_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fRetCharLoginInfo_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fRetCharLoginInfo_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fRetCharLoginInfo_2eproto();

  void InitAsDefaultInstance();
  static RetCharLoginInfo* default_instance_;
};
// -------------------------------------------------------------------

class CharExitGame : public ::google::protobuf::Message {
 public:
  CharExitGame();
  virtual ~CharExitGame();

  CharExitGame(const CharExitGame& from);

  inline CharExitGame& operator=(const CharExitGame& from) {
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
  static const CharExitGame& default_instance();

  void Swap(CharExitGame* other);

  // implements Message ----------------------------------------------

  CharExitGame* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CharExitGame& from);
  void MergeFrom(const CharExitGame& from);
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

  // @@protoc_insertion_point(class_scope:CharLogin.CharExitGame)
 private:
  inline void set_has_charid();
  inline void clear_has_charid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 charid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fRetCharLoginInfo_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fRetCharLoginInfo_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fRetCharLoginInfo_2eproto();

  void InitAsDefaultInstance();
  static CharExitGame* default_instance_;
};
// ===================================================================


// ===================================================================

// RetCharLoginInfo

// required int64 charid = 1;
inline bool RetCharLoginInfo::has_charid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RetCharLoginInfo::set_has_charid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RetCharLoginInfo::clear_has_charid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RetCharLoginInfo::clear_charid() {
  charid_ = GOOGLE_LONGLONG(0);
  clear_has_charid();
}
inline ::google::protobuf::int64 RetCharLoginInfo::charid() const {
  return charid_;
}
inline void RetCharLoginInfo::set_charid(::google::protobuf::int64 value) {
  set_has_charid();
  charid_ = value;
}

// required int64 mapid = 2;
inline bool RetCharLoginInfo::has_mapid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RetCharLoginInfo::set_has_mapid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RetCharLoginInfo::clear_has_mapid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RetCharLoginInfo::clear_mapid() {
  mapid_ = GOOGLE_LONGLONG(0);
  clear_has_mapid();
}
inline ::google::protobuf::int64 RetCharLoginInfo::mapid() const {
  return mapid_;
}
inline void RetCharLoginInfo::set_mapid(::google::protobuf::int64 value) {
  set_has_mapid();
  mapid_ = value;
}

// optional bool ison = 3;
inline bool RetCharLoginInfo::has_ison() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RetCharLoginInfo::set_has_ison() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RetCharLoginInfo::clear_has_ison() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RetCharLoginInfo::clear_ison() {
  ison_ = false;
  clear_has_ison();
}
inline bool RetCharLoginInfo::ison() const {
  return ison_;
}
inline void RetCharLoginInfo::set_ison(bool value) {
  set_has_ison();
  ison_ = value;
}

// optional string openID = 4;
inline bool RetCharLoginInfo::has_openid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RetCharLoginInfo::set_has_openid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RetCharLoginInfo::clear_has_openid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RetCharLoginInfo::clear_openid() {
  if (openid_ != &::google::protobuf::internal::kEmptyString) {
    openid_->clear();
  }
  clear_has_openid();
}
inline const ::std::string& RetCharLoginInfo::openid() const {
  return *openid_;
}
inline void RetCharLoginInfo::set_openid(const ::std::string& value) {
  set_has_openid();
  if (openid_ == &::google::protobuf::internal::kEmptyString) {
    openid_ = new ::std::string;
  }
  openid_->assign(value);
}
inline void RetCharLoginInfo::set_openid(const char* value) {
  set_has_openid();
  if (openid_ == &::google::protobuf::internal::kEmptyString) {
    openid_ = new ::std::string;
  }
  openid_->assign(value);
}
inline void RetCharLoginInfo::set_openid(const char* value, size_t size) {
  set_has_openid();
  if (openid_ == &::google::protobuf::internal::kEmptyString) {
    openid_ = new ::std::string;
  }
  openid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RetCharLoginInfo::mutable_openid() {
  set_has_openid();
  if (openid_ == &::google::protobuf::internal::kEmptyString) {
    openid_ = new ::std::string;
  }
  return openid_;
}
inline ::std::string* RetCharLoginInfo::release_openid() {
  clear_has_openid();
  if (openid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = openid_;
    openid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RetCharLoginInfo::set_allocated_openid(::std::string* openid) {
  if (openid_ != &::google::protobuf::internal::kEmptyString) {
    delete openid_;
  }
  if (openid) {
    set_has_openid();
    openid_ = openid;
  } else {
    clear_has_openid();
    openid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// CharExitGame

// required int64 charid = 1;
inline bool CharExitGame::has_charid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CharExitGame::set_has_charid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CharExitGame::clear_has_charid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CharExitGame::clear_charid() {
  charid_ = GOOGLE_LONGLONG(0);
  clear_has_charid();
}
inline ::google::protobuf::int64 CharExitGame::charid() const {
  return charid_;
}
inline void CharExitGame::set_charid(::google::protobuf::int64 value) {
  set_has_charid();
  charid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace CharLogin

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CharLogin_2fRetCharLoginInfo_2eproto__INCLUDED
