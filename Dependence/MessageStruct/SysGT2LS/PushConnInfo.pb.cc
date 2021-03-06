// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SysGT2LS/PushConnInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SysGT2LS/PushConnInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ServerMessage {

namespace {

const ::google::protobuf::Descriptor* GtTologinConnInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GtTologinConnInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SysGT2LS_2fPushConnInfo_2eproto() {
  protobuf_AddDesc_SysGT2LS_2fPushConnInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SysGT2LS/PushConnInfo.proto");
  GOOGLE_CHECK(file != NULL);
  GtTologinConnInfo_descriptor_ = file->message_type(0);
  static const int GtTologinConnInfo_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GtTologinConnInfo, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GtTologinConnInfo, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GtTologinConnInfo, svrid_),
  };
  GtTologinConnInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GtTologinConnInfo_descriptor_,
      GtTologinConnInfo::default_instance_,
      GtTologinConnInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GtTologinConnInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GtTologinConnInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GtTologinConnInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SysGT2LS_2fPushConnInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GtTologinConnInfo_descriptor_, &GtTologinConnInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SysGT2LS_2fPushConnInfo_2eproto() {
  delete GtTologinConnInfo::default_instance_;
  delete GtTologinConnInfo_reflection_;
}

void protobuf_AddDesc_SysGT2LS_2fPushConnInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033SysGT2LS/PushConnInfo.proto\022\rServerMes"
    "sage\"<\n\021GtTologinConnInfo\022\n\n\002ip\030\001 \002(\t\022\014\n"
    "\004port\030\002 \002(\005\022\r\n\005svrID\030\003 \002(\005", 106);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SysGT2LS/PushConnInfo.proto", &protobuf_RegisterTypes);
  GtTologinConnInfo::default_instance_ = new GtTologinConnInfo();
  GtTologinConnInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SysGT2LS_2fPushConnInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SysGT2LS_2fPushConnInfo_2eproto {
  StaticDescriptorInitializer_SysGT2LS_2fPushConnInfo_2eproto() {
    protobuf_AddDesc_SysGT2LS_2fPushConnInfo_2eproto();
  }
} static_descriptor_initializer_SysGT2LS_2fPushConnInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int GtTologinConnInfo::kIpFieldNumber;
const int GtTologinConnInfo::kPortFieldNumber;
const int GtTologinConnInfo::kSvrIDFieldNumber;
#endif  // !_MSC_VER

GtTologinConnInfo::GtTologinConnInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GtTologinConnInfo::InitAsDefaultInstance() {
}

GtTologinConnInfo::GtTologinConnInfo(const GtTologinConnInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GtTologinConnInfo::SharedCtor() {
  _cached_size_ = 0;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  port_ = 0;
  svrid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GtTologinConnInfo::~GtTologinConnInfo() {
  SharedDtor();
}

void GtTologinConnInfo::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void GtTologinConnInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GtTologinConnInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GtTologinConnInfo_descriptor_;
}

const GtTologinConnInfo& GtTologinConnInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SysGT2LS_2fPushConnInfo_2eproto();
  return *default_instance_;
}

GtTologinConnInfo* GtTologinConnInfo::default_instance_ = NULL;

GtTologinConnInfo* GtTologinConnInfo::New() const {
  return new GtTologinConnInfo;
}

void GtTologinConnInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    port_ = 0;
    svrid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GtTologinConnInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string ip = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_port;
        break;
      }

      // required int32 port = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_svrID;
        break;
      }

      // required int32 svrID = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_svrID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &svrid_)));
          set_has_svrid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void GtTologinConnInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->ip(), output);
  }

  // required int32 port = 2;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->port(), output);
  }

  // required int32 svrID = 3;
  if (has_svrid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->svrid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GtTologinConnInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip(), target);
  }

  // required int32 port = 2;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->port(), target);
  }

  // required int32 svrID = 3;
  if (has_svrid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->svrid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GtTologinConnInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string ip = 1;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

    // required int32 port = 2;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

    // required int32 svrID = 3;
    if (has_svrid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->svrid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GtTologinConnInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GtTologinConnInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GtTologinConnInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GtTologinConnInfo::MergeFrom(const GtTologinConnInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_svrid()) {
      set_svrid(from.svrid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GtTologinConnInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GtTologinConnInfo::CopyFrom(const GtTologinConnInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GtTologinConnInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void GtTologinConnInfo::Swap(GtTologinConnInfo* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(svrid_, other->svrid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GtTologinConnInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GtTologinConnInfo_descriptor_;
  metadata.reflection = GtTologinConnInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ServerMessage

// @@protoc_insertion_point(global_scope)
