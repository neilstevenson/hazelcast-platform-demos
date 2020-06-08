// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtms.proto

#include "../include/mtms.pb.h"

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
namespace FlumaionQL {
class MTMDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MTM> _instance;
} _MTM_default_instance_;
}  // namespace FlumaionQL
static void InitDefaultsscc_info_MTM_mtms_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::FlumaionQL::_MTM_default_instance_;
    new (ptr) ::FlumaionQL::MTM();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::FlumaionQL::MTM::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MTM_mtms_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MTM_mtms_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mtms_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mtms_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mtms_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mtms_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, tradeid_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, curvename_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, fixlegdates_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, fixlegamount_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, fltlegdates_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, fltlegamount_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, discountvalues_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, legfractions_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, haserrored_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, error_),
  PROTOBUF_FIELD_OFFSET(::FlumaionQL::MTM, computetimemicros_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::FlumaionQL::MTM)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::FlumaionQL::_MTM_default_instance_),
};

const char descriptor_table_protodef_mtms_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nmtms.proto\022\nFlumaionQL\"\353\001\n\003MTM\022\017\n\007trad"
  "eid\030\001 \001(\t\022\021\n\tcurvename\030\002 \001(\t\022\023\n\013fixlegda"
  "tes\030\003 \003(\003\022\024\n\014fixlegamount\030\004 \003(\002\022\023\n\013fltle"
  "gdates\030\005 \003(\003\022\024\n\014fltlegamount\030\006 \003(\002\022\026\n\016di"
  "scountvalues\030\007 \003(\002\022\024\n\014legfractions\030\010 \003(\002"
  "\022\022\n\nhaserrored\030\t \001(\010\022\r\n\005error\030\n \001(\t\022\031\n\021c"
  "omputetimemicros\030\013 \001(\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mtms_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mtms_2eproto_sccs[1] = {
  &scc_info_MTM_mtms_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mtms_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mtms_2eproto = {
  false, false, descriptor_table_protodef_mtms_2eproto, "mtms.proto", 270,
  &descriptor_table_mtms_2eproto_once, descriptor_table_mtms_2eproto_sccs, descriptor_table_mtms_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_mtms_2eproto::offsets,
  file_level_metadata_mtms_2eproto, 1, file_level_enum_descriptors_mtms_2eproto, file_level_service_descriptors_mtms_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mtms_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mtms_2eproto)), true);
namespace FlumaionQL {

// ===================================================================

void MTM::InitAsDefaultInstance() {
}
class MTM::_Internal {
 public:
};

MTM::MTM(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  fixlegdates_(arena),
  fixlegamount_(arena),
  fltlegdates_(arena),
  fltlegamount_(arena),
  discountvalues_(arena),
  legfractions_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:FlumaionQL.MTM)
}
MTM::MTM(const MTM& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      fixlegdates_(from.fixlegdates_),
      fixlegamount_(from.fixlegamount_),
      fltlegdates_(from.fltlegdates_),
      fltlegamount_(from.fltlegamount_),
      discountvalues_(from.discountvalues_),
      legfractions_(from.legfractions_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  tradeid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_tradeid().empty()) {
    tradeid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_tradeid(),
      GetArena());
  }
  curvename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_curvename().empty()) {
    curvename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_curvename(),
      GetArena());
  }
  error_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_error().empty()) {
    error_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_error(),
      GetArena());
  }
  ::memcpy(&computetimemicros_, &from.computetimemicros_,
    static_cast<size_t>(reinterpret_cast<char*>(&haserrored_) -
    reinterpret_cast<char*>(&computetimemicros_)) + sizeof(haserrored_));
  // @@protoc_insertion_point(copy_constructor:FlumaionQL.MTM)
}

void MTM::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MTM_mtms_2eproto.base);
  tradeid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  curvename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&computetimemicros_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&haserrored_) -
      reinterpret_cast<char*>(&computetimemicros_)) + sizeof(haserrored_));
}

MTM::~MTM() {
  // @@protoc_insertion_point(destructor:FlumaionQL.MTM)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MTM::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  tradeid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  curvename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void MTM::ArenaDtor(void* object) {
  MTM* _this = reinterpret_cast< MTM* >(object);
  (void)_this;
}
void MTM::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MTM::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MTM& MTM::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MTM_mtms_2eproto.base);
  return *internal_default_instance();
}


