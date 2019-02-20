// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: funapi/service/multicast_message.proto

#ifndef PROTOBUF_funapi_2fservice_2fmulticast_5fmessage_2eproto__INCLUDED
#define PROTOBUF_funapi_2fservice_2fmulticast_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "funapi/network/fun_message.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void FUNAPI_API protobuf_AddDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
void protobuf_AssignDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
void protobuf_ShutdownFile_funapi_2fservice_2fmulticast_5fmessage_2eproto();

class FunMulticastChannelListMessage;
class FunMulticastMessage;
class FunChatMessage;

enum FunMulticastMessage_ErrorCode {
  FunMulticastMessage_ErrorCode_EC_ALREADY_JOINED = 1,
  FunMulticastMessage_ErrorCode_EC_ALREADY_LEFT = 2,
  FunMulticastMessage_ErrorCode_EC_FULL_MEMBER = 3,
  FunMulticastMessage_ErrorCode_EC_CLOSED = 4,
  FunMulticastMessage_ErrorCode_EC_INVALID_TOKEN = 5,
  FunMulticastMessage_ErrorCode_EC_CANNOT_CREATE_CHANNEL = 6
};
FUNAPI_API bool FunMulticastMessage_ErrorCode_IsValid(int value);
const FunMulticastMessage_ErrorCode FunMulticastMessage_ErrorCode_ErrorCode_MIN = FunMulticastMessage_ErrorCode_EC_ALREADY_JOINED;
const FunMulticastMessage_ErrorCode FunMulticastMessage_ErrorCode_ErrorCode_MAX = FunMulticastMessage_ErrorCode_EC_CANNOT_CREATE_CHANNEL;
const int FunMulticastMessage_ErrorCode_ErrorCode_ARRAYSIZE = FunMulticastMessage_ErrorCode_ErrorCode_MAX + 1;

FUNAPI_API const ::google::protobuf::EnumDescriptor* FunMulticastMessage_ErrorCode_descriptor();
inline const ::fun::string& FunMulticastMessage_ErrorCode_Name(FunMulticastMessage_ErrorCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    FunMulticastMessage_ErrorCode_descriptor(), value);
}
inline bool FunMulticastMessage_ErrorCode_Parse(
    const ::fun::string& name, FunMulticastMessage_ErrorCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FunMulticastMessage_ErrorCode>(
    FunMulticastMessage_ErrorCode_descriptor(), name, value);
}
// ===================================================================

class FUNAPI_API FunMulticastChannelListMessage : public ::google::protobuf::Message {
 public:
  FunMulticastChannelListMessage();
  virtual ~FunMulticastChannelListMessage();

  FunMulticastChannelListMessage(const FunMulticastChannelListMessage& from);

  inline FunMulticastChannelListMessage& operator=(const FunMulticastChannelListMessage& from) {
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
  static const FunMulticastChannelListMessage& default_instance();

  void Swap(FunMulticastChannelListMessage* other);

  // implements Message ----------------------------------------------

  FunMulticastChannelListMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FunMulticastChannelListMessage& from);
  void MergeFrom(const FunMulticastChannelListMessage& from);
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

  // required fun::string channel_name = 1;
  inline bool has_channel_name() const;
  inline void clear_channel_name();
  static const int kChannelNameFieldNumber = 1;
  inline const ::fun::string& channel_name() const;
  inline void set_channel_name(const ::fun::string& value);
  inline void set_channel_name(const char* value);
  inline void set_channel_name(const char* value, size_t size);
  inline ::fun::string* mutable_channel_name();
  inline ::fun::string* release_channel_name();
  inline void set_allocated_channel_name(::fun::string* channel_name);

  // optional uint32 num_members = 2;
  inline bool has_num_members() const;
  inline void clear_num_members();
  static const int kNumMembersFieldNumber = 2;
  inline ::google::protobuf::uint32 num_members() const;
  inline void set_num_members(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:FunMulticastChannelListMessage)
 private:
  inline void set_has_channel_name();
  inline void clear_has_channel_name();
  inline void set_has_num_members();
  inline void clear_has_num_members();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::fun::string* channel_name_;
  ::google::protobuf::uint32 num_members_;
  friend void FUNAPI_API protobuf_AddDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_AssignDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_funapi_2fservice_2fmulticast_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static FunMulticastChannelListMessage* default_instance_;
};
// -------------------------------------------------------------------

