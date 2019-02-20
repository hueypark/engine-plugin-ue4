// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_messages.proto

#ifndef PROTOBUF_test_5fmessages_2eproto__INCLUDED
#define PROTOBUF_test_5fmessages_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "funapi/network/fun_message.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_test_5fmessages_2eproto();
void protobuf_AssignDesc_test_5fmessages_2eproto();
void protobuf_ShutdownFile_test_5fmessages_2eproto();

class PbufEchoMessage;
class PbufAnotherMessage;

// ===================================================================

class PbufEchoMessage : public ::google::protobuf::Message {
 public:
  PbufEchoMessage();
  virtual ~PbufEchoMessage();

  PbufEchoMessage(const PbufEchoMessage& from);

  inline PbufEchoMessage& operator=(const PbufEchoMessage& from) {
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
  static const PbufEchoMessage& default_instance();

  void Swap(PbufEchoMessage* other);

  // implements Message ----------------------------------------------

  PbufEchoMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PbufEchoMessage& from);
  void MergeFrom(const PbufEchoMessage& from);
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

  // required fun::string msg = 1;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 1;
  inline const ::fun::string& msg() const;
  inline void set_msg(const ::fun::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const char* value, size_t size);
  inline ::fun::string* mutable_msg();
  inline ::fun::string* release_msg();
  inline void set_allocated_msg(::fun::string* msg);

  // @@protoc_insertion_point(class_scope:PbufEchoMessage)
 private:
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::fun::string* msg_;
  friend void  protobuf_AddDesc_test_5fmessages_2eproto();
  friend void protobuf_AssignDesc_test_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_test_5fmessages_2eproto();

  void InitAsDefaultInstance();
  static PbufEchoMessage* default_instance_;
};
// -------------------------------------------------------------------

class PbufAnotherMessage : public ::google::protobuf::Message {
 public:
  PbufAnotherMessage();
  virtual ~PbufAnotherMessage();

  PbufAnotherMessage(const PbufAnotherMessage& from);

  inline PbufAnotherMessage& operator=(const PbufAnotherMessage& from) {
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
  static const PbufAnotherMessage& default_instance();

  void Swap(PbufAnotherMessage* other);

  // implements Message ----------------------------------------------

  PbufAnotherMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PbufAnotherMessage& from);
  void MergeFrom(const PbufAnotherMessage& from);
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

  // optional fun::string msg = 1;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 1;
  inline const ::fun::string& msg() const;
  inline void set_msg(const ::fun::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const char* value, size_t size);
  inline ::fun::string* mutable_msg();
  inline ::fun::string* release_msg();
  inline void set_allocated_msg(::fun::string* msg);

  // @@protoc_insertion_point(class_scope:PbufAnotherMessage)
 private:
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::fun::string* msg_;
  friend void  protobuf_AddDesc_test_5fmessages_2eproto();
  friend void protobuf_AssignDesc_test_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_test_5fmessages_2eproto();

  void InitAsDefaultInstance();
  static PbufAnotherMessage* default_instance_;
};
// ===================================================================

static const int kPbufEchoFieldNumber = 16;
extern ::google::protobuf::internal::ExtensionIdentifier< ::FunMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::PbufEchoMessage >, 11, false >
  pbuf_echo;
static const int kPbufAnotherFieldNumber = 17;
extern ::google::protobuf::internal::ExtensionIdentifier< ::FunMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::PbufAnotherMessage >, 11, false >
  pbuf_another;

// ===================================================================

// PbufEchoMessage

// required fun::string msg = 1;
inline bool PbufEchoMessage::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PbufEchoMessage::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PbufEchoMessage::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PbufEchoMessage::clear_msg() {
  if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_->clear();
  }
  clear_has_msg();
}
inline const ::fun::string& PbufEchoMessage::msg() const {
  // @@protoc_insertion_point(field_get:PbufEchoMessage.msg)
  return *msg_;
}
inline void PbufEchoMessage::set_msg(const ::fun::string& value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  msg_->assign(value);
  // @@protoc_insertion_point(field_set:PbufEchoMessage.msg)
}
inline void PbufEchoMessage::set_msg(const char* value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  msg_->assign(value);
  // @@protoc_insertion_point(field_set_char:PbufEchoMessage.msg)
}
inline void PbufEchoMessage::set_msg(const char* value, size_t size) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PbufEchoMessage.msg)
}
inline ::fun::string* PbufEchoMessage::mutable_msg() {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  // @@protoc_insertion_point(field_mutable:PbufEchoMessage.msg)
  return msg_;
}
inline ::fun::string* PbufEchoMessage::release_msg() {
  clear_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::fun::string* temp = msg_;
    msg_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void PbufEchoMessage::set_allocated_msg(::fun::string* msg) {
  if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msg_;
  }
  if (msg) {
    set_has_msg();
    msg_ = msg;
  } else {
    clear_has_msg();
    msg_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PbufEchoMessage.msg)
}

// -------------------------------------------------------------------

// PbufAnotherMessage

// optional fun::string msg = 1;
inline bool PbufAnotherMessage::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PbufAnotherMessage::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PbufAnotherMessage::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PbufAnotherMessage::clear_msg() {
  if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_->clear();
  }
  clear_has_msg();
}
inline const ::fun::string& PbufAnotherMessage::msg() const {
  // @@protoc_insertion_point(field_get:PbufAnotherMessage.msg)
  return *msg_;
}
inline void PbufAnotherMessage::set_msg(const ::fun::string& value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  msg_->assign(value);
  // @@protoc_insertion_point(field_set:PbufAnotherMessage.msg)
}
inline void PbufAnotherMessage::set_msg(const char* value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  msg_->assign(value);
  // @@protoc_insertion_point(field_set_char:PbufAnotherMessage.msg)
}
inline void PbufAnotherMessage::set_msg(const char* value, size_t size) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PbufAnotherMessage.msg)
}
inline ::fun::string* PbufAnotherMessage::mutable_msg() {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msg_ = new ::fun::string;
  }
  // @@protoc_insertion_point(field_mutable:PbufAnotherMessage.msg)
  return msg_;
}
inline ::fun::string* PbufAnotherMessage::release_msg() {
  clear_has_msg();
  if (msg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::fun::string* temp = msg_;
    msg_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void PbufAnotherMessage::set_allocated_msg(::fun::string* msg) {
  if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msg_;
  }
  if (msg) {
    set_has_msg();
    msg_ = msg;
  } else {
    clear_has_msg();
    msg_ = const_cast< ::fun::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PbufAnotherMessage.msg)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_5fmessages_2eproto__INCLUDED
