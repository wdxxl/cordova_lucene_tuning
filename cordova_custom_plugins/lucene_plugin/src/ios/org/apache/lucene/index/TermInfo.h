//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/TermInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexTermInfo")
#ifdef RESTRICT_OrgApacheLuceneIndexTermInfo
#define INCLUDE_ALL_OrgApacheLuceneIndexTermInfo 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexTermInfo 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexTermInfo

#if !defined (OrgApacheLuceneIndexTermInfo_) && (INCLUDE_ALL_OrgApacheLuceneIndexTermInfo || defined(INCLUDE_OrgApacheLuceneIndexTermInfo))
#define OrgApacheLuceneIndexTermInfo_

@interface OrgApacheLuceneIndexTermInfo : NSObject {
 @public
  jint docFreq_;
  jlong freqPointer_;
  jlong proxPointer_;
  jint skipOffset_;
}

#pragma mark Package-Private

- (instancetype)init;

- (instancetype)initWithInt:(jint)df
                   withLong:(jlong)fp
                   withLong:(jlong)pp;

- (instancetype)initWithOrgApacheLuceneIndexTermInfo:(OrgApacheLuceneIndexTermInfo *)ti;

- (void)setWithInt:(jint)docFreq
          withLong:(jlong)freqPointer
          withLong:(jlong)proxPointer
           withInt:(jint)skipOffset;

- (void)setWithOrgApacheLuceneIndexTermInfo:(OrgApacheLuceneIndexTermInfo *)ti;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexTermInfo)

FOUNDATION_EXPORT void OrgApacheLuceneIndexTermInfo_init(OrgApacheLuceneIndexTermInfo *self);

FOUNDATION_EXPORT OrgApacheLuceneIndexTermInfo *new_OrgApacheLuceneIndexTermInfo_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexTermInfo *create_OrgApacheLuceneIndexTermInfo_init();

FOUNDATION_EXPORT void OrgApacheLuceneIndexTermInfo_initWithInt_withLong_withLong_(OrgApacheLuceneIndexTermInfo *self, jint df, jlong fp, jlong pp);

FOUNDATION_EXPORT OrgApacheLuceneIndexTermInfo *new_OrgApacheLuceneIndexTermInfo_initWithInt_withLong_withLong_(jint df, jlong fp, jlong pp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexTermInfo *create_OrgApacheLuceneIndexTermInfo_initWithInt_withLong_withLong_(jint df, jlong fp, jlong pp);

FOUNDATION_EXPORT void OrgApacheLuceneIndexTermInfo_initWithOrgApacheLuceneIndexTermInfo_(OrgApacheLuceneIndexTermInfo *self, OrgApacheLuceneIndexTermInfo *ti);

FOUNDATION_EXPORT OrgApacheLuceneIndexTermInfo *new_OrgApacheLuceneIndexTermInfo_initWithOrgApacheLuceneIndexTermInfo_(OrgApacheLuceneIndexTermInfo *ti) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexTermInfo *create_OrgApacheLuceneIndexTermInfo_initWithOrgApacheLuceneIndexTermInfo_(OrgApacheLuceneIndexTermInfo *ti);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexTermInfo)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexTermInfo")