class FUNAPI_API FunMulticastMessage : public ::google::protobuf::Message {
 public:
  FunMulticastMessage();
  virtual ~FunMulticastMessage();

  FunMulticastMessage(const FunMulticastMessage& from);

  inline FunMulticastMessage& operator=(const FunMulticastMessage& from) {
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
  static const FunMulticastMessage& default_instance();

  void Swap(FunMulticastMessage* other);

  // implements Message ----------------------------------------------

  FunMulticastMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FunMulticastMessage& from);
  void MergeFrom(const FunMulticastMessage& from);
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

  typedef FunMulticastMessage_ErrorCode ErrorCode;
  static const ErrorCode EC_ALREADY_JOINED = FunMulticastMessage_ErrorCode_EC_ALREADY_JOINED;
  static const ErrorCode EC_ALREADY_LEFT = FunMulticastMessage_ErrorCode_EC_ALREADY_LEFT;
  static const ErrorCode EC_FULL_MEMBER = FunMulticastMessage_ErrorCode_EC_FULL_MEMBER;
  static const ErrorCode EC_CLOSED = FunMulticastMessage_ErrorCode_EC_CLOSED;
  static const ErrorCode EC_INVALID_TOKEN = FunMulticastMessage_ErrorCode_EC_INVALID_TOKEN;
  static const ErrorCode EC_CANNOT_CREATE_CHANNEL = FunMulticastMessage_ErrorCode_EC_CANNOT_CREATE_CHANNEL;
  static inline bool ErrorCode_IsValid(int value) {
    return FunMulticastMessage_ErrorCode_IsValid(value);
  }
  static const ErrorCode ErrorCode_MIN =
    FunMulticastMessage_ErrorCode_ErrorCode_MIN;
  static const ErrorCode ErrorCode_MAX =
    FunMulticastMessage_ErrorCode_ErrorCode_MAX;
  static const int ErrorCode_ARRAYSIZE =
    FunMulticastMessage_ErrorCode_ErrorCode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ErrorCode_descriptor() {
    return FunMulticastMessage_ErrorCode_descriptor();
  }
  static inline const ::fun::string& ErrorCode_Name(ErrorCode value) {
    return FunMulticastMessage_ErrorCode_Name(value);
  }
  static inline bool ErrorCode_Parse(const ::fun::string& name,
      ErrorCode* value) {
    return FunMulticastMessage_ErrorCode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional fun::string channel = 1;
  inline bool has_channel() const;
  inline void clear_channel();
  static const int kChannelFieldNumber = 1;
  inline const ::fun::string& channel() const;
  inline void set_channel(const ::fun::string& value);
  inline void set_channel(const char* value);
  inline void set_channel(const char* value, size_t size);
  inline ::fun::string* mutable_channel();
  inline ::fun::string* release_channel();
  inline void set_allocated_channel(::fun::string* channel);

  // optional bool join = 2;
  inline bool has_join() const;
  inline void clear_join();
  static const int kJoinFieldNumber = 2;
  inline bool join() const;
  inline void set_join(bool value);

  // optional bool leave = 3;
  inline bool has_leave() const;
  inline void clear_leave();
  static const int kLeaveFieldNumber = 3;
  inline bool leave() const;
  inline void set_leave(bool value);

  // optional bool bounce = 4;
  inline bool has_bounce() const;
  inline void clear_bounce();
  static const int kBounceFieldNumber = 4;
  inline bool bounce() const;
  inline void set_bounce(bool value);

  // optional fun::string sender = 5;
  inline bool has_sender() const;
  inline void clear_sender();
  static const int kSenderFieldNumber = 5;
  inline const ::fun::string& sender() const;
  inline void set_sender(const ::fun::string& value);
  inline void set_sender(const char* value);
  inline void set_sender(const char* value, size_t size);
  inline ::fun::string* mutable_sender();
  inline ::fun::string* release_sender();
  inline void set_allocated_sender(::fun::string* sender);

  // optional .FunMulticastMessage.ErrorCode error_code = 6;
  inline bool has_error_code() const;
  inline void clear_error_code();
  static const int kErrorCodeFieldNumber = 6;
  inline ::FunMulticastMessage_ErrorCode error_code() const;
  inline void set_error_code(::FunMulticastMessage_ErrorCode value);

  // repeated .FunMulticastChannelListMessage channels = 7;
  inline int channels_size() const;
  inline void clear_channels();
  static const int kChannelsFieldNumber = 7;
  inline const ::FunMulticastChannelListMessage& channels(int index) const;
  inline ::FunMulticastChannelListMessage* mutable_channels(int index);
  inline ::FunMulticastChannelListMessage* add_channels();
  inline const ::google::protobuf::RepeatedPtrField< ::FunMulticastChannelListMessage >&
      channels() const;
  inline ::google::protobuf::RepeatedPtrField< ::FunMulticastChannelListMessage >*
      mutable_channels();

  // optional fun::string token = 8;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 8;
  inline const ::fun::string& token() const;
  inline void set_token(const ::fun::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::fun::string* mutable_token();
  inline ::fun::string* release_token();
  inline void set_allocated_token(::fun::string* token);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(FunMulticastMessage)
  // @@protoc_insertion_point(class_scope:FunMulticastMessage)
 private:
  inline void set_has_channel();
  inline void clear_has_channel();
  inline void set_has_join();
  inline void clear_has_join();
  inline void set_has_leave();
  inline void clear_has_leave();
  inline void set_has_bounce();
  inline void clear_has_bounce();
  inline void set_has_sender();
  inline void clear_has_sender();
  inline void set_has_error_code();
  inline void clear_has_error_code();
  inline void set_has_token();
  inline void clear_has_token();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::fun::string* channel_;
  bool join_;
  bool leave_;
  bool bounce_;
  int error_code_;
  ::fun::string* sender_;
  ::google::protobuf::RepeatedPtrField< ::FunMulticastChannelListMessage > channels_;
  ::fun::string* token_;
  friend void FUNAPI_API protobuf_AddDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_AssignDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_funapi_2fservice_2fmulticast_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static FunMulticastMessage* default_instance_;
};
// -------------------------------------------------------------------

class FUNAPI_API FunChatMessage : public ::google::protobuf::Message {
 public:
  FunChatMessage();
  virtual ~FunChatMessage();

  FunChatMessage(const FunChatMessage& from);

  inline FunChatMessage& operator=(const FunChatMessage& from) {
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
  static const FunChatMessage& default_instance();

  void Swap(FunChatMessage* other);

  // implements Message ----------------------------------------------

  FunChatMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FunChatMessage& from);
  void MergeFrom(const FunChatMessage& from);
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

  // optional fun::string text = 1;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 1;
  inline const ::fun::string& text() const;
  inline void set_text(const ::fun::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::fun::string* mutable_text();
  inline ::fun::string* release_text();
  inline void set_allocated_text(::fun::string* text);

  // @@protoc_insertion_point(class_scope:FunChatMessage)
 private:
  inline void set_has_text();
  inline void clear_has_text();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::fun::string* text_;
  friend void FUNAPI_API protobuf_AddDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_AssignDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_funapi_2fservice_2fmulticast_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static FunChatMessage* default_instance_;
};
// ===================================================================

static const int kChatFieldNumber = 10;
FUNAPI_API extern ::google::protobuf::internal::ExtensionIdentifier< ::FunMulticastMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::FunChatMessage >, 11, false >
  chat;
static const int kMulticastFieldNumber = 8;
FUNAPI_API extern ::google::protobuf::internal::ExtensionIdentifier< ::FunMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::FunMulticastMessage >, 11, false >
  multicast;

// ===================================================================

// FunMulticastChannelListMessage

// required fun::string channel_name = 1;
inline bool FunMulticastChannelListMessage::has_channel_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FunMulticastChannelListMessage::set_has_channel_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FunMulticastChannelListMessage::clear_has_channel_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FunMulticastChannelListMessage::clear_channel_name() {
  if (channel_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_name_->clear();
  }
  clear_has_channel_name();
}
inline const ::fun::string& FunMulticastChannelListMessage::channel_name() const {
  // @@protoc_insertion_point(field_get:FunMulticastChannelListMessage.channel_name)
  return *channel_name_;
}
inline void FunMulticastChannelListMessage::set_channel_name(const ::fun::string& value) {
  set_has_channel_name();
  if (channel_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_name_ = new ::fun::string;
  }
  channel_name_->assign(value);
  // @@protoc_insertion_point(field_set:FunMulticastChannelListMessage.channel_name)
}
inline void FunMulticastChannelListMessage::set_channel_name(const char* value) {
  set_has_channel_name();
  if (channel_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_name_ = new ::fun::string;
  }
  channel_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunMulticastChannelListMessage.channel_name)
}
inline void FunMulticastChannelListMessage::set_channel_name(const char* value, size_t size) {
  set_has_channel_name();
  if (channel_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_name_ = new ::fun::string;
  }
  channel_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunMulticastChannelListMessage.channel_name)
}
inline ::fun::string* FunMulticastChannelListMessage::mutable_channel_name() {
  set_has_channel_name();
  if (channel_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_name_ = new ::fun::string;
  }
  // @@protoc_insertion_point(field_mutable:FunMulticastChannelListMessage.channel_name)
  return channel_name_;
}
inline ::fun::string* FunMulticastChannelListMessage::release_channel_name() {
  clear_has_channel_name();
  if (channel_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::fun::string* temp = channel_name_;
    channel_name_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunMulticastChannelListMessage::set_allocated_channel_name(::fun::string* channel_name) {
  if (channel_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete channel_name_;
  }
  if (channel_name) {
    set_has_channel_name();
    channel_name_ = channel_name;
  } else {
    clear_has_channel_name();
    channel_name_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunMulticastChannelListMessage.channel_name)
}

// optional uint32 num_members = 2;
inline bool FunMulticastChannelListMessage::has_num_members() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FunMulticastChannelListMessage::set_has_num_members() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FunMulticastChannelListMessage::clear_has_num_members() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FunMulticastChannelListMessage::clear_num_members() {
  num_members_ = 0u;
  clear_has_num_members();
}
inline ::google::protobuf::uint32 FunMulticastChannelListMessage::num_members() const {
  // @@protoc_insertion_point(field_get:FunMulticastChannelListMessage.num_members)
  return num_members_;
}
inline void FunMulticastChannelListMessage::set_num_members(::google::protobuf::uint32 value) {
  set_has_num_members();
  num_members_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastChannelListMessage.num_members)
}

// -------------------------------------------------------------------

// FunMulticastMessage

// optional fun::string channel = 1;
inline bool FunMulticastMessage::has_channel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FunMulticastMessage::set_has_channel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FunMulticastMessage::clear_has_channel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FunMulticastMessage::clear_channel() {
  if (channel_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_->clear();
  }
  clear_has_channel();
}
inline const ::fun::string& FunMulticastMessage::channel() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.channel)
  return *channel_;
}
inline void FunMulticastMessage::set_channel(const ::fun::string& value) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::fun::string;
  }
  channel_->assign(value);
  // @@protoc_insertion_point(field_set:FunMulticastMessage.channel)
}
inline void FunMulticastMessage::set_channel(const char* value) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::fun::string;
  }
  channel_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunMulticastMessage.channel)
}
inline void FunMulticastMessage::set_channel(const char* value, size_t size) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::fun::string;
  }
  channel_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunMulticastMessage.channel)
}
inline ::fun::string* FunMulticastMessage::mutable_channel() {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::fun::string;
  }
  // @@protoc_insertion_point(field_mutable:FunMulticastMessage.channel)
  return channel_;
}
inline ::fun::string* FunMulticastMessage::release_channel() {
  clear_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::fun::string* temp = channel_;
    channel_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunMulticastMessage::set_allocated_channel(::fun::string* channel) {
  if (channel_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete channel_;
  }
  if (channel) {
    set_has_channel();
    channel_ = channel;
  } else {
    clear_has_channel();
    channel_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunMulticastMessage.channel)
}

// optional bool join = 2;
inline bool FunMulticastMessage::has_join() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FunMulticastMessage::set_has_join() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FunMulticastMessage::clear_has_join() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FunMulticastMessage::clear_join() {
  join_ = false;
  clear_has_join();
}
inline bool FunMulticastMessage::join() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.join)
  return join_;
}
inline void FunMulticastMessage::set_join(bool value) {
  set_has_join();
  join_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastMessage.join)
}

// optional bool leave = 3;
inline bool FunMulticastMessage::has_leave() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FunMulticastMessage::set_has_leave() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FunMulticastMessage::clear_has_leave() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FunMulticastMessage::clear_leave() {
  leave_ = false;
  clear_has_leave();
}
inline bool FunMulticastMessage::leave() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.leave)
  return leave_;
}
inline void FunMulticastMessage::set_leave(bool value) {
  set_has_leave();
  leave_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastMessage.leave)
}

// optional bool bounce = 4;
inline bool FunMulticastMessage::has_bounce() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FunMulticastMessage::set_has_bounce() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FunMulticastMessage::clear_has_bounce() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FunMulticastMessage::clear_bounce() {
  bounce_ = false;
  clear_has_bounce();
}
inline bool FunMulticastMessage::bounce() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.bounce)
  return bounce_;
}
inline void FunMulticastMessage::set_bounce(bool value) {
  set_has_bounce();
  bounce_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastMessage.bounce)
}

// optional fun::string sender = 5;
inline bool FunMulticastMessage::has_sender() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void FunMulticastMessage::set_has_sender() {
  _has_bits_[0] |= 0x00000010u;
}
inline void FunMulticastMessage::clear_has_sender() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void FunMulticastMessage::clear_sender() {
  if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_->clear();
  }
  clear_has_sender();
}
inline const ::fun::string& FunMulticastMessage::sender() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.sender)
  return *sender_;
}
inline void FunMulticastMessage::set_sender(const ::fun::string& value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::fun::string;
  }
  sender_->assign(value);
  // @@protoc_insertion_point(field_set:FunMulticastMessage.sender)
}
inline void FunMulticastMessage::set_sender(const char* value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::fun::string;
  }
  sender_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunMulticastMessage.sender)
}
inline void FunMulticastMessage::set_sender(const char* value, size_t size) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::fun::string;
  }
  sender_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunMulticastMessage.sender)
}
inline ::fun::string* FunMulticastMessage::mutable_sender() {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::fun::string;
  }
  // @@protoc_insertion_point(field_mutable:FunMulticastMessage.sender)
  return sender_;
}
inline ::fun::string* FunMulticastMessage::release_sender() {
  clear_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::fun::string* temp = sender_;
    sender_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunMulticastMessage::set_allocated_sender(::fun::string* sender) {
  if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sender_;
  }
  if (sender) {
    set_has_sender();
    sender_ = sender;
  } else {
    clear_has_sender();
    sender_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunMulticastMessage.sender)
}

// optional .FunMulticastMessage.ErrorCode error_code = 6;
inline bool FunMulticastMessage::has_error_code() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void FunMulticastMessage::set_has_error_code() {
  _has_bits_[0] |= 0x00000020u;
}
inline void FunMulticastMessage::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void FunMulticastMessage::clear_error_code() {
  error_code_ = 1;
  clear_has_error_code();
}
inline ::FunMulticastMessage_ErrorCode FunMulticastMessage::error_code() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.error_code)
  return static_cast< ::FunMulticastMessage_ErrorCode >(error_code_);
}
inline void FunMulticastMessage::set_error_code(::FunMulticastMessage_ErrorCode value) {
  assert(::FunMulticastMessage_ErrorCode_IsValid(value));
  set_has_error_code();
  error_code_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastMessage.error_code)
}

// repeated .FunMulticastChannelListMessage channels = 7;
inline int FunMulticastMessage::channels_size() const {
  return channels_.size();
}
inline void FunMulticastMessage::clear_channels() {
  channels_.Clear();
}
inline const ::FunMulticastChannelListMessage& FunMulticastMessage::channels(int index) const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.channels)
  return channels_.Get(index);
}
inline ::FunMulticastChannelListMessage* FunMulticastMessage::mutable_channels(int index) {
  // @@protoc_insertion_point(field_mutable:FunMulticastMessage.channels)
  return channels_.Mutable(index);
}
inline ::FunMulticastChannelListMessage* FunMulticastMessage::add_channels() {
  // @@protoc_insertion_point(field_add:FunMulticastMessage.channels)
  return channels_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::FunMulticastChannelListMessage >&
FunMulticastMessage::channels() const {
  // @@protoc_insertion_point(field_list:FunMulticastMessage.channels)
  return channels_;
}
inline ::google::protobuf::RepeatedPtrField< ::FunMulticastChannelListMessage >*
FunMulticastMessage::mutable_channels() {
  // @@protoc_insertion_point(field_mutable_list:FunMulticastMessage.channels)
  return &channels_;
}

// optional fun::string token = 8;
inline bool FunMulticastMessage::has_token() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void FunMulticastMessage::set_has_token() {
  _has_bits_[0] |= 0x00000080u;
}
inline void FunMulticastMessage::clear_has_token() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void FunMulticastMessage::clear_token() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::fun::string& FunMulticastMessage::token() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.token)
  return *token_;
}
inline void FunMulticastMessage::set_token(const ::fun::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::fun::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set:FunMulticastMessage.token)
}
inline void FunMulticastMessage::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::fun::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunMulticastMessage.token)
}
inline void FunMulticastMessage::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::fun::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunMulticastMessage.token)
}
inline ::fun::string* FunMulticastMessage::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::fun::string;
  }
  // @@protoc_insertion_point(field_mutable:FunMulticastMessage.token)
  return token_;
}
inline ::fun::string* FunMulticastMessage::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::fun::string* temp = token_;
    token_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunMulticastMessage::set_allocated_token(::fun::string* token) {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (token) {
    set_has_token();
    token_ = token;
  } else {
    clear_has_token();
    token_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunMulticastMessage.token)
}

