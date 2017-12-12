//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/search/TopDocsCollector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchTopDocsCollector")
#ifdef RESTRICT_OrgApacheLuceneSearchTopDocsCollector
#define INCLUDE_ALL_OrgApacheLuceneSearchTopDocsCollector 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchTopDocsCollector 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchTopDocsCollector

#if !defined (OrgApacheLuceneSearchTopDocsCollector_) && (INCLUDE_ALL_OrgApacheLuceneSearchTopDocsCollector || defined(INCLUDE_OrgApacheLuceneSearchTopDocsCollector))
#define OrgApacheLuceneSearchTopDocsCollector_

#define RESTRICT_OrgApacheLuceneSearchCollector 1
#define INCLUDE_OrgApacheLuceneSearchCollector 1
#include "org/apache/lucene/search/Collector.h"

@class IOSObjectArray;
@class OrgApacheLuceneSearchTopDocs;
@class OrgApacheLuceneUtilPriorityQueue;

@interface OrgApacheLuceneSearchTopDocsCollector : OrgApacheLuceneSearchCollector {
 @public
  OrgApacheLuceneUtilPriorityQueue *pq_;
  jint totalHits_;
}

#pragma mark Public

- (jint)getTotalHits;

- (OrgApacheLuceneSearchTopDocs *)topDocs;

- (OrgApacheLuceneSearchTopDocs *)topDocsWithInt:(jint)start;

- (OrgApacheLuceneSearchTopDocs *)topDocsWithInt:(jint)start
                                         withInt:(jint)howMany;

#pragma mark Protected

- (instancetype)initWithOrgApacheLuceneUtilPriorityQueue:(OrgApacheLuceneUtilPriorityQueue *)pq;

- (OrgApacheLuceneSearchTopDocs *)newTopDocsWithOrgApacheLuceneSearchScoreDocArray:(IOSObjectArray *)results
                                                                           withInt:(jint)start OBJC_METHOD_FAMILY_NONE;

- (void)populateResultsWithOrgApacheLuceneSearchScoreDocArray:(IOSObjectArray *)results
                                                      withInt:(jint)howMany;

- (jint)topDocsSize;

@end

J2OBJC_STATIC_INIT(OrgApacheLuceneSearchTopDocsCollector)

J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchTopDocsCollector, pq_, OrgApacheLuceneUtilPriorityQueue *)

inline OrgApacheLuceneSearchTopDocs *OrgApacheLuceneSearchTopDocsCollector_get_EMPTY_TOPDOCS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheLuceneSearchTopDocs *OrgApacheLuceneSearchTopDocsCollector_EMPTY_TOPDOCS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheLuceneSearchTopDocsCollector, EMPTY_TOPDOCS, OrgApacheLuceneSearchTopDocs *)

FOUNDATION_EXPORT void OrgApacheLuceneSearchTopDocsCollector_initWithOrgApacheLuceneUtilPriorityQueue_(OrgApacheLuceneSearchTopDocsCollector *self, OrgApacheLuceneUtilPriorityQueue *pq);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchTopDocsCollector)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchTopDocsCollector")
