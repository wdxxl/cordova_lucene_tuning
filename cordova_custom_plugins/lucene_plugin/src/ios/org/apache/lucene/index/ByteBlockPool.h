//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/index/ByteBlockPool.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexByteBlockPool")
#ifdef RESTRICT_OrgApacheLuceneIndexByteBlockPool
#define INCLUDE_ALL_OrgApacheLuceneIndexByteBlockPool 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexByteBlockPool 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexByteBlockPool

#if !defined (OrgApacheLuceneIndexByteBlockPool_) && (INCLUDE_ALL_OrgApacheLuceneIndexByteBlockPool || defined(INCLUDE_OrgApacheLuceneIndexByteBlockPool))
#define OrgApacheLuceneIndexByteBlockPool_

@class IOSByteArray;
@class IOSIntArray;
@class IOSObjectArray;
@class OrgApacheLuceneIndexByteBlockPool_Allocator;

@interface OrgApacheLuceneIndexByteBlockPool : NSObject {
 @public
  IOSObjectArray *buffers_;
  jint bufferUpto_;
  jint byteUpto_;
  IOSByteArray *buffer_;
  jint byteOffset_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneIndexByteBlockPool_Allocator:(OrgApacheLuceneIndexByteBlockPool_Allocator *)allocator;

- (jint)allocSliceWithByteArray:(IOSByteArray *)slice
                        withInt:(jint)upto OBJC_METHOD_FAMILY_NONE;

- (jint)newSliceWithInt:(jint)size OBJC_METHOD_FAMILY_NONE;

- (void)nextBuffer;

- (void)reset;

@end

J2OBJC_STATIC_INIT(OrgApacheLuceneIndexByteBlockPool)

J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexByteBlockPool, buffers_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexByteBlockPool, buffer_, IOSByteArray *)

inline IOSIntArray *OrgApacheLuceneIndexByteBlockPool_get_nextLevelArray();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *OrgApacheLuceneIndexByteBlockPool_nextLevelArray;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheLuceneIndexByteBlockPool, nextLevelArray, IOSIntArray *)

inline IOSIntArray *OrgApacheLuceneIndexByteBlockPool_get_levelSizeArray();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *OrgApacheLuceneIndexByteBlockPool_levelSizeArray;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheLuceneIndexByteBlockPool, levelSizeArray, IOSIntArray *)

inline jint OrgApacheLuceneIndexByteBlockPool_get_FIRST_LEVEL_SIZE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint OrgApacheLuceneIndexByteBlockPool_FIRST_LEVEL_SIZE;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(OrgApacheLuceneIndexByteBlockPool, FIRST_LEVEL_SIZE, jint)

FOUNDATION_EXPORT void OrgApacheLuceneIndexByteBlockPool_initWithOrgApacheLuceneIndexByteBlockPool_Allocator_(OrgApacheLuceneIndexByteBlockPool *self, OrgApacheLuceneIndexByteBlockPool_Allocator *allocator);

FOUNDATION_EXPORT OrgApacheLuceneIndexByteBlockPool *new_OrgApacheLuceneIndexByteBlockPool_initWithOrgApacheLuceneIndexByteBlockPool_Allocator_(OrgApacheLuceneIndexByteBlockPool_Allocator *allocator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexByteBlockPool *create_OrgApacheLuceneIndexByteBlockPool_initWithOrgApacheLuceneIndexByteBlockPool_Allocator_(OrgApacheLuceneIndexByteBlockPool_Allocator *allocator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexByteBlockPool)

#endif

#if !defined (OrgApacheLuceneIndexByteBlockPool_Allocator_) && (INCLUDE_ALL_OrgApacheLuceneIndexByteBlockPool || defined(INCLUDE_OrgApacheLuceneIndexByteBlockPool_Allocator))
#define OrgApacheLuceneIndexByteBlockPool_Allocator_

@class IOSByteArray;
@class IOSObjectArray;
@protocol JavaUtilList;

@interface OrgApacheLuceneIndexByteBlockPool_Allocator : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (IOSByteArray *)getByteBlock;

- (void)recycleByteBlocksWithByteArray2:(IOSObjectArray *)blocks
                                withInt:(jint)start
                                withInt:(jint)end;

- (void)recycleByteBlocksWithJavaUtilList:(id<JavaUtilList>)blocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexByteBlockPool_Allocator)

FOUNDATION_EXPORT void OrgApacheLuceneIndexByteBlockPool_Allocator_init(OrgApacheLuceneIndexByteBlockPool_Allocator *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexByteBlockPool_Allocator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexByteBlockPool")
