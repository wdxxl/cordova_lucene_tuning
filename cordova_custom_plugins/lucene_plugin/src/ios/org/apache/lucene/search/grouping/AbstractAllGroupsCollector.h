//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/search/grouping/AbstractAllGroupsCollector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector")
#ifdef RESTRICT_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector
#define INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector

#if !defined (OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector_) && (INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector || defined(INCLUDE_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector))
#define OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector_

#define RESTRICT_OrgApacheLuceneSearchCollector 1
#define INCLUDE_OrgApacheLuceneSearchCollector 1
#include "org/apache/lucene/search/Collector.h"

@class OrgApacheLuceneSearchScorer;
@protocol JavaUtilCollection;

@interface OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector : OrgApacheLuceneSearchCollector

#pragma mark Public

- (instancetype)init;

- (jboolean)acceptsDocsOutOfOrder;

- (jint)getGroupCount;

- (id<JavaUtilCollection>)getGroups;

- (void)setScorerWithOrgApacheLuceneSearchScorer:(OrgApacheLuceneSearchScorer *)scorer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector)

FOUNDATION_EXPORT void OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector_init(OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractAllGroupsCollector")
