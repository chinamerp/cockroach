// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/pkg/roachpb/internal.proto

#ifndef PROTOBUF_cockroach_2fpkg_2froachpb_2finternal_2eproto__INCLUDED
#define PROTOBUF_cockroach_2fpkg_2froachpb_2finternal_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace cockroach {
namespace roachpb {
class InternalTimeSeriesData;
class InternalTimeSeriesDataDefaultTypeInternal;
extern InternalTimeSeriesDataDefaultTypeInternal _InternalTimeSeriesData_default_instance_;
class InternalTimeSeriesSample;
class InternalTimeSeriesSampleDefaultTypeInternal;
extern InternalTimeSeriesSampleDefaultTypeInternal _InternalTimeSeriesSample_default_instance_;
}  // namespace roachpb
}  // namespace cockroach

namespace cockroach {
namespace roachpb {

namespace protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto

// ===================================================================

class InternalTimeSeriesData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:cockroach.roachpb.InternalTimeSeriesData) */ {
 public:
  InternalTimeSeriesData();
  virtual ~InternalTimeSeriesData();

  InternalTimeSeriesData(const InternalTimeSeriesData& from);

  inline InternalTimeSeriesData& operator=(const InternalTimeSeriesData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InternalTimeSeriesData(InternalTimeSeriesData&& from) noexcept
    : InternalTimeSeriesData() {
    *this = ::std::move(from);
  }

  inline InternalTimeSeriesData& operator=(InternalTimeSeriesData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const InternalTimeSeriesData& default_instance();

  static inline const InternalTimeSeriesData* internal_default_instance() {
    return reinterpret_cast<const InternalTimeSeriesData*>(
               &_InternalTimeSeriesData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(InternalTimeSeriesData* other);
  friend void swap(InternalTimeSeriesData& a, InternalTimeSeriesData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InternalTimeSeriesData* New() const PROTOBUF_FINAL { return New(NULL); }

  InternalTimeSeriesData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const InternalTimeSeriesData& from);
  void MergeFrom(const InternalTimeSeriesData& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(InternalTimeSeriesData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  int samples_size() const;
  void clear_samples();
  static const int kSamplesFieldNumber = 3;
  const ::cockroach::roachpb::InternalTimeSeriesSample& samples(int index) const;
  ::cockroach::roachpb::InternalTimeSeriesSample* mutable_samples(int index);
  ::cockroach::roachpb::InternalTimeSeriesSample* add_samples();
  ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >*
      mutable_samples();
  const ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >&
      samples() const;

  bool has_start_timestamp_nanos() const;
  void clear_start_timestamp_nanos();
  static const int kStartTimestampNanosFieldNumber = 1;
  ::google::protobuf::int64 start_timestamp_nanos() const;
  void set_start_timestamp_nanos(::google::protobuf::int64 value);

  bool has_sample_duration_nanos() const;
  void clear_sample_duration_nanos();
  static const int kSampleDurationNanosFieldNumber = 2;
  ::google::protobuf::int64 sample_duration_nanos() const;
  void set_sample_duration_nanos(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:cockroach.roachpb.InternalTimeSeriesData)
 private:
  void set_has_start_timestamp_nanos();
  void clear_has_start_timestamp_nanos();
  void set_has_sample_duration_nanos();
  void clear_has_sample_duration_nanos();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample > samples_;
  ::google::protobuf::int64 start_timestamp_nanos_;
  ::google::protobuf::int64 sample_duration_nanos_;
  friend struct protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class InternalTimeSeriesSample : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:cockroach.roachpb.InternalTimeSeriesSample) */ {
 public:
  InternalTimeSeriesSample();
  virtual ~InternalTimeSeriesSample();

  InternalTimeSeriesSample(const InternalTimeSeriesSample& from);

  inline InternalTimeSeriesSample& operator=(const InternalTimeSeriesSample& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InternalTimeSeriesSample(InternalTimeSeriesSample&& from) noexcept
    : InternalTimeSeriesSample() {
    *this = ::std::move(from);
  }

  inline InternalTimeSeriesSample& operator=(InternalTimeSeriesSample&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const InternalTimeSeriesSample& default_instance();

  static inline const InternalTimeSeriesSample* internal_default_instance() {
    return reinterpret_cast<const InternalTimeSeriesSample*>(
               &_InternalTimeSeriesSample_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(InternalTimeSeriesSample* other);
  friend void swap(InternalTimeSeriesSample& a, InternalTimeSeriesSample& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InternalTimeSeriesSample* New() const PROTOBUF_FINAL { return New(NULL); }

  InternalTimeSeriesSample* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const InternalTimeSeriesSample& from);
  void MergeFrom(const InternalTimeSeriesSample& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(InternalTimeSeriesSample* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  bool has_offset() const;
  void clear_offset();
  static const int kOffsetFieldNumber = 1;
  ::google::protobuf::int32 offset() const;
  void set_offset(::google::protobuf::int32 value);

  bool has_count() const;
  void clear_count();
  static const int kCountFieldNumber = 6;
  ::google::protobuf::uint32 count() const;
  void set_count(::google::protobuf::uint32 value);

  bool has_sum() const;
  void clear_sum();
  static const int kSumFieldNumber = 7;
  double sum() const;
  void set_sum(double value);

  // optional double max = 8;
  bool has_max() const;
  void clear_max();
  static const int kMaxFieldNumber = 8;
  double max() const;
  void set_max(double value);

  // optional double min = 9;
  bool has_min() const;
  void clear_min();
  static const int kMinFieldNumber = 9;
  double min() const;
  void set_min(double value);

  // @@protoc_insertion_point(class_scope:cockroach.roachpb.InternalTimeSeriesSample)
 private:
  void set_has_offset();
  void clear_has_offset();
  void set_has_sum();
  void clear_has_sum();
  void set_has_count();
  void clear_has_count();
  void set_has_max();
  void clear_has_max();
  void set_has_min();
  void clear_has_min();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 offset_;
  ::google::protobuf::uint32 count_;
  double sum_;
  double max_;
  double min_;
  friend struct protobuf_cockroach_2fpkg_2froachpb_2finternal_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InternalTimeSeriesData

inline bool InternalTimeSeriesData::has_start_timestamp_nanos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InternalTimeSeriesData::set_has_start_timestamp_nanos() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InternalTimeSeriesData::clear_has_start_timestamp_nanos() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InternalTimeSeriesData::clear_start_timestamp_nanos() {
  start_timestamp_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_start_timestamp_nanos();
}
inline ::google::protobuf::int64 InternalTimeSeriesData::start_timestamp_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
  return start_timestamp_nanos_;
}
inline void InternalTimeSeriesData::set_start_timestamp_nanos(::google::protobuf::int64 value) {
  set_has_start_timestamp_nanos();
  start_timestamp_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
}

inline bool InternalTimeSeriesData::has_sample_duration_nanos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InternalTimeSeriesData::set_has_sample_duration_nanos() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InternalTimeSeriesData::clear_has_sample_duration_nanos() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InternalTimeSeriesData::clear_sample_duration_nanos() {
  sample_duration_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_sample_duration_nanos();
}
inline ::google::protobuf::int64 InternalTimeSeriesData::sample_duration_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
  return sample_duration_nanos_;
}
inline void InternalTimeSeriesData::set_sample_duration_nanos(::google::protobuf::int64 value) {
  set_has_sample_duration_nanos();
  sample_duration_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
}

inline int InternalTimeSeriesData::samples_size() const {
  return samples_.size();
}
inline void InternalTimeSeriesData::clear_samples() {
  samples_.Clear();
}
inline const ::cockroach::roachpb::InternalTimeSeriesSample& InternalTimeSeriesData::samples(int index) const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Get(index);
}
inline ::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::mutable_samples(int index) {
  // @@protoc_insertion_point(field_mutable:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Mutable(index);
}
inline ::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::add_samples() {
  // @@protoc_insertion_point(field_add:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >*
InternalTimeSeriesData::mutable_samples() {
  // @@protoc_insertion_point(field_mutable_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return &samples_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >&
InternalTimeSeriesData::samples() const {
  // @@protoc_insertion_point(field_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_;
}

// -------------------------------------------------------------------

// InternalTimeSeriesSample

inline bool InternalTimeSeriesSample::has_offset() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InternalTimeSeriesSample::set_has_offset() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InternalTimeSeriesSample::clear_has_offset() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InternalTimeSeriesSample::clear_offset() {
  offset_ = 0;
  clear_has_offset();
}
inline ::google::protobuf::int32 InternalTimeSeriesSample::offset() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.offset)
  return offset_;
}
inline void InternalTimeSeriesSample::set_offset(::google::protobuf::int32 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.offset)
}

inline bool InternalTimeSeriesSample::has_sum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InternalTimeSeriesSample::set_has_sum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InternalTimeSeriesSample::clear_has_sum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InternalTimeSeriesSample::clear_sum() {
  sum_ = 0;
  clear_has_sum();
}
inline double InternalTimeSeriesSample::sum() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.sum)
  return sum_;
}
inline void InternalTimeSeriesSample::set_sum(double value) {
  set_has_sum();
  sum_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.sum)
}

inline bool InternalTimeSeriesSample::has_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InternalTimeSeriesSample::set_has_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InternalTimeSeriesSample::clear_has_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InternalTimeSeriesSample::clear_count() {
  count_ = 0u;
  clear_has_count();
}
inline ::google::protobuf::uint32 InternalTimeSeriesSample::count() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.count)
  return count_;
}
inline void InternalTimeSeriesSample::set_count(::google::protobuf::uint32 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.count)
}

// optional double max = 8;
inline bool InternalTimeSeriesSample::has_max() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InternalTimeSeriesSample::set_has_max() {
  _has_bits_[0] |= 0x00000008u;
}
inline void InternalTimeSeriesSample::clear_has_max() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void InternalTimeSeriesSample::clear_max() {
  max_ = 0;
  clear_has_max();
}
inline double InternalTimeSeriesSample::max() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.max)
  return max_;
}
inline void InternalTimeSeriesSample::set_max(double value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.max)
}

// optional double min = 9;
inline bool InternalTimeSeriesSample::has_min() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void InternalTimeSeriesSample::set_has_min() {
  _has_bits_[0] |= 0x00000010u;
}
inline void InternalTimeSeriesSample::clear_has_min() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void InternalTimeSeriesSample::clear_min() {
  min_ = 0;
  clear_has_min();
}
inline double InternalTimeSeriesSample::min() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.min)
  return min_;
}
inline void InternalTimeSeriesSample::set_min(double value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.min)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace roachpb
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cockroach_2fpkg_2froachpb_2finternal_2eproto__INCLUDED
