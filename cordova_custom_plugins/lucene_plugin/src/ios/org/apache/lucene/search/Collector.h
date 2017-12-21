//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/search/Collector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchCollector")
#ifdef RESTRICT_OrgApacheLuceneSearchCollector
#define INCLUDE_ALL_OrgApacheLuceneSearchCollector 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchCollector 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchCollector

#if !defined (OrgApacheLuceneSearchCollector_) && (INCLUDE_ALL_OrgApacheLuceneSearchCollector || defined(INCLUDE_OrgApacheLuceneSearchCollector))
#define OrgApacheLuceneSearchCollector_

@class OrgApacheLuceneIndexIndexReader;
@class OrgApacheLuceneSearchScorer;

@interface OrgApacheLuceneSearchCollector : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)acceptsDocsOutOfOrder;

- (void)collectWithInt:(jint)doc;

- (void)setNextReaderWithOrgApacheLuceneIndexIndexReader:(OrgApacheLuceneIndexIndexReader *)reader
                                                 withInt:(jint)docBase;

- (void)setScorerWithOrgApacheLuceneSearchScorer:(OrgApacheLuceneSearchScorer *)scorer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchCollector)

FOUNDATION_EXPORT void OrgApacheLuceneSearchCollector_init(OrgApacheLuceneSearchCollector *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchCollector)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchCollector")
