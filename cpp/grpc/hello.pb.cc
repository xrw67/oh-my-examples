// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#include "hello.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace hello {
PROTOBUF_CONSTEXPR GetRequest::GetRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.msg_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetRequestDefaultTypeInternal() {}
  union {
    GetRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetRequestDefaultTypeInternal _GetRequest_default_instance_;
PROTOBUF_CONSTEXPR GetResponse::GetResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.msg_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetResponseDefaultTypeInternal() {}
  union {
    GetResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetResponseDefaultTypeInternal _GetResponse_default_instance_;
PROTOBUF_CONSTEXPR PostRequest::PostRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PostRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PostRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PostRequestDefaultTypeInternal() {}
  union {
    PostRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PostRequestDefaultTypeInternal _PostRequest_default_instance_;
PROTOBUF_CONSTEXPR PostResponse::PostResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.msg_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PostResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PostResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PostResponseDefaultTypeInternal() {}
  union {
    PostResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PostResponseDefaultTypeInternal _PostResponse_default_instance_;
}  // namespace hello
static ::_pb::Metadata file_level_metadata_hello_2eproto[4];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_hello_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_hello_2eproto = nullptr;

const uint32_t TableStruct_hello_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::hello::GetRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hello::GetRequest, _impl_.msg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::hello::GetResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hello::GetResponse, _impl_.msg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::hello::PostRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hello::PostRequest, _impl_.data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::hello::PostResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hello::PostResponse, _impl_.msg_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::hello::GetRequest)},
  { 7, -1, -1, sizeof(::hello::GetResponse)},
  { 14, -1, -1, sizeof(::hello::PostRequest)},
  { 21, -1, -1, sizeof(::hello::PostResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::hello::_GetRequest_default_instance_._instance,
  &::hello::_GetResponse_default_instance_._instance,
  &::hello::_PostRequest_default_instance_._instance,
  &::hello::_PostResponse_default_instance_._instance,
};

const char descriptor_table_protodef_hello_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013hello.proto\022\005hello\"\031\n\nGetRequest\022\013\n\003ms"
  "g\030\001 \001(\t\"\032\n\013GetResponse\022\013\n\003msg\030\001 \001(\t\"\033\n\013P"
  "ostRequest\022\014\n\004data\030\001 \001(\014\"\033\n\014PostResponse"
  "\022\013\n\003msg\030\001 \001(\t2s\n\014HelloService\022.\n\003Get\022\021.h"
  "ello.GetRequest\032\022.hello.GetResponse\"\000\0223\n"
  "\004Post\022\022.hello.PostRequest\032\023.hello.PostRe"
  "sponse\"\000(\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_hello_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_hello_2eproto = {
    false, false, 258, descriptor_table_protodef_hello_2eproto,
    "hello.proto",
    &descriptor_table_hello_2eproto_once, nullptr, 0, 4,
    schemas, file_default_instances, TableStruct_hello_2eproto::offsets,
    file_level_metadata_hello_2eproto, file_level_enum_descriptors_hello_2eproto,
    file_level_service_descriptors_hello_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_hello_2eproto_getter() {
  return &descriptor_table_hello_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_hello_2eproto(&descriptor_table_hello_2eproto);
namespace hello {

// ===================================================================

class GetRequest::_Internal {
 public:
};

GetRequest::GetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hello.GetRequest)
}
GetRequest::GetRequest(const GetRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.msg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.msg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_msg().empty()) {
    _this->_impl_.msg_.Set(from._internal_msg(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:hello.GetRequest)
}

inline void GetRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.msg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.msg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GetRequest::~GetRequest() {
  // @@protoc_insertion_point(destructor:hello.GetRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.msg_.Destroy();
}

void GetRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.GetRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.msg_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string msg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_msg();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "hello.GetRequest.msg"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hello.GetRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_msg().data(), static_cast<int>(this->_internal_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "hello.GetRequest.msg");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_msg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.GetRequest)
  return target;
}

size_t GetRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.GetRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetRequest::GetClassData() const { return &_class_data_; }


void GetRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetRequest*>(&to_msg);
  auto& from = static_cast<const GetRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hello.GetRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_msg().empty()) {
    _this->_internal_set_msg(from._internal_msg());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetRequest::CopyFrom(const GetRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.GetRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetRequest::IsInitialized() const {
  return true;
}

void GetRequest::InternalSwap(GetRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.msg_, lhs_arena,
      &other->_impl_.msg_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GetRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hello_2eproto_getter, &descriptor_table_hello_2eproto_once,
      file_level_metadata_hello_2eproto[0]);
}

// ===================================================================

class GetResponse::_Internal {
 public:
};

GetResponse::GetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hello.GetResponse)
}
GetResponse::GetResponse(const GetResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.msg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.msg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_msg().empty()) {
    _this->_impl_.msg_.Set(from._internal_msg(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:hello.GetResponse)
}

inline void GetResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.msg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.msg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GetResponse::~GetResponse() {
  // @@protoc_insertion_point(destructor:hello.GetResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.msg_.Destroy();
}

void GetResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.GetResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.msg_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string msg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_msg();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "hello.GetResponse.msg"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hello.GetResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_msg().data(), static_cast<int>(this->_internal_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "hello.GetResponse.msg");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_msg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.GetResponse)
  return target;
}

