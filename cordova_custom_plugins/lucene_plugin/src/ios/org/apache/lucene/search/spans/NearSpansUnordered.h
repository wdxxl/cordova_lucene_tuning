//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/search/spans/NearSpansUnordered.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchSpansNearSpansUnordered")
#ifdef RESTRICT_OrgApacheLuceneSearchSpansNearSpansUnordered
#define INCLUDE_ALL_OrgApacheLuceneSearchSpansNearSpansUnordered 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchSpansNearSpansUnordered 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchSpansNearSpansUnordered

#if !defined (OrgApacheLuceneSearchSpansNearSpansUnordered_) && (INCLUDE_ALL_OrgApacheLuceneSearchSpansNearSpansUnordered || defined(INCLUDE_OrgApacheLuceneSearchSpansNearSpansUnordered))
#define OrgApacheLuceneSearchSpansNearSpansUnordered_

#define RESTRICT_OrgApacheLuceneSearchSpansSpans 1
#define INCLUDE_OrgApacheLuceneSearchSpansSpans 1
#include "org/apache/lucene/search/spans/Spans.h"

@class IOSObjectArray;
@class OrgApacheLuceneIndexIndexReader;
@class OrgApacheLuceneSearchSpansSpanNearQuery;
@protocol JavaUtilCollection;

@interface OrgApacheLuceneSearchSpansNearSpansUnordered : OrgApacheLuceneSearchSpansSpans

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneSearchSpansSpanNearQuery:(OrgApacheLuceneSearchSpansSpanNearQuery *)query
                            withOrgApacheLuceneIndexIndexReader:(OrgApacheLuceneIndexIndexReader *)reader;

- (jint)doc;

- (jint)end;

- (id<JavaUtilCollection>)getPayload;

- (IOSObjectArray *)getSubSpans;

- (jboolean)isPayloadAvailable;

- (jboolean)next;

- (jboolean)skipToWithInt:(jint)target;

- (jint)start;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchSpansNearSpansUnordered)

FOUNDATION_EXPORT void OrgApacheLuceneSearchSpansNearSpansUnordered_initWithOrgApacheLuceneSearchSpansSpanNearQuery_withOrgApacheLuceneIndexIndexReader_(OrgApacheLuceneSearchSpansNearSpansUnordered *self, OrgApacheLuceneSearchSpansSpanNearQuery *query, OrgApacheLuceneIndexIndexReader *reader);

FOUNDATION_EXPORT OrgApacheLuceneSearchSpansNearSpansUnordered *new_OrgApacheLuceneSearchSpansNearSpansUnordered_initWithOrgApacheLuceneSearchSpansSpanNearQuery_withOrgApacheLuceneIndexIndexReader_(OrgApacheLuceneSearchSpansSpanNearQuery *query, OrgApacheLuceneIndexIndexReader *reader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchSpansNearSpansUnordered *create_OrgApacheLuceneSearchSpansNearSpansUnordered_initWithOrgApacheLuceneSearchSpansSpanNearQuery_withOrgApacheLuceneIndexIndexReader_(OrgApacheLuceneSearchSpansSpanNearQuery *query, OrgApacheLuceneIndexIndexReader *reader);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchSpansNearSpansUnordered)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchSpansNearSpansUnordered")
