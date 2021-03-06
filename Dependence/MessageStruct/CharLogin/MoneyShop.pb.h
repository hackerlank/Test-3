// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CharLogin/MoneyShop.proto

#ifndef PROTOBUF_CharLogin_2fMoneyShop_2eproto__INCLUDED
#define PROTOBUF_CharLogin_2fMoneyShop_2eproto__INCLUDED

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

namespace MoneyShopInfo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CharLogin_2fMoneyShop_2eproto();
void protobuf_AssignDesc_CharLogin_2fMoneyShop_2eproto();
void protobuf_ShutdownFile_CharLogin_2fMoneyShop_2eproto();

class AckMoneyShopInfo;
class AckExchangeMoney;

// ===================================================================

class AckMoneyShopInfo : public ::google::protobuf::Message {
 public:
  AckMoneyShopInfo();
  virtual ~AckMoneyShopInfo();

  AckMoneyShopInfo(const AckMoneyShopInfo& from);

  inline AckMoneyShopInfo& operator=(const AckMoneyShopInfo& from) {
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
  static const AckMoneyShopInfo& default_instance();

  void Swap(AckMoneyShopInfo* other);

  // implements Message ----------------------------------------------

  AckMoneyShopInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AckMoneyShopInfo& from);
  void MergeFrom(const AckMoneyShopInfo& from);
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

  // required int32 ret = 1;
  inline bool has_ret() const;
  inline void clear_ret();
  static const int kRetFieldNumber = 1;
  inline ::google::protobuf::int32 ret() const;
  inline void set_ret(::google::protobuf::int32 value);

  // optional int32 freeNum = 2;
  inline bool has_freenum() const;
  inline void clear_freenum();
  static const int kFreeNumFieldNumber = 2;
  inline ::google::protobuf::int32 freenum() const;
  inline void set_freenum(::google::protobuf::int32 value);

  // optional int32 costNum = 3;
  inline bool has_costnum() const;
  inline void clear_costnum();
  static const int kCostNumFieldNumber = 3;
  inline ::google::protobuf::int32 costnum() const;
  inline void set_costnum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MoneyShopInfo.AckMoneyShopInfo)
 private:
  inline void set_has_ret();
  inline void clear_has_ret();
  inline void set_has_freenum();
  inline void clear_has_freenum();
  inline void set_has_costnum();
  inline void clear_has_costnum();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 ret_;
  ::google::protobuf::int32 freenum_;
  ::google::protobuf::int32 costnum_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fMoneyShop_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fMoneyShop_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fMoneyShop_2eproto();

  void InitAsDefaultInstance();
  static AckMoneyShopInfo* default_instance_;
};
// -------------------------------------------------------------------

class AckExchangeMoney : public ::google::protobuf::Message {
 public:
  AckExchangeMoney();
  virtual ~AckExchangeMoney();

  AckExchangeMoney(const AckExchangeMoney& from);

  inline AckExchangeMoney& operator=(const AckExchangeMoney& from) {
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
  static const AckExchangeMoney& default_instance();

  void Swap(AckExchangeMoney* other);

  // implements Message ----------------------------------------------

  AckExchangeMoney* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AckExchangeMoney& from);
  void MergeFrom(const AckExchangeMoney& from);
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

  // required int32 ret = 1;
  inline bool has_ret() const;
  inline void clear_ret();
  static const int kRetFieldNumber = 1;
  inline ::google::protobuf::int32 ret() const;
  inline void set_ret(::google::protobuf::int32 value);

  // optional int32 money = 2;
  inline bool has_money() const;
  inline void clear_money();
  static const int kMoneyFieldNumber = 2;
  inline ::google::protobuf::int32 money() const;
  inline void set_money(::google::protobuf::int32 value);

  // optional int32 freeNum = 3;
  inline bool has_freenum() const;
  inline void clear_freenum();
  static const int kFreeNumFieldNumber = 3;
  inline ::google::protobuf::int32 freenum() const;
  inline void set_freenum(::google::protobuf::int32 value);

  // optional int32 costNum = 4;
  inline bool has_costnum() const;
  inline void clear_costnum();
  static const int kCostNumFieldNumber = 4;
  inline ::google::protobuf::int32 costnum() const;
  inline void set_costnum(::google::protobuf::int32 value);

  // optional int32 critValue = 5;
  inline bool has_critvalue() const;
  inline void clear_critvalue();
  static const int kCritValueFieldNumber = 5;
  inline ::google::protobuf::int32 critvalue() const;
  inline void set_critvalue(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MoneyShopInfo.AckExchangeMoney)
 private:
  inline void set_has_ret();
  inline void clear_has_ret();
  inline void set_has_money();
  inline void clear_has_money();
  inline void set_has_freenum();
  inline void clear_has_freenum();
  inline void set_has_costnum();
  inline void clear_has_costnum();
  inline void set_has_critvalue();
  inline void clear_has_critvalue();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 ret_;
  ::google::protobuf::int32 money_;
  ::google::protobuf::int32 freenum_;
  ::google::protobuf::int32 costnum_;
  ::google::protobuf::int32 critvalue_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_CharLogin_2fMoneyShop_2eproto();
  friend void protobuf_AssignDesc_CharLogin_2fMoneyShop_2eproto();
  friend void protobuf_ShutdownFile_CharLogin_2fMoneyShop_2eproto();

  void InitAsDefaultInstance();
  static AckExchangeMoney* default_instance_;
};
// ===================================================================


// ===================================================================

// AckMoneyShopInfo

// required int32 ret = 1;
inline bool AckMoneyShopInfo::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AckMoneyShopInfo::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AckMoneyShopInfo::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AckMoneyShopInfo::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
inline ::google::protobuf::int32 AckMoneyShopInfo::ret() const {
  return ret_;
}
inline void AckMoneyShopInfo::set_ret(::google::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
}

// optional int32 freeNum = 2;
inline bool AckMoneyShopInfo::has_freenum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AckMoneyShopInfo::set_has_freenum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AckMoneyShopInfo::clear_has_freenum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AckMoneyShopInfo::clear_freenum() {
  freenum_ = 0;
  clear_has_freenum();
}
inline ::google::protobuf::int32 AckMoneyShopInfo::freenum() const {
  return freenum_;
}
inline void AckMoneyShopInfo::set_freenum(::google::protobuf::int32 value) {
  set_has_freenum();
  freenum_ = value;
}

// optional int32 costNum = 3;
inline bool AckMoneyShopInfo::has_costnum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AckMoneyShopInfo::set_has_costnum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AckMoneyShopInfo::clear_has_costnum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AckMoneyShopInfo::clear_costnum() {
  costnum_ = 0;
  clear_has_costnum();
}
inline ::google::protobuf::int32 AckMoneyShopInfo::costnum() const {
  return costnum_;
}
inline void AckMoneyShopInfo::set_costnum(::google::protobuf::int32 value) {
  set_has_costnum();
  costnum_ = value;
}

// -------------------------------------------------------------------

// AckExchangeMoney

// required int32 ret = 1;
inline bool AckExchangeMoney::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AckExchangeMoney::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AckExchangeMoney::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AckExchangeMoney::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
inline ::google::protobuf::int32 AckExchangeMoney::ret() const {
  return ret_;
}
inline void AckExchangeMoney::set_ret(::google::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
}

// optional int32 money = 2;
inline bool AckExchangeMoney::has_money() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AckExchangeMoney::set_has_money() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AckExchangeMoney::clear_has_money() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AckExchangeMoney::clear_money() {
  money_ = 0;
  clear_has_money();
}
inline ::google::protobuf::int32 AckExchangeMoney::money() const {
  return money_;
}
inline void AckExchangeMoney::set_money(::google::protobuf::int32 value) {
  set_has_money();
  money_ = value;
}

// optional int32 freeNum = 3;
inline bool AckExchangeMoney::has_freenum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AckExchangeMoney::set_has_freenum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AckExchangeMoney::clear_has_freenum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AckExchangeMoney::clear_freenum() {
  freenum_ = 0;
  clear_has_freenum();
}
inline ::google::protobuf::int32 AckExchangeMoney::freenum() const {
  return freenum_;
}
inline void AckExchangeMoney::set_freenum(::google::protobuf::int32 value) {
  set_has_freenum();
  freenum_ = value;
}

// optional int32 costNum = 4;
inline bool AckExchangeMoney::has_costnum() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AckExchangeMoney::set_has_costnum() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AckExchangeMoney::clear_has_costnum() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AckExchangeMoney::clear_costnum() {
  costnum_ = 0;
  clear_has_costnum();
}
inline ::google::protobuf::int32 AckExchangeMoney::costnum() const {
  return costnum_;
}
inline void AckExchangeMoney::set_costnum(::google::protobuf::int32 value) {
  set_has_costnum();
  costnum_ = value;
}

// optional int32 critValue = 5;
inline bool AckExchangeMoney::has_critvalue() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AckExchangeMoney::set_has_critvalue() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AckExchangeMoney::clear_has_critvalue() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AckExchangeMoney::clear_critvalue() {
  critvalue_ = 0;
  clear_has_critvalue();
}
inline ::google::protobuf::int32 AckExchangeMoney::critvalue() const {
  return critvalue_;
}
inline void AckExchangeMoney::set_critvalue(::google::protobuf::int32 value) {
  set_has_critvalue();
  critvalue_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MoneyShopInfo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CharLogin_2fMoneyShop_2eproto__INCLUDED
