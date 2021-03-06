// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CharLogin/ChristmasDB.proto

#ifndef PROTOBUF_CharLogin_2fChristmasDB_2eproto__INCLUDED
#define PROTOBUF_CharLogin_2fChristmasDB_2eproto__INCLUDED

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

namespace ChristmasDB {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CharLogin_2fChristmasDB_2eproto();
void protobuf_AssignDesc_CharLogin_2fChristmasDB_2eproto();
void protobuf_ShutdownFile_CharLogin_2fChristmasDB_2eproto();

class BreakEggDB;
class ChristmasLoginDB;
class SingleLimitDB;
class LimitDataAll;
class NewYearPro;
class ChristmasAllData;

// ===================================================================

class BreakEggDB : public ::google::protobuf::Message {
 public:
  BreakEggDB();
  virtual ~BreakEggDB();

  BreakEggDB(const BreakEggDB& from);

  inline BreakEggDB& operator=(const BreakEggDB& from) {
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
  static const BreakEggDB& default_instance();

  void Swap(BreakEggDB* other);

  // implements Message ----------------------------------------------

  BreakEggDB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BreakEggDB& from);
  void MergeFrom(const BreakEggDB& from);
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

  // optional int64 reflushTime = 1;
  inline bool has_reflushtime() const;
  inline void clear_reflushtime();
  static const int kReflushTimeFieldNumber = 1;
  inline ::google::protobuf::int64 reflushtime() const;
  inline void set_reflushtime(::google::protobuf::int64 value);

  // optional int32 breakInfo = 2;
  inline bool has_breakinfo() const;
  inline void clear_breakinfo();
  static const int kBreakInfoFieldNumber = 2;
  inline ::google::protobuf::int32 breakinfo() const;
  inline void set_breakinfo(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ChristmasDB.BreakEggDB)
 private:
  inline void set_has_reflushtime();
  inline void clear_has_reflushtime();
  inline void set_has_breakinfo();
  inline void clear_has_breakinfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 reflushtime_;
  ::google::protobuf::int32 breakinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fChristmasDB_2eproto();

  void InitAsDefaultInstance();
  static BreakEggDB* default_instance_;
};
// -------------------------------------------------------------------

class ChristmasLoginDB : public ::google::protobuf::Message {
 public:
  ChristmasLoginDB();
  virtual ~ChristmasLoginDB();

  ChristmasLoginDB(const ChristmasLoginDB& from);

  inline ChristmasLoginDB& operator=(const ChristmasLoginDB& from) {
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
  static const ChristmasLoginDB& default_instance();

  void Swap(ChristmasLoginDB* other);

  // implements Message ----------------------------------------------

  ChristmasLoginDB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChristmasLoginDB& from);
  void MergeFrom(const ChristmasLoginDB& from);
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

  // optional int32 loginDay = 1;
  inline bool has_loginday() const;
  inline void clear_loginday();
  static const int kLoginDayFieldNumber = 1;
  inline ::google::protobuf::int32 loginday() const;
  inline void set_loginday(::google::protobuf::int32 value);

  // optional int32 rewardInfo = 2;
  inline bool has_rewardinfo() const;
  inline void clear_rewardinfo();
  static const int kRewardInfoFieldNumber = 2;
  inline ::google::protobuf::int32 rewardinfo() const;
  inline void set_rewardinfo(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ChristmasDB.ChristmasLoginDB)
 private:
  inline void set_has_loginday();
  inline void clear_has_loginday();
  inline void set_has_rewardinfo();
  inline void clear_has_rewardinfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 loginday_;
  ::google::protobuf::int32 rewardinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fChristmasDB_2eproto();

  void InitAsDefaultInstance();
  static ChristmasLoginDB* default_instance_;
};
// -------------------------------------------------------------------

class SingleLimitDB : public ::google::protobuf::Message {
 public:
  SingleLimitDB();
  virtual ~SingleLimitDB();

  SingleLimitDB(const SingleLimitDB& from);

  inline SingleLimitDB& operator=(const SingleLimitDB& from) {
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
  static const SingleLimitDB& default_instance();

  void Swap(SingleLimitDB* other);

  // implements Message ----------------------------------------------

  SingleLimitDB* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SingleLimitDB& from);
  void MergeFrom(const SingleLimitDB& from);
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

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 counts = 2;
  inline bool has_counts() const;
  inline void clear_counts();
  static const int kCountsFieldNumber = 2;
  inline ::google::protobuf::int32 counts() const;
  inline void set_counts(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ChristmasDB.SingleLimitDB)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_counts();
  inline void clear_has_counts();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 counts_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fChristmasDB_2eproto();

