//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/util/BytesRefHash.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash")
#ifdef RESTRICT_OrgApacheLuceneUtilBytesRefHash
#define INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash 0
#else
#define INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash 1
#endif
#undef RESTRICT_OrgApacheLuceneUtilBytesRefHash
#ifdef INCLUDE_OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray
#define INCLUDE_OrgApacheLuceneUtilBytesRefHash_BytesStartArray 1
#endif
#ifdef INCLUDE_OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray
#define INCLUDE_OrgApacheLuceneUtilBytesRefHash_BytesStartArray 1
#endif

#if !defined (OrgApacheLuceneUtilBytesRefHash_) && (INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash || defined(INCLUDE_OrgApacheLuceneUtilBytesRefHash))
#define OrgApacheLuceneUtilBytesRefHash_

@class IOSIntArray;
@class OrgApacheLuceneUtilByteBlockPool;
@class OrgApacheLuceneUtilBytesRef;
@class OrgApacheLuceneUtilBytesRefHash_BytesStartArray;
@protocol JavaUtilComparator;

@interface OrgApacheLuceneUtilBytesRefHash : NSObject {
 @public
  OrgApacheLuceneUtilByteBlockPool *pool_;
  IOSIntArray *bytesStart_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgApacheLuceneUtilByteBlockPool:(OrgApacheLuceneUtilByteBlockPool *)pool;

- (instancetype)initWithOrgApacheLuceneUtilByteBlockPool:(OrgApacheLuceneUtilByteBlockPool *)pool
                                                 withInt:(jint)capacity
     withOrgApacheLuceneUtilBytesRefHash_BytesStartArray:(OrgApacheLuceneUtilBytesRefHash_BytesStartArray *)bytesStartArray;

- (jint)addWithOrgApacheLuceneUtilBytesRef:(OrgApacheLuceneUtilBytesRef *)bytes;

- (jint)addWithOrgApacheLuceneUtilBytesRef:(OrgApacheLuceneUtilBytesRef *)bytes
                                   withInt:(jint)code;

- (jint)addByPoolOffsetWithInt:(jint)offset;

- (jint)byteStartWithInt:(jint)ord;

- (void)clear;

- (void)clearWithBoolean:(jboolean)resetPool;

- (void)close;

- (IOSIntArray *)compact;

- (OrgApacheLuceneUtilBytesRef *)getWithInt:(jint)ord
            withOrgApacheLuceneUtilBytesRef:(OrgApacheLuceneUtilBytesRef *)ref;

- (void)reinit;

- (jint)size;

- (IOSIntArray *)sortWithJavaUtilComparator:(id<JavaUtilComparator>)comp;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneUtilBytesRefHash)

J2OBJC_FIELD_SETTER(OrgApacheLuceneUtilBytesRefHash, pool_, OrgApacheLuceneUtilByteBlockPool *)
J2OBJC_FIELD_SETTER(OrgApacheLuceneUtilBytesRefHash, bytesStart_, IOSIntArray *)

inline jint OrgApacheLuceneUtilBytesRefHash_get_DEFAULT_CAPACITY();
#define OrgApacheLuceneUtilBytesRefHash_DEFAULT_CAPACITY 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneUtilBytesRefHash, DEFAULT_CAPACITY, jint)

FOUNDATION_EXPORT void OrgApacheLuceneUtilBytesRefHash_init(OrgApacheLuceneUtilBytesRefHash *self);

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash *new_OrgApacheLuceneUtilBytesRefHash_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash *create_OrgApacheLuceneUtilBytesRefHash_init();

FOUNDATION_EXPORT void OrgApacheLuceneUtilBytesRefHash_initWithOrgApacheLuceneUtilByteBlockPool_(OrgApacheLuceneUtilBytesRefHash *self, OrgApacheLuceneUtilByteBlockPool *pool);

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash *new_OrgApacheLuceneUtilBytesRefHash_initWithOrgApacheLuceneUtilByteBlockPool_(OrgApacheLuceneUtilByteBlockPool *pool) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash *create_OrgApacheLuceneUtilBytesRefHash_initWithOrgApacheLuceneUtilByteBlockPool_(OrgApacheLuceneUtilByteBlockPool *pool);

