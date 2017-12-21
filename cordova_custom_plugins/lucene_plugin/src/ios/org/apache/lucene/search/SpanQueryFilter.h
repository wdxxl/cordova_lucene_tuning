//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/search/SpanQueryFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchSpanQueryFilter")
#ifdef RESTRICT_OrgApacheLuceneSearchSpanQueryFilter
#define INCLUDE_ALL_OrgApacheLuceneSearchSpanQueryFilter 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchSpanQueryFilter 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchSpanQueryFilter

#if !defined (OrgApacheLuceneSearchSpanQueryFilter_) && (INCLUDE_ALL_OrgApacheLuceneSearchSpanQueryFilter || defined(INCLUDE_OrgApacheLuceneSearchSpanQueryFilter))
#define OrgApacheLuceneSearchSpanQueryFilter_

#define RESTRICT_OrgApacheLuceneSearchSpanFilter 1
#define INCLUDE_OrgApacheLuceneSearchSpanFilter 1
#include "org/apache/lucene/search/SpanFilter.h"

@class OrgApacheLuceneIndexIndexReader;
@class OrgApacheLuceneSearchDocIdSet;
@class OrgApacheLuceneSearchSpanFilterResult;
@class OrgApacheLuceneSearchSpansSpanQuery;

@interface OrgApacheLuceneSearchSpanQueryFilter : OrgApacheLuceneSearchSpanFilter {
 @public
  OrgApacheLuceneSearchSpansSpanQuery *query_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneSearchSpansSpanQuery:(OrgApacheLuceneSearchSpansSpanQuery *)query;

- (OrgApacheLuceneSearchSpanFilterResult *)bitSpansWithOrgApacheLuceneIndexIndexReader:(OrgApacheLuceneIndexIndexReader *)reader;

- (jboolean)isEqual:(id)o;

- (OrgApacheLuceneSearchDocIdSet *)getDocIdSetWithOrgApacheLuceneIndexIndexReader:(OrgApacheLuceneIndexIndexReader *)reader;

- (OrgApacheLuceneSearchSpansSpanQuery *)getQuery;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchSpanQueryFilter)

J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchSpanQueryFilter, query_, OrgApacheLuceneSearchSpansSpanQuery *)

FOUNDATION_EXPORT void OrgApacheLuceneSearchSpanQueryFilter_init(OrgApacheLuceneSearchSpanQueryFilter *self);

FOUNDATION_EXPORT OrgApacheLuceneSearchSpanQueryFilter *new_OrgApacheLuceneSearchSpanQueryFilter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchSpanQueryFilter *create_OrgApacheLuceneSearchSpanQueryFilter_init();

FOUNDATION_EXPORT void OrgApacheLuceneSearchSpanQueryFilter_initWithOrgApacheLuceneSearchSpansSpanQuery_(OrgApacheLuceneSearchSpanQueryFilter *self, OrgApacheLuceneSearchSpansSpanQuery *query);

FOUNDATION_EXPORT OrgApacheLuceneSearchSpanQueryFilter *new_OrgApacheLuceneSearchSpanQueryFilter_initWithOrgApacheLuceneSearchSpansSpanQuery_(OrgApacheLuceneSearchSpansSpanQuery *query) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchSpanQueryFilter *create_OrgApacheLuceneSearchSpanQueryFilter_initWithOrgApacheLuceneSearchSpansSpanQuery_(OrgApacheLuceneSearchSpansSpanQuery *query);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchSpanQueryFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchSpanQueryFilter")
