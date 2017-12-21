//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/search/SimilarityDelegator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchSimilarityDelegator")
#ifdef RESTRICT_OrgApacheLuceneSearchSimilarityDelegator
#define INCLUDE_ALL_OrgApacheLuceneSearchSimilarityDelegator 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchSimilarityDelegator 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchSimilarityDelegator

#if !defined (OrgApacheLuceneSearchSimilarityDelegator_) && (INCLUDE_ALL_OrgApacheLuceneSearchSimilarityDelegator || defined(INCLUDE_OrgApacheLuceneSearchSimilarityDelegator))
#define OrgApacheLuceneSearchSimilarityDelegator_

#define RESTRICT_OrgApacheLuceneSearchSimilarity 1
#define INCLUDE_OrgApacheLuceneSearchSimilarity 1
#include "org/apache/lucene/search/Similarity.h"

@class IOSByteArray;
@class OrgApacheLuceneIndexFieldInvertState;

@interface OrgApacheLuceneSearchSimilarityDelegator : OrgApacheLuceneSearchSimilarity

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneSearchSimilarity:(OrgApacheLuceneSearchSimilarity *)delegee;

- (jfloat)computeNormWithNSString:(NSString *)fieldName
withOrgApacheLuceneIndexFieldInvertState:(OrgApacheLuceneIndexFieldInvertState *)state;

- (jfloat)coordWithInt:(jint)overlap
               withInt:(jint)maxOverlap;

- (jfloat)idfWithInt:(jint)docFreq
             withInt:(jint)numDocs;

- (jfloat)queryNormWithFloat:(jfloat)sumOfSquaredWeights;

- (jfloat)scorePayloadWithInt:(jint)docId
                 withNSString:(NSString *)fieldName
                      withInt:(jint)start
                      withInt:(jint)end
                withByteArray:(IOSByteArray *)payload
                      withInt:(jint)offset
                      withInt:(jint)length;

- (jfloat)sloppyFreqWithInt:(jint)distance;

- (jfloat)tfWithFloat:(jfloat)freq;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchSimilarityDelegator)

FOUNDATION_EXPORT void OrgApacheLuceneSearchSimilarityDelegator_initWithOrgApacheLuceneSearchSimilarity_(OrgApacheLuceneSearchSimilarityDelegator *self, OrgApacheLuceneSearchSimilarity *delegee);

FOUNDATION_EXPORT OrgApacheLuceneSearchSimilarityDelegator *new_OrgApacheLuceneSearchSimilarityDelegator_initWithOrgApacheLuceneSearchSimilarity_(OrgApacheLuceneSearchSimilarity *delegee) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchSimilarityDelegator *create_OrgApacheLuceneSearchSimilarityDelegator_initWithOrgApacheLuceneSearchSimilarity_(OrgApacheLuceneSearchSimilarity *delegee);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchSimilarityDelegator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchSimilarityDelegator")