  void InitAsDefaultInstance();
  static SingleLimitDB* default_instance_;
};
// -------------------------------------------------------------------

class LimitDataAll : public ::google::protobuf::Message {
 public:
  LimitDataAll();
  virtual ~LimitDataAll();

  LimitDataAll(const LimitDataAll& from);

  inline LimitDataAll& operator=(const LimitDataAll& from) {
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
  static const LimitDataAll& default_instance();

  void Swap(LimitDataAll* other);

  // implements Message ----------------------------------------------

  LimitDataAll* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LimitDataAll& from);
  void MergeFrom(const LimitDataAll& from);
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

  // optional int64 reflushTime = 1;
  inline bool has_reflushtime() const;
  inline void clear_reflushtime();
  static const int kReflushTimeFieldNumber = 1;
  inline ::google::protobuf::int64 reflushtime() const;
  inline void set_reflushtime(::google::protobuf::int64 value);

  // repeated .ChristmasDB.SingleLimitDB limitList = 2;
  inline int limitlist_size() const;
  inline void clear_limitlist();
  static const int kLimitListFieldNumber = 2;
  inline const ::ChristmasDB::SingleLimitDB& limitlist(int index) const;
  inline ::ChristmasDB::SingleLimitDB* mutable_limitlist(int index);
  inline ::ChristmasDB::SingleLimitDB* add_limitlist();
  inline const ::google::protobuf::RepeatedPtrField< ::ChristmasDB::SingleLimitDB >&
      limitlist() const;
  inline ::google::protobuf::RepeatedPtrField< ::ChristmasDB::SingleLimitDB >*
      mutable_limitlist();

  // @@protoc_insertion_point(class_scope:ChristmasDB.LimitDataAll)
 private:
  inline void set_has_reflushtime();
  inline void clear_has_reflushtime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 reflushtime_;
  ::google::protobuf::RepeatedPtrField< ::ChristmasDB::SingleLimitDB > limitlist_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fChristmasDB_2eproto();

  void InitAsDefaultInstance();
  static LimitDataAll* default_instance_;
};
// -------------------------------------------------------------------

class NewYearPro : public ::google::protobuf::Message {
 public:
  NewYearPro();
  virtual ~NewYearPro();

  NewYearPro(const NewYearPro& from);

  inline NewYearPro& operator=(const NewYearPro& from) {
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
  static const NewYearPro& default_instance();

  void Swap(NewYearPro* other);

  // implements Message ----------------------------------------------

  NewYearPro* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NewYearPro& from);
  void MergeFrom(const NewYearPro& from);
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

  // optional int32 loginday = 1;
  inline bool has_loginday() const;
  inline void clear_loginday();
  static const int kLogindayFieldNumber = 1;
  inline ::google::protobuf::int32 loginday() const;
  inline void set_loginday(::google::protobuf::int32 value);

  // optional int32 loginreward = 2;
  inline bool has_loginreward() const;
  inline void clear_loginreward();
  static const int kLoginrewardFieldNumber = 2;
  inline ::google::protobuf::int32 loginreward() const;
  inline void set_loginreward(::google::protobuf::int32 value);

  // optional int32 horsereceive = 3;
  inline bool has_horsereceive() const;
  inline void clear_horsereceive();
  static const int kHorsereceiveFieldNumber = 3;
  inline ::google::protobuf::int32 horsereceive() const;
  inline void set_horsereceive(::google::protobuf::int32 value);

  // optional int32 contiReceive = 4;
  inline bool has_contireceive() const;
  inline void clear_contireceive();
  static const int kContiReceiveFieldNumber = 4;
  inline ::google::protobuf::int32 contireceive() const;
  inline void set_contireceive(::google::protobuf::int32 value);

