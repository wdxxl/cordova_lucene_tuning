//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/search/MultiCollector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchMultiCollector")
#ifdef RESTRICT_OrgApacheLuceneSearchMultiCollector
#define INCLUDE_ALL_OrgApacheLuceneSearchMultiCollector 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchMultiCollector 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchMultiCollector

#if !defined (OrgApacheLuceneSearchMultiCollector_) && (INCLUDE_ALL_OrgApacheLuceneSearchMultiCollector || defined(INCLUDE_OrgApacheLuceneSearchMultiCollector))
#define OrgApacheLuceneSearchMultiCollector_

#define RESTRICT_OrgApacheLuceneSearchCollector 1
#define INCLUDE_OrgApacheLuceneSearchCollector 1
#include "org/apache/lucene/search/Collector.h"

@class IOSObjectArray;
@class OrgApacheLuceneIndexIndexReader;
@class OrgApacheLuceneSearchScorer;

@interface OrgApacheLuceneSearchMultiCollector : OrgApacheLuceneSearchCollector

#pragma mark Public

- (jboolean)acceptsDocsOutOfOrder;

- (void)collectWithInt:(jint)doc;

- (void)setNextReaderWithOrgApacheLuceneIndexIndexReader:(OrgApacheLuceneIndexIndexReader *)reader
                                                 withInt:(jint)o;

- (void)setScorerWithOrgApacheLuceneSearchScorer:(OrgApacheLuceneSearchScorer *)s;

+ (OrgApacheLuceneSearchCollector *)wrapWithOrgApacheLuceneSearchCollectorArray:(IOSObjectArray *)collectors;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchMultiCollector)

FOUNDATION_EXPORT OrgApacheLuceneSearchCollector *OrgApacheLuceneSearchMultiCollector_wrapWithOrgApacheLuceneSearchCollectorArray_(IOSObjectArray *collectors);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchMultiCollector)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchMultiCollector")
