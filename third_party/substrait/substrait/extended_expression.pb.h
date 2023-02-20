// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: substrait/extended_expression.proto

#ifndef PROTOBUF_INCLUDED_substrait_2fextended_5fexpression_2eproto
#define PROTOBUF_INCLUDED_substrait_2fextended_5fexpression_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "substrait/algebra.pb.h"
#include "substrait/extensions/extensions.pb.h"
#include "substrait/plan.pb.h"
#include "substrait/type.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_substrait_2fextended_5fexpression_2eproto 

namespace protobuf_substrait_2fextended_5fexpression_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_substrait_2fextended_5fexpression_2eproto
namespace substrait {
class ExpressionReference;
class ExpressionReferenceDefaultTypeInternal;
extern ExpressionReferenceDefaultTypeInternal _ExpressionReference_default_instance_;
class ExtendedExpression;
class ExtendedExpressionDefaultTypeInternal;
extern ExtendedExpressionDefaultTypeInternal _ExtendedExpression_default_instance_;
}  // namespace substrait
namespace google {
namespace protobuf {
template<> ::substrait::ExpressionReference* Arena::CreateMaybeMessage<::substrait::ExpressionReference>(Arena*);
template<> ::substrait::ExtendedExpression* Arena::CreateMaybeMessage<::substrait::ExtendedExpression>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace substrait {

// ===================================================================

class ExpressionReference : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:substrait.ExpressionReference) */ {
 public:
  ExpressionReference();
  virtual ~ExpressionReference();

  ExpressionReference(const ExpressionReference& from);

