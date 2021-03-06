//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/SegmentTermVector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexSegmentTermVector")
#ifdef RESTRICT_OrgApacheLuceneIndexSegmentTermVector
#define INCLUDE_ALL_OrgApacheLuceneIndexSegmentTermVector 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexSegmentTermVector 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexSegmentTermVector

#if !defined (OrgApacheLuceneIndexSegmentTermVector_) && (INCLUDE_ALL_OrgApacheLuceneIndexSegmentTermVector || defined(INCLUDE_OrgApacheLuceneIndexSegmentTermVector))
#define OrgApacheLuceneIndexSegmentTermVector_

#define RESTRICT_OrgApacheLuceneIndexTermFreqVector 1
#define INCLUDE_OrgApacheLuceneIndexTermFreqVector 1
#include "org/apache/lucene/index/TermFreqVector.h"

@class IOSIntArray;
@class IOSObjectArray;

@interface OrgApacheLuceneIndexSegmentTermVector : NSObject < OrgApacheLuceneIndexTermFreqVector >

#pragma mark Public

- (NSString *)getField;

- (IOSIntArray *)getTermFrequencies;

- (IOSObjectArray *)getTerms;

- (IOSIntArray *)indexesOfWithNSStringArray:(IOSObjectArray *)termNumbers
                                    withInt:(jint)start
                                    withInt:(jint)len;

- (jint)indexOfWithNSString:(NSString *)termText;

- (jint)size;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)field
               withNSStringArray:(IOSObjectArray *)terms
                    withIntArray:(IOSIntArray *)termFreqs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexSegmentTermVector)

FOUNDATION_EXPORT void OrgApacheLuceneIndexSegmentTermVector_initWithNSString_withNSStringArray_withIntArray_(OrgApacheLuceneIndexSegmentTermVector *self, NSString *field, IOSObjectArray *terms, IOSIntArray *termFreqs);

FOUNDATION_EXPORT OrgApacheLuceneIndexSegmentTermVector *new_OrgApacheLuceneIndexSegmentTermVector_initWithNSString_withNSStringArray_withIntArray_(NSString *field, IOSObjectArray *terms, IOSIntArray *termFreqs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexSegmentTermVector *create_OrgApacheLuceneIndexSegmentTermVector_initWithNSString_withNSStringArray_withIntArray_(NSString *field, IOSObjectArray *terms, IOSIntArray *termFreqs);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexSegmentTermVector)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexSegmentTermVector")