FOUNDATION_EXPORT void OrgApacheLuceneUtilBytesRefHash_initWithOrgApacheLuceneUtilByteBlockPool_withInt_withOrgApacheLuceneUtilBytesRefHash_BytesStartArray_(OrgApacheLuceneUtilBytesRefHash *self, OrgApacheLuceneUtilByteBlockPool *pool, jint capacity, OrgApacheLuceneUtilBytesRefHash_BytesStartArray *bytesStartArray);

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash *new_OrgApacheLuceneUtilBytesRefHash_initWithOrgApacheLuceneUtilByteBlockPool_withInt_withOrgApacheLuceneUtilBytesRefHash_BytesStartArray_(OrgApacheLuceneUtilByteBlockPool *pool, jint capacity, OrgApacheLuceneUtilBytesRefHash_BytesStartArray *bytesStartArray) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash *create_OrgApacheLuceneUtilBytesRefHash_initWithOrgApacheLuceneUtilByteBlockPool_withInt_withOrgApacheLuceneUtilBytesRefHash_BytesStartArray_(OrgApacheLuceneUtilByteBlockPool *pool, jint capacity, OrgApacheLuceneUtilBytesRefHash_BytesStartArray *bytesStartArray);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneUtilBytesRefHash)

#endif

#if !defined (OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException_) && (INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash || defined(INCLUDE_OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException))
#define OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@interface OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException : JavaLangRuntimeException

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException)

FOUNDATION_EXPORT void OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException_initWithNSString_(OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException *self, NSString *message);

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException *new_OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException *create_OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneUtilBytesRefHash_MaxBytesLengthExceededException)

#endif

#if !defined (OrgApacheLuceneUtilBytesRefHash_BytesStartArray_) && (INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash || defined(INCLUDE_OrgApacheLuceneUtilBytesRefHash_BytesStartArray))
#define OrgApacheLuceneUtilBytesRefHash_BytesStartArray_

@class IOSIntArray;
@class JavaUtilConcurrentAtomicAtomicLong;

@interface OrgApacheLuceneUtilBytesRefHash_BytesStartArray : NSObject

#pragma mark Public

- (instancetype)init;

- (JavaUtilConcurrentAtomicAtomicLong *)bytesUsed;

- (IOSIntArray *)clear;

- (IOSIntArray *)grow;

- (IOSIntArray *)init__ OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneUtilBytesRefHash_BytesStartArray)

FOUNDATION_EXPORT void OrgApacheLuceneUtilBytesRefHash_BytesStartArray_init(OrgApacheLuceneUtilBytesRefHash_BytesStartArray *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneUtilBytesRefHash_BytesStartArray)

#endif

#if !defined (OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray_) && (INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash || defined(INCLUDE_OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray))
#define OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray_

@class IOSIntArray;
@class JavaUtilConcurrentAtomicAtomicLong;

@interface OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray : OrgApacheLuceneUtilBytesRefHash_BytesStartArray {
 @public
  jint initSize_;
  JavaUtilConcurrentAtomicAtomicLong *bytesUsed_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)initSize
withJavaUtilConcurrentAtomicAtomicLong:(JavaUtilConcurrentAtomicAtomicLong *)bytesUsed;

- (JavaUtilConcurrentAtomicAtomicLong *)bytesUsed;

- (IOSIntArray *)clear;

- (IOSIntArray *)grow;

- (IOSIntArray *)init__ OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray)

J2OBJC_FIELD_SETTER(OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray, bytesUsed_, JavaUtilConcurrentAtomicAtomicLong *)

FOUNDATION_EXPORT void OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray_initWithInt_withJavaUtilConcurrentAtomicAtomicLong_(OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray *self, jint initSize, JavaUtilConcurrentAtomicAtomicLong *bytesUsed);

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray *new_OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray_initWithInt_withJavaUtilConcurrentAtomicAtomicLong_(jint initSize, JavaUtilConcurrentAtomicAtomicLong *bytesUsed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray *create_OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray_initWithInt_withJavaUtilConcurrentAtomicAtomicLong_(jint initSize, JavaUtilConcurrentAtomicAtomicLong *bytesUsed);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneUtilBytesRefHash_TrackingDirectBytesStartArray)

#endif

#if !defined (OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray_) && (INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash || defined(INCLUDE_OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray))
#define OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray_

@class IOSIntArray;
@class JavaUtilConcurrentAtomicAtomicLong;

@interface OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray : OrgApacheLuceneUtilBytesRefHash_BytesStartArray {
 @public
  jint initSize_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)initSize;

- (JavaUtilConcurrentAtomicAtomicLong *)bytesUsed;

- (IOSIntArray *)clear;

- (IOSIntArray *)grow;

- (IOSIntArray *)init__ OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray)

FOUNDATION_EXPORT void OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray_initWithInt_(OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray *self, jint initSize);

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray *new_OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray_initWithInt_(jint initSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray *create_OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray_initWithInt_(jint initSize);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneUtilBytesRefHash")