  // optional int64 initTime = 5;
  inline bool has_inittime() const;
  inline void clear_inittime();
  static const int kInitTimeFieldNumber = 5;
  inline ::google::protobuf::int64 inittime() const;
  inline void set_inittime(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:ChristmasDB.NewYearPro)
 private:
  inline void set_has_loginday();
  inline void clear_has_loginday();
  inline void set_has_loginreward();
  inline void clear_has_loginreward();
  inline void set_has_horsereceive();
  inline void clear_has_horsereceive();
  inline void set_has_contireceive();
  inline void clear_has_contireceive();
  inline void set_has_inittime();
  inline void clear_has_inittime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 loginday_;
  ::google::protobuf::int32 loginreward_;
  ::google::protobuf::int32 horsereceive_;
  ::google::protobuf::int32 contireceive_;
  ::google::protobuf::int64 inittime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fChristmasDB_2eproto();

  void InitAsDefaultInstance();
  static NewYearPro* default_instance_;
};
// -------------------------------------------------------------------

class ChristmasAllData : public ::google::protobuf::Message {
 public:
  ChristmasAllData();
  virtual ~ChristmasAllData();

  ChristmasAllData(const ChristmasAllData& from);

  inline ChristmasAllData& operator=(const ChristmasAllData& from) {
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
  static const ChristmasAllData& default_instance();

  void Swap(ChristmasAllData* other);

  // implements Message ----------------------------------------------

  ChristmasAllData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChristmasAllData& from);
  void MergeFrom(const ChristmasAllData& from);
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

  // optional .ChristmasDB.BreakEggDB breakEggData = 1;
  inline bool has_breakeggdata() const;
  inline void clear_breakeggdata();
  static const int kBreakEggDataFieldNumber = 1;
  inline const ::ChristmasDB::BreakEggDB& breakeggdata() const;
  inline ::ChristmasDB::BreakEggDB* mutable_breakeggdata();
  inline ::ChristmasDB::BreakEggDB* release_breakeggdata();
  inline void set_allocated_breakeggdata(::ChristmasDB::BreakEggDB* breakeggdata);

  // optional .ChristmasDB.ChristmasLoginDB loginData = 2;
  inline bool has_logindata() const;
  inline void clear_logindata();
  static const int kLoginDataFieldNumber = 2;
  inline const ::ChristmasDB::ChristmasLoginDB& logindata() const;
  inline ::ChristmasDB::ChristmasLoginDB* mutable_logindata();
  inline ::ChristmasDB::ChristmasLoginDB* release_logindata();
  inline void set_allocated_logindata(::ChristmasDB::ChristmasLoginDB* logindata);

  // optional .ChristmasDB.LimitDataAll limitData = 3;
  inline bool has_limitdata() const;
  inline void clear_limitdata();
  static const int kLimitDataFieldNumber = 3;
  inline const ::ChristmasDB::LimitDataAll& limitdata() const;
  inline ::ChristmasDB::LimitDataAll* mutable_limitdata();
  inline ::ChristmasDB::LimitDataAll* release_limitdata();
  inline void set_allocated_limitdata(::ChristmasDB::LimitDataAll* limitdata);

  // optional .ChristmasDB.NewYearPro newyeardata = 4;
  inline bool has_newyeardata() const;
  inline void clear_newyeardata();
  static const int kNewyeardataFieldNumber = 4;
  inline const ::ChristmasDB::NewYearPro& newyeardata() const;
  inline ::ChristmasDB::NewYearPro* mutable_newyeardata();
  inline ::ChristmasDB::NewYearPro* release_newyeardata();
  inline void set_allocated_newyeardata(::ChristmasDB::NewYearPro* newyeardata);

  // @@protoc_insertion_point(class_scope:ChristmasDB.ChristmasAllData)
 private:
  inline void set_has_breakeggdata();
  inline void clear_has_breakeggdata();
  inline void set_has_logindata();
  inline void clear_has_logindata();
  inline void set_has_limitdata();
  inline void clear_has_limitdata();
  inline void set_has_newyeardata();
  inline void clear_has_newyeardata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::ChristmasDB::BreakEggDB* breakeggdata_;
  ::ChristmasDB::ChristmasLoginDB* logindata_;
  ::ChristmasDB::LimitDataAll* limitdata_;
  ::ChristmasDB::NewYearPro* newyeardata_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fChristmasDB_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fChristmasDB_2eproto();