void MTM::Clear() {
// @@protoc_insertion_point(message_clear_start:FlumaionQL.MTM)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  fixlegdates_.Clear();
  fixlegamount_.Clear();
  fltlegdates_.Clear();
  fltlegamount_.Clear();
  discountvalues_.Clear();
  legfractions_.Clear();
  tradeid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  curvename_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  error_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&computetimemicros_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&haserrored_) -
      reinterpret_cast<char*>(&computetimemicros_)) + sizeof(haserrored_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MTM::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string tradeid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_tradeid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "FlumaionQL.MTM.tradeid"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string curvename = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_curvename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "FlumaionQL.MTM.curvename"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int64 fixlegdates = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_fixlegdates(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24) {
          _internal_add_fixlegdates(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float fixlegamount = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_fixlegamount(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37) {
          _internal_add_fixlegamount(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated int64 fltlegdates = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_fltlegdates(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40) {
          _internal_add_fltlegdates(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float fltlegamount = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_fltlegamount(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53) {
          _internal_add_fltlegamount(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float discountvalues = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_discountvalues(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61) {
          _internal_add_discountvalues(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float legfractions = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_legfractions(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 69) {
          _internal_add_legfractions(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // bool haserrored = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          haserrored_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string error = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_error();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "FlumaionQL.MTM.error"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 computetimemicros = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          computetimemicros_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MTM::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FlumaionQL.MTM)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string tradeid = 1;
  if (this->tradeid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tradeid().data(), static_cast<int>(this->_internal_tradeid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FlumaionQL.MTM.tradeid");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_tradeid(), target);
  }

  // string curvename = 2;
  if (this->curvename().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_curvename().data(), static_cast<int>(this->_internal_curvename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FlumaionQL.MTM.curvename");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_curvename(), target);
  }

  // repeated int64 fixlegdates = 3;
  {
    int byte_size = _fixlegdates_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          3, _internal_fixlegdates(), byte_size, target);
    }
  }

  // repeated float fixlegamount = 4;
  if (this->_internal_fixlegamount_size() > 0) {
    target = stream->WriteFixedPacked(4, _internal_fixlegamount(), target);
  }

  // repeated int64 fltlegdates = 5;
  {
    int byte_size = _fltlegdates_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          5, _internal_fltlegdates(), byte_size, target);
    }
  }

  // repeated float fltlegamount = 6;
  if (this->_internal_fltlegamount_size() > 0) {
    target = stream->WriteFixedPacked(6, _internal_fltlegamount(), target);
  }

  // repeated float discountvalues = 7;
  if (this->_internal_discountvalues_size() > 0) {
    target = stream->WriteFixedPacked(7, _internal_discountvalues(), target);
  }

  // repeated float legfractions = 8;
  if (this->_internal_legfractions_size() > 0) {
    target = stream->WriteFixedPacked(8, _internal_legfractions(), target);
  }

  // bool haserrored = 9;
  if (this->haserrored() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(9, this->_internal_haserrored(), target);
  }

  // string error = 10;
  if (this->error().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_error().data(), static_cast<int>(this->_internal_error().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FlumaionQL.MTM.error");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_error(), target);
  }

  // int64 computetimemicros = 11;
  if (this->computetimemicros() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(11, this->_internal_computetimemicros(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FlumaionQL.MTM)
  return target;
}

size_t MTM::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FlumaionQL.MTM)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 fixlegdates = 3;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int64Size(this->fixlegdates_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _fixlegdates_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float fixlegamount = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_fixlegamount_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _fixlegamount_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated int64 fltlegdates = 5;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int64Size(this->fltlegdates_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _fltlegdates_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float fltlegamount = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_fltlegamount_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _fltlegamount_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float discountvalues = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_discountvalues_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _discountvalues_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float legfractions = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_legfractions_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _legfractions_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string tradeid = 1;
  if (this->tradeid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tradeid());
  }

  // string curvename = 2;
  if (this->curvename().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_curvename());
  }

  // string error = 10;
  if (this->error().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_error());
  }

  // int64 computetimemicros = 11;
  if (this->computetimemicros() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_computetimemicros());
  }

  // bool haserrored = 9;
  if (this->haserrored() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MTM::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:FlumaionQL.MTM)
  GOOGLE_DCHECK_NE(&from, this);
  const MTM* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MTM>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:FlumaionQL.MTM)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:FlumaionQL.MTM)
    MergeFrom(*source);
  }
}

void MTM::MergeFrom(const MTM& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FlumaionQL.MTM)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  fixlegdates_.MergeFrom(from.fixlegdates_);
  fixlegamount_.MergeFrom(from.fixlegamount_);
  fltlegdates_.MergeFrom(from.fltlegdates_);
  fltlegamount_.MergeFrom(from.fltlegamount_);
  discountvalues_.MergeFrom(from.discountvalues_);
  legfractions_.MergeFrom(from.legfractions_);
  if (from.tradeid().size() > 0) {
    _internal_set_tradeid(from._internal_tradeid());
  }
  if (from.curvename().size() > 0) {
    _internal_set_curvename(from._internal_curvename());
  }
  if (from.error().size() > 0) {
    _internal_set_error(from._internal_error());
  }
  if (from.computetimemicros() != 0) {
    _internal_set_computetimemicros(from._internal_computetimemicros());
  }
  if (from.haserrored() != 0) {
    _internal_set_haserrored(from._internal_haserrored());
  }
}

void MTM::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:FlumaionQL.MTM)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MTM::CopyFrom(const MTM& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FlumaionQL.MTM)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MTM::IsInitialized() const {
  return true;
}

void MTM::InternalSwap(MTM* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  fixlegdates_.InternalSwap(&other->fixlegdates_);
  fixlegamount_.InternalSwap(&other->fixlegamount_);
  fltlegdates_.InternalSwap(&other->fltlegdates_);
  fltlegamount_.InternalSwap(&other->fltlegamount_);
  discountvalues_.InternalSwap(&other->discountvalues_);
  legfractions_.InternalSwap(&other->legfractions_);
  tradeid_.Swap(&other->tradeid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  curvename_.Swap(&other->curvename_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  error_.Swap(&other->error_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MTM, haserrored_)
      + sizeof(MTM::haserrored_)
      - PROTOBUF_FIELD_OFFSET(MTM, computetimemicros_)>(
          reinterpret_cast<char*>(&computetimemicros_),
          reinterpret_cast<char*>(&other->computetimemicros_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MTM::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace FlumaionQL
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::FlumaionQL::MTM* Arena::CreateMaybeMessage< ::FlumaionQL::MTM >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FlumaionQL::MTM >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