  inline ExpressionReference& operator=(const ExpressionReference& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ExpressionReference(ExpressionReference&& from) noexcept
    : ExpressionReference() {
    *this = ::std::move(from);
  }

  inline ExpressionReference& operator=(ExpressionReference&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ExpressionReference& default_instance();

  enum ExprTypeCase {
    kExpression = 1,
    kMeasure = 2,
    EXPR_TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExpressionReference* internal_default_instance() {
    return reinterpret_cast<const ExpressionReference*>(
               &_ExpressionReference_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ExpressionReference* other);
  friend void swap(ExpressionReference& a, ExpressionReference& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExpressionReference* New() const final {
    return CreateMaybeMessage<ExpressionReference>(NULL);
  }

  ExpressionReference* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ExpressionReference>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ExpressionReference& from);
  void MergeFrom(const ExpressionReference& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ExpressionReference* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string output_names = 3;
  int output_names_size() const;
  void clear_output_names();
  static const int kOutputNamesFieldNumber = 3;
  const ::std::string& output_names(int index) const;
  ::std::string* mutable_output_names(int index);
  void set_output_names(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_output_names(int index, ::std::string&& value);
  #endif
  void set_output_names(int index, const char* value);
  void set_output_names(int index, const char* value, size_t size);
  ::std::string* add_output_names();
  void add_output_names(const ::std::string& value);
  #if LANG_CXX11
  void add_output_names(::std::string&& value);
  #endif
  void add_output_names(const char* value);
  void add_output_names(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& output_names() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_output_names();

  // .substrait.Expression expression = 1;
  bool has_expression() const;
  void clear_expression();
  static const int kExpressionFieldNumber = 1;
  private:
  const ::substrait::Expression& _internal_expression() const;
  public:
  const ::substrait::Expression& expression() const;
  ::substrait::Expression* release_expression();
  ::substrait::Expression* mutable_expression();
  void set_allocated_expression(::substrait::Expression* expression);

  // .substrait.AggregateFunction measure = 2;
  bool has_measure() const;
  void clear_measure();
  static const int kMeasureFieldNumber = 2;
  private:
  const ::substrait::AggregateFunction& _internal_measure() const;
  public:
  const ::substrait::AggregateFunction& measure() const;
  ::substrait::AggregateFunction* release_measure();
  ::substrait::AggregateFunction* mutable_measure();
  void set_allocated_measure(::substrait::AggregateFunction* measure);

  void clear_expr_type();
  ExprTypeCase expr_type_case() const;
  // @@protoc_insertion_point(class_scope:substrait.ExpressionReference)
 private:
  void set_has_expression();
  void set_has_measure();

  inline bool has_expr_type() const;
  inline void clear_has_expr_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> output_names_;
  union ExprTypeUnion {
    ExprTypeUnion() {}
    ::substrait::Expression* expression_;
    ::substrait::AggregateFunction* measure_;
  } expr_type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_substrait_2fextended_5fexpression_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ExtendedExpression : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:substrait.ExtendedExpression) */ {
 public:
  ExtendedExpression();
  virtual ~ExtendedExpression();

  ExtendedExpression(const ExtendedExpression& from);

  inline ExtendedExpression& operator=(const ExtendedExpression& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ExtendedExpression(ExtendedExpression&& from) noexcept
    : ExtendedExpression() {
    *this = ::std::move(from);
  }

  inline ExtendedExpression& operator=(ExtendedExpression&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ExtendedExpression& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExtendedExpression* internal_default_instance() {
    return reinterpret_cast<const ExtendedExpression*>(
               &_ExtendedExpression_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ExtendedExpression* other);
  friend void swap(ExtendedExpression& a, ExtendedExpression& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ExtendedExpression* New() const final {
    return CreateMaybeMessage<ExtendedExpression>(NULL);
  }

  ExtendedExpression* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ExtendedExpression>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ExtendedExpression& from);
  void MergeFrom(const ExtendedExpression& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ExtendedExpression* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .substrait.extensions.SimpleExtensionURI extension_uris = 1;
  int extension_uris_size() const;
  void clear_extension_uris();
  static const int kExtensionUrisFieldNumber = 1;
  ::substrait::extensions::SimpleExtensionURI* mutable_extension_uris(int index);
  ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionURI >*
      mutable_extension_uris();
  const ::substrait::extensions::SimpleExtensionURI& extension_uris(int index) const;
  ::substrait::extensions::SimpleExtensionURI* add_extension_uris();
  const ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionURI >&
      extension_uris() const;

  // repeated .substrait.extensions.SimpleExtensionDeclaration extensions = 2;
  int extensions_size() const;
  void clear_extensions();
  static const int kExtensionsFieldNumber = 2;
  ::substrait::extensions::SimpleExtensionDeclaration* mutable_extensions(int index);
  ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionDeclaration >*
      mutable_extensions();
  const ::substrait::extensions::SimpleExtensionDeclaration& extensions(int index) const;
  ::substrait::extensions::SimpleExtensionDeclaration* add_extensions();
  const ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionDeclaration >&
      extensions() const;

  // repeated .substrait.ExpressionReference referred_expr = 3;
  int referred_expr_size() const;
  void clear_referred_expr();
  static const int kReferredExprFieldNumber = 3;
  ::substrait::ExpressionReference* mutable_referred_expr(int index);
  ::google::protobuf::RepeatedPtrField< ::substrait::ExpressionReference >*
      mutable_referred_expr();
  const ::substrait::ExpressionReference& referred_expr(int index) const;
  ::substrait::ExpressionReference* add_referred_expr();
  const ::google::protobuf::RepeatedPtrField< ::substrait::ExpressionReference >&
      referred_expr() const;

  // repeated string expected_type_urls = 6;
  int expected_type_urls_size() const;
  void clear_expected_type_urls();
  static const int kExpectedTypeUrlsFieldNumber = 6;
  const ::std::string& expected_type_urls(int index) const;
  ::std::string* mutable_expected_type_urls(int index);
  void set_expected_type_urls(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_expected_type_urls(int index, ::std::string&& value);
  #endif
  void set_expected_type_urls(int index, const char* value);
  void set_expected_type_urls(int index, const char* value, size_t size);
  ::std::string* add_expected_type_urls();
  void add_expected_type_urls(const ::std::string& value);
  #if LANG_CXX11
  void add_expected_type_urls(::std::string&& value);
  #endif
  void add_expected_type_urls(const char* value);
  void add_expected_type_urls(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& expected_type_urls() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_expected_type_urls();

  // .substrait.NamedStruct base_schema = 4;
  bool has_base_schema() const;
  void clear_base_schema();
  static const int kBaseSchemaFieldNumber = 4;
  private:
  const ::substrait::NamedStruct& _internal_base_schema() const;
  public:
  const ::substrait::NamedStruct& base_schema() const;
  ::substrait::NamedStruct* release_base_schema();
  ::substrait::NamedStruct* mutable_base_schema();
  void set_allocated_base_schema(::substrait::NamedStruct* base_schema);

  // .substrait.extensions.AdvancedExtension advanced_extensions = 5;
  bool has_advanced_extensions() const;
  void clear_advanced_extensions();
  static const int kAdvancedExtensionsFieldNumber = 5;
  private:
  const ::substrait::extensions::AdvancedExtension& _internal_advanced_extensions() const;
  public:
  const ::substrait::extensions::AdvancedExtension& advanced_extensions() const;
  ::substrait::extensions::AdvancedExtension* release_advanced_extensions();
  ::substrait::extensions::AdvancedExtension* mutable_advanced_extensions();
  void set_allocated_advanced_extensions(::substrait::extensions::AdvancedExtension* advanced_extensions);

  // .substrait.Version version = 7;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 7;
  private:
  const ::substrait::Version& _internal_version() const;
  public:
  const ::substrait::Version& version() const;
  ::substrait::Version* release_version();
  ::substrait::Version* mutable_version();
  void set_allocated_version(::substrait::Version* version);

  // @@protoc_insertion_point(class_scope:substrait.ExtendedExpression)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionURI > extension_uris_;
  ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionDeclaration > extensions_;
  ::google::protobuf::RepeatedPtrField< ::substrait::ExpressionReference > referred_expr_;
  ::google::protobuf::RepeatedPtrField< ::std::string> expected_type_urls_;
  ::substrait::NamedStruct* base_schema_;
  ::substrait::extensions::AdvancedExtension* advanced_extensions_;
  ::substrait::Version* version_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_substrait_2fextended_5fexpression_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExpressionReference

// .substrait.Expression expression = 1;
inline bool ExpressionReference::has_expression() const {
  return expr_type_case() == kExpression;
}
inline void ExpressionReference::set_has_expression() {
  _oneof_case_[0] = kExpression;
}
inline const ::substrait::Expression& ExpressionReference::_internal_expression() const {
  return *expr_type_.expression_;
}
inline ::substrait::Expression* ExpressionReference::release_expression() {
  // @@protoc_insertion_point(field_release:substrait.ExpressionReference.expression)
  if (has_expression()) {
    clear_has_expr_type();
      ::substrait::Expression* temp = expr_type_.expression_;
    expr_type_.expression_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::substrait::Expression& ExpressionReference::expression() const {
  // @@protoc_insertion_point(field_get:substrait.ExpressionReference.expression)
  return has_expression()
      ? *expr_type_.expression_
      : *reinterpret_cast< ::substrait::Expression*>(&::substrait::_Expression_default_instance_);
}
inline ::substrait::Expression* ExpressionReference::mutable_expression() {
  if (!has_expression()) {
    clear_expr_type();
    set_has_expression();
    expr_type_.expression_ = CreateMaybeMessage< ::substrait::Expression >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:substrait.ExpressionReference.expression)
  return expr_type_.expression_;
}

// .substrait.AggregateFunction measure = 2;
inline bool ExpressionReference::has_measure() const {
  return expr_type_case() == kMeasure;
}
inline void ExpressionReference::set_has_measure() {
  _oneof_case_[0] = kMeasure;
}
inline const ::substrait::AggregateFunction& ExpressionReference::_internal_measure() const {
  return *expr_type_.measure_;
}
inline ::substrait::AggregateFunction* ExpressionReference::release_measure() {
  // @@protoc_insertion_point(field_release:substrait.ExpressionReference.measure)
  if (has_measure()) {
    clear_has_expr_type();
      ::substrait::AggregateFunction* temp = expr_type_.measure_;
    expr_type_.measure_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::substrait::AggregateFunction& ExpressionReference::measure() const {
  // @@protoc_insertion_point(field_get:substrait.ExpressionReference.measure)
  return has_measure()
      ? *expr_type_.measure_
      : *reinterpret_cast< ::substrait::AggregateFunction*>(&::substrait::_AggregateFunction_default_instance_);
}
inline ::substrait::AggregateFunction* ExpressionReference::mutable_measure() {
  if (!has_measure()) {
    clear_expr_type();
    set_has_measure();
    expr_type_.measure_ = CreateMaybeMessage< ::substrait::AggregateFunction >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:substrait.ExpressionReference.measure)
  return expr_type_.measure_;
}

// repeated string output_names = 3;
inline int ExpressionReference::output_names_size() const {
  return output_names_.size();
}
inline void ExpressionReference::clear_output_names() {
  output_names_.Clear();
}
inline const ::std::string& ExpressionReference::output_names(int index) const {
  // @@protoc_insertion_point(field_get:substrait.ExpressionReference.output_names)
  return output_names_.Get(index);
}
inline ::std::string* ExpressionReference::mutable_output_names(int index) {
  // @@protoc_insertion_point(field_mutable:substrait.ExpressionReference.output_names)
  return output_names_.Mutable(index);
}
inline void ExpressionReference::set_output_names(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:substrait.ExpressionReference.output_names)
  output_names_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void ExpressionReference::set_output_names(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:substrait.ExpressionReference.output_names)
  output_names_.Mutable(index)->assign(std::move(value));
}
#endif
inline void ExpressionReference::set_output_names(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  output_names_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:substrait.ExpressionReference.output_names)
}
inline void ExpressionReference::set_output_names(int index, const char* value, size_t size) {
  output_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:substrait.ExpressionReference.output_names)
}
inline ::std::string* ExpressionReference::add_output_names() {
  // @@protoc_insertion_point(field_add_mutable:substrait.ExpressionReference.output_names)
  return output_names_.Add();
}
inline void ExpressionReference::add_output_names(const ::std::string& value) {
  output_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:substrait.ExpressionReference.output_names)
}
#if LANG_CXX11
inline void ExpressionReference::add_output_names(::std::string&& value) {
  output_names_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:substrait.ExpressionReference.output_names)
}
#endif
inline void ExpressionReference::add_output_names(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  output_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:substrait.ExpressionReference.output_names)
}
inline void ExpressionReference::add_output_names(const char* value, size_t size) {
  output_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:substrait.ExpressionReference.output_names)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ExpressionReference::output_names() const {
  // @@protoc_insertion_point(field_list:substrait.ExpressionReference.output_names)
  return output_names_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ExpressionReference::mutable_output_names() {
  // @@protoc_insertion_point(field_mutable_list:substrait.ExpressionReference.output_names)
  return &output_names_;
}

inline bool ExpressionReference::has_expr_type() const {
  return expr_type_case() != EXPR_TYPE_NOT_SET;
}
inline void ExpressionReference::clear_has_expr_type() {
  _oneof_case_[0] = EXPR_TYPE_NOT_SET;
}
inline ExpressionReference::ExprTypeCase ExpressionReference::expr_type_case() const {
  return ExpressionReference::ExprTypeCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// ExtendedExpression

// .substrait.Version version = 7;
inline bool ExtendedExpression::has_version() const {
  return this != internal_default_instance() && version_ != NULL;
}
inline const ::substrait::Version& ExtendedExpression::_internal_version() const {
  return *version_;
}
inline const ::substrait::Version& ExtendedExpression::version() const {
  const ::substrait::Version* p = version_;
  // @@protoc_insertion_point(field_get:substrait.ExtendedExpression.version)
  return p != NULL ? *p : *reinterpret_cast<const ::substrait::Version*>(
      &::substrait::_Version_default_instance_);
}
inline ::substrait::Version* ExtendedExpression::release_version() {
  // @@protoc_insertion_point(field_release:substrait.ExtendedExpression.version)
  
  ::substrait::Version* temp = version_;
  version_ = NULL;
  return temp;
}
inline ::substrait::Version* ExtendedExpression::mutable_version() {
  
  if (version_ == NULL) {
    auto* p = CreateMaybeMessage<::substrait::Version>(GetArenaNoVirtual());
    version_ = p;
  }
  // @@protoc_insertion_point(field_mutable:substrait.ExtendedExpression.version)
  return version_;
}
inline void ExtendedExpression::set_allocated_version(::substrait::Version* version) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(version_);
  }
  if (version) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      version = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    
  } else {
    
  }
  version_ = version;
  // @@protoc_insertion_point(field_set_allocated:substrait.ExtendedExpression.version)
}

// repeated .substrait.extensions.SimpleExtensionURI extension_uris = 1;
inline int ExtendedExpression::extension_uris_size() const {
  return extension_uris_.size();
}
inline ::substrait::extensions::SimpleExtensionURI* ExtendedExpression::mutable_extension_uris(int index) {
  // @@protoc_insertion_point(field_mutable:substrait.ExtendedExpression.extension_uris)
  return extension_uris_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionURI >*
ExtendedExpression::mutable_extension_uris() {
  // @@protoc_insertion_point(field_mutable_list:substrait.ExtendedExpression.extension_uris)
  return &extension_uris_;
}
inline const ::substrait::extensions::SimpleExtensionURI& ExtendedExpression::extension_uris(int index) const {
  // @@protoc_insertion_point(field_get:substrait.ExtendedExpression.extension_uris)
  return extension_uris_.Get(index);
}
inline ::substrait::extensions::SimpleExtensionURI* ExtendedExpression::add_extension_uris() {
  // @@protoc_insertion_point(field_add:substrait.ExtendedExpression.extension_uris)
  return extension_uris_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionURI >&
ExtendedExpression::extension_uris() const {
  // @@protoc_insertion_point(field_list:substrait.ExtendedExpression.extension_uris)
  return extension_uris_;
}

// repeated .substrait.extensions.SimpleExtensionDeclaration extensions = 2;
inline int ExtendedExpression::extensions_size() const {
  return extensions_.size();
}
inline ::substrait::extensions::SimpleExtensionDeclaration* ExtendedExpression::mutable_extensions(int index) {
  // @@protoc_insertion_point(field_mutable:substrait.ExtendedExpression.extensions)
  return extensions_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionDeclaration >*
ExtendedExpression::mutable_extensions() {
  // @@protoc_insertion_point(field_mutable_list:substrait.ExtendedExpression.extensions)
  return &extensions_;
}
inline const ::substrait::extensions::SimpleExtensionDeclaration& ExtendedExpression::extensions(int index) const {
  // @@protoc_insertion_point(field_get:substrait.ExtendedExpression.extensions)
  return extensions_.Get(index);
}
inline ::substrait::extensions::SimpleExtensionDeclaration* ExtendedExpression::add_extensions() {
  // @@protoc_insertion_point(field_add:substrait.ExtendedExpression.extensions)
  return extensions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::substrait::extensions::SimpleExtensionDeclaration >&
ExtendedExpression::extensions() const {
  // @@protoc_insertion_point(field_list:substrait.ExtendedExpression.extensions)
  return extensions_;
}

// repeated .substrait.ExpressionReference referred_expr = 3;
inline int ExtendedExpression::referred_expr_size() const {
  return referred_expr_.size();
}
inline void ExtendedExpression::clear_referred_expr() {
  referred_expr_.Clear();
}
inline ::substrait::ExpressionReference* ExtendedExpression::mutable_referred_expr(int index) {
  // @@protoc_insertion_point(field_mutable:substrait.ExtendedExpression.referred_expr)
  return referred_expr_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::substrait::ExpressionReference >*
ExtendedExpression::mutable_referred_expr() {
  // @@protoc_insertion_point(field_mutable_list:substrait.ExtendedExpression.referred_expr)
  return &referred_expr_;
}
inline const ::substrait::ExpressionReference& ExtendedExpression::referred_expr(int index) const {
  // @@protoc_insertion_point(field_get:substrait.ExtendedExpression.referred_expr)
  return referred_expr_.Get(index);
}
inline ::substrait::ExpressionReference* ExtendedExpression::add_referred_expr() {
  // @@protoc_insertion_point(field_add:substrait.ExtendedExpression.referred_expr)
  return referred_expr_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::substrait::ExpressionReference >&
ExtendedExpression::referred_expr() const {
  // @@protoc_insertion_point(field_list:substrait.ExtendedExpression.referred_expr)
  return referred_expr_;
}

// .substrait.NamedStruct base_schema = 4;
inline bool ExtendedExpression::has_base_schema() const {
  return this != internal_default_instance() && base_schema_ != NULL;
}
inline const ::substrait::NamedStruct& ExtendedExpression::_internal_base_schema() const {
  return *base_schema_;
}
inline const ::substrait::NamedStruct& ExtendedExpression::base_schema() const {
  const ::substrait::NamedStruct* p = base_schema_;
  // @@protoc_insertion_point(field_get:substrait.ExtendedExpression.base_schema)
  return p != NULL ? *p : *reinterpret_cast<const ::substrait::NamedStruct*>(
      &::substrait::_NamedStruct_default_instance_);
}
inline ::substrait::NamedStruct* ExtendedExpression::release_base_schema() {
  // @@protoc_insertion_point(field_release:substrait.ExtendedExpression.base_schema)
  
  ::substrait::NamedStruct* temp = base_schema_;
  base_schema_ = NULL;
  return temp;
}
inline ::substrait::NamedStruct* ExtendedExpression::mutable_base_schema() {
  
  if (base_schema_ == NULL) {
    auto* p = CreateMaybeMessage<::substrait::NamedStruct>(GetArenaNoVirtual());
    base_schema_ = p;
  }
  // @@protoc_insertion_point(field_mutable:substrait.ExtendedExpression.base_schema)
  return base_schema_;
}
inline void ExtendedExpression::set_allocated_base_schema(::substrait::NamedStruct* base_schema) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(base_schema_);
  }
  if (base_schema) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      base_schema = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, base_schema, submessage_arena);
    }
    
  } else {
    
  }
  base_schema_ = base_schema;
  // @@protoc_insertion_point(field_set_allocated:substrait.ExtendedExpression.base_schema)
}

// .substrait.extensions.AdvancedExtension advanced_extensions = 5;
inline bool ExtendedExpression::has_advanced_extensions() const {
  return this != internal_default_instance() && advanced_extensions_ != NULL;
}
inline const ::substrait::extensions::AdvancedExtension& ExtendedExpression::_internal_advanced_extensions() const {
  return *advanced_extensions_;
}
inline const ::substrait::extensions::AdvancedExtension& ExtendedExpression::advanced_extensions() const {
  const ::substrait::extensions::AdvancedExtension* p = advanced_extensions_;
  // @@protoc_insertion_point(field_get:substrait.ExtendedExpression.advanced_extensions)
  return p != NULL ? *p : *reinterpret_cast<const ::substrait::extensions::AdvancedExtension*>(
      &::substrait::extensions::_AdvancedExtension_default_instance_);
}
inline ::substrait::extensions::AdvancedExtension* ExtendedExpression::release_advanced_extensions() {
  // @@protoc_insertion_point(field_release:substrait.ExtendedExpression.advanced_extensions)
  
  ::substrait::extensions::AdvancedExtension* temp = advanced_extensions_;
  advanced_extensions_ = NULL;
  return temp;
}
inline ::substrait::extensions::AdvancedExtension* ExtendedExpression::mutable_advanced_extensions() {
  
  if (advanced_extensions_ == NULL) {
    auto* p = CreateMaybeMessage<::substrait::extensions::AdvancedExtension>(GetArenaNoVirtual());
    advanced_extensions_ = p;
  }
  // @@protoc_insertion_point(field_mutable:substrait.ExtendedExpression.advanced_extensions)
  return advanced_extensions_;
}
inline void ExtendedExpression::set_allocated_advanced_extensions(::substrait::extensions::AdvancedExtension* advanced_extensions) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(advanced_extensions_);
  }
  if (advanced_extensions) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      advanced_extensions = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, advanced_extensions, submessage_arena);
    }
    
  } else {
    
  }
  advanced_extensions_ = advanced_extensions;
  // @@protoc_insertion_point(field_set_allocated:substrait.ExtendedExpression.advanced_extensions)
}

// repeated string expected_type_urls = 6;
inline int ExtendedExpression::expected_type_urls_size() const {
  return expected_type_urls_.size();
}
inline void ExtendedExpression::clear_expected_type_urls() {
  expected_type_urls_.Clear();
}
inline const ::std::string& ExtendedExpression::expected_type_urls(int index) const {
  // @@protoc_insertion_point(field_get:substrait.ExtendedExpression.expected_type_urls)
  return expected_type_urls_.Get(index);
}
inline ::std::string* ExtendedExpression::mutable_expected_type_urls(int index) {
  // @@protoc_insertion_point(field_mutable:substrait.ExtendedExpression.expected_type_urls)
  return expected_type_urls_.Mutable(index);
}
inline void ExtendedExpression::set_expected_type_urls(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:substrait.ExtendedExpression.expected_type_urls)
  expected_type_urls_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void ExtendedExpression::set_expected_type_urls(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:substrait.ExtendedExpression.expected_type_urls)
  expected_type_urls_.Mutable(index)->assign(std::move(value));
}
#endif
inline void ExtendedExpression::set_expected_type_urls(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  expected_type_urls_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:substrait.ExtendedExpression.expected_type_urls)
}
inline void ExtendedExpression::set_expected_type_urls(int index, const char* value, size_t size) {
  expected_type_urls_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:substrait.ExtendedExpression.expected_type_urls)
}
inline ::std::string* ExtendedExpression::add_expected_type_urls() {
  // @@protoc_insertion_point(field_add_mutable:substrait.ExtendedExpression.expected_type_urls)
  return expected_type_urls_.Add();
}
inline void ExtendedExpression::add_expected_type_urls(const ::std::string& value) {
  expected_type_urls_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:substrait.ExtendedExpression.expected_type_urls)
}
#if LANG_CXX11
inline void ExtendedExpression::add_expected_type_urls(::std::string&& value) {
  expected_type_urls_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:substrait.ExtendedExpression.expected_type_urls)
}
#endif
inline void ExtendedExpression::add_expected_type_urls(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  expected_type_urls_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:substrait.ExtendedExpression.expected_type_urls)
}
inline void ExtendedExpression::add_expected_type_urls(const char* value, size_t size) {
  expected_type_urls_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:substrait.ExtendedExpression.expected_type_urls)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ExtendedExpression::expected_type_urls() const {
  // @@protoc_insertion_point(field_list:substrait.ExtendedExpression.expected_type_urls)
  return expected_type_urls_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ExtendedExpression::mutable_expected_type_urls() {
  // @@protoc_insertion_point(field_mutable_list:substrait.ExtendedExpression.expected_type_urls)
  return &expected_type_urls_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace substrait

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_substrait_2fextended_5fexpression_2eproto