  void InitAsDefaultInstance();
  static ChristmasAllData* default_instance_;
};
// ===================================================================


// ===================================================================

// BreakEggDB

// optional int64 reflushTime = 1;
inline bool BreakEggDB::has_reflushtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BreakEggDB::set_has_reflushtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BreakEggDB::clear_has_reflushtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BreakEggDB::clear_reflushtime() {
  reflushtime_ = GOOGLE_LONGLONG(0);
  clear_has_reflushtime();
}
inline ::google::protobuf::int64 BreakEggDB::reflushtime() const {
  return reflushtime_;
}
inline void BreakEggDB::set_reflushtime(::google::protobuf::int64 value) {
  set_has_reflushtime();
  reflushtime_ = value;
}

// optional int32 breakInfo = 2;
inline bool BreakEggDB::has_breakinfo() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BreakEggDB::set_has_breakinfo() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BreakEggDB::clear_has_breakinfo() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BreakEggDB::clear_breakinfo() {
  breakinfo_ = 0;
  clear_has_breakinfo();
}
inline ::google::protobuf::int32 BreakEggDB::breakinfo() const {
  return breakinfo_;
}
inline void BreakEggDB::set_breakinfo(::google::protobuf::int32 value) {
  set_has_breakinfo();
  breakinfo_ = value;
}

// -------------------------------------------------------------------

// ChristmasLoginDB

// optional int32 loginDay = 1;
inline bool ChristmasLoginDB::has_loginday() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChristmasLoginDB::set_has_loginday() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChristmasLoginDB::clear_has_loginday() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChristmasLoginDB::clear_loginday() {
  loginday_ = 0;
  clear_has_loginday();
}
inline ::google::protobuf::int32 ChristmasLoginDB::loginday() const {
  return loginday_;
}
inline void ChristmasLoginDB::set_loginday(::google::protobuf::int32 value) {
  set_has_loginday();
  loginday_ = value;
}

// optional int32 rewardInfo = 2;
inline bool ChristmasLoginDB::has_rewardinfo() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChristmasLoginDB::set_has_rewardinfo() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChristmasLoginDB::clear_has_rewardinfo() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChristmasLoginDB::clear_rewardinfo() {
  rewardinfo_ = 0;
  clear_has_rewardinfo();
}
inline ::google::protobuf::int32 ChristmasLoginDB::rewardinfo() const {
  return rewardinfo_;
}
inline void ChristmasLoginDB::set_rewardinfo(::google::protobuf::int32 value) {
  set_has_rewardinfo();
  rewardinfo_ = value;
}

// -------------------------------------------------------------------

// SingleLimitDB

// optional int32 id = 1;
inline bool SingleLimitDB::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SingleLimitDB::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SingleLimitDB::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SingleLimitDB::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SingleLimitDB::id() const {
  return id_;
}
inline void SingleLimitDB::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 counts = 2;
inline bool SingleLimitDB::has_counts() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SingleLimitDB::set_has_counts() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SingleLimitDB::clear_has_counts() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SingleLimitDB::clear_counts() {
  counts_ = 0;
  clear_has_counts();
}
inline ::google::protobuf::int32 SingleLimitDB::counts() const {
  return counts_;
}
inline void SingleLimitDB::set_counts(::google::protobuf::int32 value) {
  set_has_counts();
  counts_ = value;
}

// -------------------------------------------------------------------

// LimitDataAll

// optional int64 reflushTime = 1;
inline bool LimitDataAll::has_reflushtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LimitDataAll::set_has_reflushtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LimitDataAll::clear_has_reflushtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LimitDataAll::clear_reflushtime() {
  reflushtime_ = GOOGLE_LONGLONG(0);
  clear_has_reflushtime();
}
inline ::google::protobuf::int64 LimitDataAll::reflushtime() const {
  return reflushtime_;
}
inline void LimitDataAll::set_reflushtime(::google::protobuf::int64 value) {
  set_has_reflushtime();
  reflushtime_ = value;
}

// repeated .ChristmasDB.SingleLimitDB limitList = 2;
inline int LimitDataAll::limitlist_size() const {
  return limitlist_.size();
}
inline void LimitDataAll::clear_limitlist() {
  limitlist_.Clear();
}
inline const ::ChristmasDB::SingleLimitDB& LimitDataAll::limitlist(int index) const {
  return limitlist_.Get(index);
}
inline ::ChristmasDB::SingleLimitDB* LimitDataAll::mutable_limitlist(int index) {
  return limitlist_.Mutable(index);
}
inline ::ChristmasDB::SingleLimitDB* LimitDataAll::add_limitlist() {
  return limitlist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ChristmasDB::SingleLimitDB >&
LimitDataAll::limitlist() const {
  return limitlist_;
}
inline ::google::protobuf::RepeatedPtrField< ::ChristmasDB::SingleLimitDB >*
LimitDataAll::mutable_limitlist() {
  return &limitlist_;
}

// -------------------------------------------------------------------

// NewYearPro

// optional int32 loginday = 1;
inline bool NewYearPro::has_loginday() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NewYearPro::set_has_loginday() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NewYearPro::clear_has_loginday() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NewYearPro::clear_loginday() {
  loginday_ = 0;
  clear_has_loginday();
}
inline ::google::protobuf::int32 NewYearPro::loginday() const {
  return loginday_;
}
inline void NewYearPro::set_loginday(::google::protobuf::int32 value) {
  set_has_loginday();
  loginday_ = value;
}

// optional int32 loginreward = 2;
inline bool NewYearPro::has_loginreward() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NewYearPro::set_has_loginreward() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NewYearPro::clear_has_loginreward() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NewYearPro::clear_loginreward() {
  loginreward_ = 0;
  clear_has_loginreward();
}
inline ::google::protobuf::int32 NewYearPro::loginreward() const {
  return loginreward_;
}
inline void NewYearPro::set_loginreward(::google::protobuf::int32 value) {
  set_has_loginreward();
  loginreward_ = value;
}

// optional int32 horsereceive = 3;
inline bool NewYearPro::has_horsereceive() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NewYearPro::set_has_horsereceive() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NewYearPro::clear_has_horsereceive() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NewYearPro::clear_horsereceive() {
  horsereceive_ = 0;
  clear_has_horsereceive();
}
inline ::google::protobuf::int32 NewYearPro::horsereceive() const {
  return horsereceive_;
}
inline void NewYearPro::set_horsereceive(::google::protobuf::int32 value) {
  set_has_horsereceive();
  horsereceive_ = value;
}

// optional int32 contiReceive = 4;
inline bool NewYearPro::has_contireceive() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NewYearPro::set_has_contireceive() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NewYearPro::clear_has_contireceive() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NewYearPro::clear_contireceive() {
  contireceive_ = 0;
  clear_has_contireceive();
}
inline ::google::protobuf::int32 NewYearPro::contireceive() const {
  return contireceive_;
}
inline void NewYearPro::set_contireceive(::google::protobuf::int32 value) {
  set_has_contireceive();
  contireceive_ = value;
}

// optional int64 initTime = 5;
inline bool NewYearPro::has_inittime() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NewYearPro::set_has_inittime() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NewYearPro::clear_has_inittime() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NewYearPro::clear_inittime() {
  inittime_ = GOOGLE_LONGLONG(0);
  clear_has_inittime();
}
inline ::google::protobuf::int64 NewYearPro::inittime() const {
  return inittime_;
}
inline void NewYearPro::set_inittime(::google::protobuf::int64 value) {
  set_has_inittime();
  inittime_ = value;
}

// -------------------------------------------------------------------

// ChristmasAllData

// optional .ChristmasDB.BreakEggDB breakEggData = 1;
inline bool ChristmasAllData::has_breakeggdata() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChristmasAllData::set_has_breakeggdata() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChristmasAllData::clear_has_breakeggdata() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChristmasAllData::clear_breakeggdata() {
  if (breakeggdata_ != NULL) breakeggdata_->::ChristmasDB::BreakEggDB::Clear();
  clear_has_breakeggdata();
}
inline const ::ChristmasDB::BreakEggDB& ChristmasAllData::breakeggdata() const {
  return breakeggdata_ != NULL ? *breakeggdata_ : *default_instance_->breakeggdata_;
}
inline ::ChristmasDB::BreakEggDB* ChristmasAllData::mutable_breakeggdata() {
  set_has_breakeggdata();
  if (breakeggdata_ == NULL) breakeggdata_ = new ::ChristmasDB::BreakEggDB;
  return breakeggdata_;
}
inline ::ChristmasDB::BreakEggDB* ChristmasAllData::release_breakeggdata() {
  clear_has_breakeggdata();
  ::ChristmasDB::BreakEggDB* temp = breakeggdata_;
  breakeggdata_ = NULL;
  return temp;
}
inline void ChristmasAllData::set_allocated_breakeggdata(::ChristmasDB::BreakEggDB* breakeggdata) {
  delete breakeggdata_;
  breakeggdata_ = breakeggdata;
  if (breakeggdata) {
    set_has_breakeggdata();
  } else {
    clear_has_breakeggdata();
  }
}

// optional .ChristmasDB.ChristmasLoginDB loginData = 2;
inline bool ChristmasAllData::has_logindata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChristmasAllData::set_has_logindata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChristmasAllData::clear_has_logindata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChristmasAllData::clear_logindata() {
  if (logindata_ != NULL) logindata_->::ChristmasDB::ChristmasLoginDB::Clear();
  clear_has_logindata();
}
inline const ::ChristmasDB::ChristmasLoginDB& ChristmasAllData::logindata() const {
  return logindata_ != NULL ? *logindata_ : *default_instance_->logindata_;
}
inline ::ChristmasDB::ChristmasLoginDB* ChristmasAllData::mutable_logindata() {
  set_has_logindata();
  if (logindata_ == NULL) logindata_ = new ::ChristmasDB::ChristmasLoginDB;
  return logindata_;
}
inline ::ChristmasDB::ChristmasLoginDB* ChristmasAllData::release_logindata() {
  clear_has_logindata();
  ::ChristmasDB::ChristmasLoginDB* temp = logindata_;
  logindata_ = NULL;
  return temp;
}
inline void ChristmasAllData::set_allocated_logindata(::ChristmasDB::ChristmasLoginDB* logindata) {
  delete logindata_;
  logindata_ = logindata;
  if (logindata) {
    set_has_logindata();
  } else {
    clear_has_logindata();
  }
}

// optional .ChristmasDB.LimitDataAll limitData = 3;
inline bool ChristmasAllData::has_limitdata() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChristmasAllData::set_has_limitdata() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChristmasAllData::clear_has_limitdata() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChristmasAllData::clear_limitdata() {
  if (limitdata_ != NULL) limitdata_->::ChristmasDB::LimitDataAll::Clear();
  clear_has_limitdata();
}
inline const ::ChristmasDB::LimitDataAll& ChristmasAllData::limitdata() const {
  return limitdata_ != NULL ? *limitdata_ : *default_instance_->limitdata_;
}
inline ::ChristmasDB::LimitDataAll* ChristmasAllData::mutable_limitdata() {
  set_has_limitdata();
  if (limitdata_ == NULL) limitdata_ = new ::ChristmasDB::LimitDataAll;
  return limitdata_;
}
inline ::ChristmasDB::LimitDataAll* ChristmasAllData::release_limitdata() {
  clear_has_limitdata();
  ::ChristmasDB::LimitDataAll* temp = limitdata_;
  limitdata_ = NULL;
  return temp;
}
inline void ChristmasAllData::set_allocated_limitdata(::ChristmasDB::LimitDataAll* limitdata) {
  delete limitdata_;
  limitdata_ = limitdata;
  if (limitdata) {
    set_has_limitdata();
  } else {
    clear_has_limitdata();
  }
}

// optional .ChristmasDB.NewYearPro newyeardata = 4;
inline bool ChristmasAllData::has_newyeardata() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChristmasAllData::set_has_newyeardata() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ChristmasAllData::clear_has_newyeardata() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ChristmasAllData::clear_newyeardata() {
  if (newyeardata_ != NULL) newyeardata_->::ChristmasDB::NewYearPro::Clear();
  clear_has_newyeardata();
}
inline const ::ChristmasDB::NewYearPro& ChristmasAllData::newyeardata() const {
  return newyeardata_ != NULL ? *newyeardata_ : *default_instance_->newyeardata_;
}
inline ::ChristmasDB::NewYearPro* ChristmasAllData::mutable_newyeardata() {
  set_has_newyeardata();
  if (newyeardata_ == NULL) newyeardata_ = new ::ChristmasDB::NewYearPro;
  return newyeardata_;
}
inline ::ChristmasDB::NewYearPro* ChristmasAllData::release_newyeardata() {
  clear_has_newyeardata();
  ::ChristmasDB::NewYearPro* temp = newyeardata_;
  newyeardata_ = NULL;
  return temp;
}
inline void ChristmasAllData::set_allocated_newyeardata(::ChristmasDB::NewYearPro* newyeardata) {
  delete newyeardata_;
  newyeardata_ = newyeardata;
  if (newyeardata) {
    set_has_newyeardata();
  } else {
    clear_has_newyeardata();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ChristmasDB

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CharLogin_2fChristmasDB_2eproto__INCLUDED