// -------------------------------------------------------------------

// FunChatMessage

// optional fun::string text = 1;
inline bool FunChatMessage::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FunChatMessage::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FunChatMessage::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FunChatMessage::clear_text() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::fun::string& FunChatMessage::text() const {
  // @@protoc_insertion_point(field_get:FunChatMessage.text)
  return *text_;
}
inline void FunChatMessage::set_text(const ::fun::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::fun::string;
  }
  text_->assign(value);
  // @@protoc_insertion_point(field_set:FunChatMessage.text)
}
inline void FunChatMessage::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::fun::string;
  }
  text_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunChatMessage.text)
}
inline void FunChatMessage::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::fun::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunChatMessage.text)
}
inline ::fun::string* FunChatMessage::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::fun::string;
  }
  // @@protoc_insertion_point(field_mutable:FunChatMessage.text)
  return text_;
}
inline ::fun::string* FunChatMessage::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::fun::string* temp = text_;
    text_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunChatMessage::set_allocated_text(::fun::string* text) {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (text) {
    set_has_text();
    text_ = text;
  } else {
    clear_has_text();
    text_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunChatMessage.text)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::FunMulticastMessage_ErrorCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::FunMulticastMessage_ErrorCode>() {
  return ::FunMulticastMessage_ErrorCode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_funapi_2fservice_2fmulticast_5fmessage_2eproto__INCLUDED
