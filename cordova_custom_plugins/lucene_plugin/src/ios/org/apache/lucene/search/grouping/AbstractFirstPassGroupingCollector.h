//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/search/grouping/AbstractFirstPassGroupingCollector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector")
#ifdef RESTRICT_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector
#define INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector

#if !defined (OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector_) && (INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector || defined(INCLUDE_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector))
#define OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector_

#define RESTRICT_OrgApacheLuceneSearchCollector 1
#define INCLUDE_OrgApacheLuceneSearchCollector 1
#include "org/apache/lucene/search/Collector.h"

@class OrgApacheLuceneIndexIndexReader;
@class OrgApacheLuceneSearchScorer;
@class OrgApacheLuceneSearchSort;
@protocol JavaUtilCollection;

@interface OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector : OrgApacheLuceneSearchCollector

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneSearchSort:(OrgApacheLuceneSearchSort *)groupSort
                                          withInt:(jint)topNGroups;

- (jboolean)acceptsDocsOutOfOrder;

- (void)collectWithInt:(jint)doc;

- (id<JavaUtilCollection>)getTopGroupsWithInt:(jint)groupOffset
                                  withBoolean:(jboolean)fillFields;

- (void)setNextReaderWithOrgApacheLuceneIndexIndexReader:(OrgApacheLuceneIndexIndexReader *)reader
                                                 withInt:(jint)docBase;

- (void)setScorerWithOrgApacheLuceneSearchScorer:(OrgApacheLuceneSearchScorer *)scorer;

#pragma mark Protected

- (id)copyDocGroupValueWithId:(id)groupValue
                       withId:(id)reuse OBJC_METHOD_FAMILY_NONE;

- (id)getDocGroupValueWithInt:(jint)doc;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector)

FOUNDATION_EXPORT void OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector_initWithOrgApacheLuceneSearchSort_withInt_(OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector *self, OrgApacheLuceneSearchSort *groupSort, jint topNGroups);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector)

#endif

#if !defined (OrgApacheLuceneSearchGroupingCollectedSearchGroup_) && (INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector || defined(INCLUDE_OrgApacheLuceneSearchGroupingCollectedSearchGroup))
#define OrgApacheLuceneSearchGroupingCollectedSearchGroup_

#define RESTRICT_OrgApacheLuceneSearchGroupingSearchGroup 1
#define INCLUDE_OrgApacheLuceneSearchGroupingSearchGroup 1
#include "org/apache/lucene/search/grouping/SearchGroup.h"

@interface OrgApacheLuceneSearchGroupingCollectedSearchGroup : OrgApacheLuceneSearchGroupingSearchGroup {
 @public
  jint topDoc_;
  jint comparatorSlot_;
}

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchGroupingCollectedSearchGroup)

FOUNDATION_EXPORT void OrgApacheLuceneSearchGroupingCollectedSearchGroup_init(OrgApacheLuceneSearchGroupingCollectedSearchGroup *self);

FOUNDATION_EXPORT OrgApacheLuceneSearchGroupingCollectedSearchGroup *new_OrgApacheLuceneSearchGroupingCollectedSearchGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchGroupingCollectedSearchGroup *create_OrgApacheLuceneSearchGroupingCollectedSearchGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchGroupingCollectedSearchGroup)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchGroupingAbstractFirstPassGroupingCollector")
