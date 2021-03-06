// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Students.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Students_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Students_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Students_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Students_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Students_2eproto;
namespace stud {
class FullName;
struct FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
struct StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentsGroup;
struct StudentsGroupDefaultTypeInternal;
extern StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace stud
PROTOBUF_NAMESPACE_OPEN
template<> ::stud::FullName* Arena::CreateMaybeMessage<::stud::FullName>(Arena*);
template<> ::stud::Student* Arena::CreateMaybeMessage<::stud::Student>(Arena*);
template<> ::stud::StudentsGroup* Arena::CreateMaybeMessage<::stud::StudentsGroup>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace stud {

// ===================================================================

class FullName final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:stud.FullName) */ {
 public:
  inline FullName() : FullName(nullptr) {}
  ~FullName() override;
  explicit constexpr FullName(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FullName(const FullName& from);
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  inline FullName& operator=(FullName&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FullName& default_instance() {
    return *internal_default_instance();
  }
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }
  inline void Swap(FullName* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FullName* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return new FullName();
  }

  FullName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "stud.FullName";
  }
  protected:
  explicit FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFirstNameFieldNumber = 1,
    kMiddleNameFieldNumber = 2,
    kLastNameFieldNumber = 3,
  };
  // string FirstName = 1;
  void clear_firstname();
  const std::string& firstname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_firstname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_firstname();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_firstname();
  void set_allocated_firstname(std::string* firstname);
  private:
  const std::string& _internal_firstname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_firstname(const std::string& value);
  std::string* _internal_mutable_firstname();
  public:

  // string MiddleName = 2;
  void clear_middlename();
  const std::string& middlename() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_middlename(ArgT0&& arg0, ArgT... args);
  std::string* mutable_middlename();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_middlename();
  void set_allocated_middlename(std::string* middlename);
  private:
  const std::string& _internal_middlename() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_middlename(const std::string& value);
  std::string* _internal_mutable_middlename();
  public:

  // string LastName = 3;
  void clear_lastname();
  const std::string& lastname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_lastname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_lastname();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_lastname();
  void set_allocated_lastname(std::string* lastname);
  private:
  const std::string& _internal_lastname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_lastname(const std::string& value);
  std::string* _internal_mutable_lastname();
  public:

  // @@protoc_insertion_point(class_scope:stud.FullName)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr firstname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr middlename_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr lastname_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Students_2eproto;
};
// -------------------------------------------------------------------