size_t GetResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.GetResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetResponse::GetClassData() const { return &_class_data_; }


void GetResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetResponse*>(&to_msg);
  auto& from = static_cast<const GetResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hello.GetResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_msg().empty()) {
    _this->_internal_set_msg(from._internal_msg());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetResponse::CopyFrom(const GetResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.GetResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetResponse::IsInitialized() const {
  return true;
}

void GetResponse::InternalSwap(GetResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.msg_, lhs_arena,
      &other->_impl_.msg_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GetResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hello_2eproto_getter, &descriptor_table_hello_2eproto_once,
      file_level_metadata_hello_2eproto[1]);
}

// ===================================================================

class PostRequest::_Internal {
 public:
};

PostRequest::PostRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hello.PostRequest)
}
PostRequest::PostRequest(const PostRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PostRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    _this->_impl_.data_.Set(from._internal_data(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:hello.PostRequest)
}

inline void PostRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PostRequest::~PostRequest() {
  // @@protoc_insertion_point(destructor:hello.PostRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PostRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.data_.Destroy();
}

void PostRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PostRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.PostRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PostRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* PostRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hello.PostRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.PostRequest)
  return target;
}

size_t PostRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.PostRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PostRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PostRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PostRequest::GetClassData() const { return &_class_data_; }


void PostRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PostRequest*>(&to_msg);
  auto& from = static_cast<const PostRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hello.PostRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_data().empty()) {
    _this->_internal_set_data(from._internal_data());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PostRequest::CopyFrom(const PostRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.PostRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PostRequest::IsInitialized() const {
  return true;
}

void PostRequest::InternalSwap(PostRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.data_, lhs_arena,
      &other->_impl_.data_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata PostRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hello_2eproto_getter, &descriptor_table_hello_2eproto_once,
      file_level_metadata_hello_2eproto[2]);
}

// ===================================================================

class PostResponse::_Internal {
 public:
};

PostResponse::PostResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hello.PostResponse)
}
PostResponse::PostResponse(const PostResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PostResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.msg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.msg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_msg().empty()) {
    _this->_impl_.msg_.Set(from._internal_msg(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:hello.PostResponse)
}

inline void PostResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.msg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.msg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PostResponse::~PostResponse() {
  // @@protoc_insertion_point(destructor:hello.PostResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PostResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.msg_.Destroy();
}

void PostResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PostResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.PostResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.msg_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PostResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string msg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_msg();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "hello.PostResponse.msg"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* PostResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hello.PostResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_msg().data(), static_cast<int>(this->_internal_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "hello.PostResponse.msg");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_msg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.PostResponse)
  return target;
}

size_t PostResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.PostResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 1;
  if (!this->_internal_msg().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PostResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PostResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PostResponse::GetClassData() const { return &_class_data_; }


void PostResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PostResponse*>(&to_msg);
  auto& from = static_cast<const PostResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hello.PostResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_msg().empty()) {
    _this->_internal_set_msg(from._internal_msg());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PostResponse::CopyFrom(const PostResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.PostResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PostResponse::IsInitialized() const {
  return true;
}

void PostResponse::InternalSwap(PostResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.msg_, lhs_arena,
      &other->_impl_.msg_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata PostResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hello_2eproto_getter, &descriptor_table_hello_2eproto_once,
      file_level_metadata_hello_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace hello
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::hello::GetRequest*
Arena::CreateMaybeMessage< ::hello::GetRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hello::GetRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::hello::GetResponse*
Arena::CreateMaybeMessage< ::hello::GetResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hello::GetResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::hello::PostRequest*
Arena::CreateMaybeMessage< ::hello::PostRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hello::PostRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::hello::PostResponse*
Arena::CreateMaybeMessage< ::hello::PostResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hello::PostResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>