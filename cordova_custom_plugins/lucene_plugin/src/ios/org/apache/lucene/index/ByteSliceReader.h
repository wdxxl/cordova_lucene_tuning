//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/ByteSliceReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexByteSliceReader")
#ifdef RESTRICT_OrgApacheLuceneIndexByteSliceReader
#define INCLUDE_ALL_OrgApacheLuceneIndexByteSliceReader 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexByteSliceReader 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexByteSliceReader

#if !defined (OrgApacheLuceneIndexByteSliceReader_) && (INCLUDE_ALL_OrgApacheLuceneIndexByteSliceReader || defined(INCLUDE_OrgApacheLuceneIndexByteSliceReader))
#define OrgApacheLuceneIndexByteSliceReader_

#define RESTRICT_OrgApacheLuceneStoreIndexInput 1
#define INCLUDE_OrgApacheLuceneStoreIndexInput 1
#include "org/apache/lucene/store/IndexInput.h"

@class IOSByteArray;
@class OrgApacheLuceneIndexByteBlockPool;
@class OrgApacheLuceneStoreIndexOutput;

@interface OrgApacheLuceneIndexByteSliceReader : OrgApacheLuceneStoreIndexInput {
 @public
  OrgApacheLuceneIndexByteBlockPool *pool_;
  jint bufferUpto_;
  IOSByteArray *buffer_;
  jint upto_;
  jint limit_;
  jint level_;
  jint bufferOffset_;
  jint endIndex_;
}

#pragma mark Public

- (void)close;

- (jboolean)eof;

- (jlong)getFilePointer;

- (void)init__WithOrgApacheLuceneIndexByteBlockPool:(OrgApacheLuceneIndexByteBlockPool *)pool
                                            withInt:(jint)startIndex
                                            withInt:(jint)endIndex OBJC_METHOD_FAMILY_NONE;

- (jlong)length;

- (void)nextSlice;

- (jbyte)readByte;

- (void)readBytesWithByteArray:(IOSByteArray *)b
                       withInt:(jint)offset
                       withInt:(jint)len;

- (void)seekWithLong:(jlong)pos;

- (jlong)writeToWithOrgApacheLuceneStoreIndexOutput:(OrgApacheLuceneStoreIndexOutput *)outArg;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexByteSliceReader)

J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexByteSliceReader, pool_, OrgApacheLuceneIndexByteBlockPool *)
J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexByteSliceReader, buffer_, IOSByteArray *)

FOUNDATION_EXPORT void OrgApacheLuceneIndexByteSliceReader_init(OrgApacheLuceneIndexByteSliceReader *self);

FOUNDATION_EXPORT OrgApacheLuceneIndexByteSliceReader *new_OrgApacheLuceneIndexByteSliceReader_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexByteSliceReader *create_OrgApacheLuceneIndexByteSliceReader_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexByteSliceReader)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexByteSliceReader")