class Student final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:stud.Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  ~Student() override;
  explicit constexpr Student(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Student& default_instance() {
    return *internal_default_instance();
  }
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return new Student();
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "stud.Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScoresFieldNumber = 5,
    kFNameFieldNumber = 4,
    kAverangeScoreFieldNumber = 6,
  };
  // repeated int32 Scores = 5;
  int scores_size() const;
  private:
  int _internal_scores_size() const;
  public:
  void clear_scores();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_scores(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_scores() const;
  void _internal_add_scores(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_scores();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 scores(int index) const;
  void set_scores(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_scores(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      scores() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_scores();

  // .stud.FullName fName = 4;
  bool has_fname() const;
  private:
  bool _internal_has_fname() const;
  public:
  void clear_fname();
  const ::stud::FullName& fname() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::stud::FullName* release_fname();
  ::stud::FullName* mutable_fname();
  void set_allocated_fname(::stud::FullName* fname);
  private:
  const ::stud::FullName& _internal_fname() const;
  ::stud::FullName* _internal_mutable_fname();
  public:
  void unsafe_arena_set_allocated_fname(
      ::stud::FullName* fname);
  ::stud::FullName* unsafe_arena_release_fname();

  // int32 AverangeScore = 6;
  void clear_averangescore();
  ::PROTOBUF_NAMESPACE_ID::int32 averangescore() const;
  void set_averangescore(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_averangescore() const;
  void _internal_set_averangescore(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:stud.Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > scores_;
  mutable std::atomic<int> _scores_cached_byte_size_;
  ::stud::FullName* fname_;
  ::PROTOBUF_NAMESPACE_ID::int32 averangescore_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Students_2eproto;
};
// -------------------------------------------------------------------

class StudentsGroup final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:stud.StudentsGroup) */ {
 public:
  inline StudentsGroup() : StudentsGroup(nullptr) {}
  ~StudentsGroup() override;
  explicit constexpr StudentsGroup(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StudentsGroup(const StudentsGroup& from);
  StudentsGroup(StudentsGroup&& from) noexcept
    : StudentsGroup() {
    *this = ::std::move(from);
  }

  inline StudentsGroup& operator=(const StudentsGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentsGroup& operator=(StudentsGroup&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StudentsGroup& default_instance() {
    return *internal_default_instance();
  }
  static inline const StudentsGroup* internal_default_instance() {
    return reinterpret_cast<const StudentsGroup*>(
               &_StudentsGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StudentsGroup& a, StudentsGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentsGroup* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentsGroup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentsGroup* New() const final {
    return new StudentsGroup();
  }

  StudentsGroup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentsGroup>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentsGroup& from);
  void MergeFrom(const StudentsGroup& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentsGroup* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "stud.StudentsGroup";
  }
  protected:
  explicit StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentsFieldNumber = 7,
  };
  // repeated .stud.Student Students = 7;
  int students_size() const;
  private:
  int _internal_students_size() const;
  public:
  void clear_students();
  ::stud::Student* mutable_students(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::stud::Student >*
      mutable_students();
  private:
  const ::stud::Student& _internal_students(int index) const;
  ::stud::Student* _internal_add_students();
  public:
  const ::stud::Student& students(int index) const;
  ::stud::Student* add_students();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::stud::Student >&
      students() const;

  // @@protoc_insertion_point(class_scope:stud.StudentsGroup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::stud::Student > students_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Students_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string FirstName = 1;
inline void FullName::clear_firstname() {
  firstname_.ClearToEmpty();
}
inline const std::string& FullName::firstname() const {
  // @@protoc_insertion_point(field_get:stud.FullName.FirstName)
  return _internal_firstname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_firstname(ArgT0&& arg0, ArgT... args) {
 
 firstname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:stud.FullName.FirstName)
}
inline std::string* FullName::mutable_firstname() {
  // @@protoc_insertion_point(field_mutable:stud.FullName.FirstName)
  return _internal_mutable_firstname();
}
inline const std::string& FullName::_internal_firstname() const {
  return firstname_.Get();
}
inline void FullName::_internal_set_firstname(const std::string& value) {
  
  firstname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_firstname() {
  
  return firstname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_firstname() {
  // @@protoc_insertion_point(field_release:stud.FullName.FirstName)
  return firstname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_firstname(std::string* firstname) {
  if (firstname != nullptr) {
    
  } else {
    
  }
  firstname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), firstname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:stud.FullName.FirstName)
}

// string MiddleName = 2;
inline void FullName::clear_middlename() {
  middlename_.ClearToEmpty();
}
inline const std::string& FullName::middlename() const {
  // @@protoc_insertion_point(field_get:stud.FullName.MiddleName)
  return _internal_middlename();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_middlename(ArgT0&& arg0, ArgT... args) {
 
 middlename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:stud.FullName.MiddleName)
}
inline std::string* FullName::mutable_middlename() {
  // @@protoc_insertion_point(field_mutable:stud.FullName.MiddleName)
  return _internal_mutable_middlename();
}
inline const std::string& FullName::_internal_middlename() const {
  return middlename_.Get();
}
inline void FullName::_internal_set_middlename(const std::string& value) {
  
  middlename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_middlename() {
  
  return middlename_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_middlename() {
  // @@protoc_insertion_point(field_release:stud.FullName.MiddleName)
  return middlename_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_middlename(std::string* middlename) {
  if (middlename != nullptr) {
    
  } else {
    
  }
  middlename_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), middlename,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:stud.FullName.MiddleName)
}

// string LastName = 3;
inline void FullName::clear_lastname() {
  lastname_.ClearToEmpty();
}
inline const std::string& FullName::lastname() const {
  // @@protoc_insertion_point(field_get:stud.FullName.LastName)
  return _internal_lastname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_lastname(ArgT0&& arg0, ArgT... args) {
 
 lastname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:stud.FullName.LastName)
}
inline std::string* FullName::mutable_lastname() {
  // @@protoc_insertion_point(field_mutable:stud.FullName.LastName)
  return _internal_mutable_lastname();
}
inline const std::string& FullName::_internal_lastname() const {
  return lastname_.Get();
}
inline void FullName::_internal_set_lastname(const std::string& value) {
  
  lastname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_lastname() {
  
  return lastname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_lastname() {
  // @@protoc_insertion_point(field_release:stud.FullName.LastName)
  return lastname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_lastname(std::string* lastname) {
  if (lastname != nullptr) {
    
  } else {
    
  }
  lastname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), lastname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:stud.FullName.LastName)
}

// -------------------------------------------------------------------

// Student

// .stud.FullName fName = 4;
inline bool Student::_internal_has_fname() const {
  return this != internal_default_instance() && fname_ != nullptr;
}
inline bool Student::has_fname() const {
  return _internal_has_fname();
}
inline void Student::clear_fname() {
  if (GetArenaForAllocation() == nullptr && fname_ != nullptr) {
    delete fname_;
  }
  fname_ = nullptr;
}
inline const ::stud::FullName& Student::_internal_fname() const {
  const ::stud::FullName* p = fname_;
  return p != nullptr ? *p : reinterpret_cast<const ::stud::FullName&>(
      ::stud::_FullName_default_instance_);
}
inline const ::stud::FullName& Student::fname() const {
  // @@protoc_insertion_point(field_get:stud.Student.fName)
  return _internal_fname();
}
inline void Student::unsafe_arena_set_allocated_fname(
    ::stud::FullName* fname) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(fname_);
  }
  fname_ = fname;
  if (fname) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:stud.Student.fName)
}
inline ::stud::FullName* Student::release_fname() {
  
  ::stud::FullName* temp = fname_;
  fname_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::stud::FullName* Student::unsafe_arena_release_fname() {
  // @@protoc_insertion_point(field_release:stud.Student.fName)
  
  ::stud::FullName* temp = fname_;
  fname_ = nullptr;
  return temp;
}
inline ::stud::FullName* Student::_internal_mutable_fname() {
  
  if (fname_ == nullptr) {
    auto* p = CreateMaybeMessage<::stud::FullName>(GetArenaForAllocation());
    fname_ = p;
  }
  return fname_;
}
inline ::stud::FullName* Student::mutable_fname() {
  // @@protoc_insertion_point(field_mutable:stud.Student.fName)
  return _internal_mutable_fname();
}
inline void Student::set_allocated_fname(::stud::FullName* fname) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete fname_;
  }
  if (fname) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::stud::FullName>::GetOwningArena(fname);
    if (message_arena != submessage_arena) {
      fname = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fname, submessage_arena);
    }
    
  } else {
    
  }
  fname_ = fname;
  // @@protoc_insertion_point(field_set_allocated:stud.Student.fName)
}

// repeated int32 Scores = 5;
inline int Student::_internal_scores_size() const {
  return scores_.size();
}
inline int Student::scores_size() const {
  return _internal_scores_size();
}
inline void Student::clear_scores() {
  scores_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_scores(int index) const {
  return scores_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::scores(int index) const {
  // @@protoc_insertion_point(field_get:stud.Student.Scores)
  return _internal_scores(index);
}
inline void Student::set_scores(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  scores_.Set(index, value);
  // @@protoc_insertion_point(field_set:stud.Student.Scores)
}
inline void Student::_internal_add_scores(::PROTOBUF_NAMESPACE_ID::int32 value) {
  scores_.Add(value);
}
inline void Student::add_scores(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_scores(value);
  // @@protoc_insertion_point(field_add:stud.Student.Scores)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::_internal_scores() const {
  return scores_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::scores() const {
  // @@protoc_insertion_point(field_list:stud.Student.Scores)
  return _internal_scores();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::_internal_mutable_scores() {
  return &scores_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::mutable_scores() {
  // @@protoc_insertion_point(field_mutable_list:stud.Student.Scores)
  return _internal_mutable_scores();
}

// int32 AverangeScore = 6;
inline void Student::clear_averangescore() {
  averangescore_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_averangescore() const {
  return averangescore_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::averangescore() const {
  // @@protoc_insertion_point(field_get:stud.Student.AverangeScore)
  return _internal_averangescore();
}
inline void Student::_internal_set_averangescore(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  averangescore_ = value;
}
inline void Student::set_averangescore(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_averangescore(value);
  // @@protoc_insertion_point(field_set:stud.Student.AverangeScore)
}

// -------------------------------------------------------------------

// StudentsGroup

// repeated .stud.Student Students = 7;
inline int StudentsGroup::_internal_students_size() const {
  return students_.size();
}
inline int StudentsGroup::students_size() const {
  return _internal_students_size();
}
inline void StudentsGroup::clear_students() {
  students_.Clear();
}
inline ::stud::Student* StudentsGroup::mutable_students(int index) {
  // @@protoc_insertion_point(field_mutable:stud.StudentsGroup.Students)
  return students_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::stud::Student >*
StudentsGroup::mutable_students() {
  // @@protoc_insertion_point(field_mutable_list:stud.StudentsGroup.Students)
  return &students_;
}
inline const ::stud::Student& StudentsGroup::_internal_students(int index) const {
  return students_.Get(index);
}
inline const ::stud::Student& StudentsGroup::students(int index) const {
  // @@protoc_insertion_point(field_get:stud.StudentsGroup.Students)
  return _internal_students(index);
}
inline ::stud::Student* StudentsGroup::_internal_add_students() {
  return students_.Add();
}
inline ::stud::Student* StudentsGroup::add_students() {
  // @@protoc_insertion_point(field_add:stud.StudentsGroup.Students)
  return _internal_add_students();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::stud::Student >&
StudentsGroup::students() const {
  // @@protoc_insertion_point(field_list:stud.StudentsGroup.Students)
  return students_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace stud

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Students_2eproto
