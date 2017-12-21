//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/search/spans/TermSpans.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchSpansTermSpans")
#ifdef RESTRICT_OrgApacheLuceneSearchSpansTermSpans
#define INCLUDE_ALL_OrgApacheLuceneSearchSpansTermSpans 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchSpansTermSpans 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchSpansTermSpans

#if !defined (OrgApacheLuceneSearchSpansTermSpans_) && (INCLUDE_ALL_OrgApacheLuceneSearchSpansTermSpans || defined(INCLUDE_OrgApacheLuceneSearchSpansTermSpans))
#define OrgApacheLuceneSearchSpansTermSpans_

#define RESTRICT_OrgApacheLuceneSearchSpansSpans 1
#define INCLUDE_OrgApacheLuceneSearchSpansSpans 1
#include "org/apache/lucene/search/spans/Spans.h"

@class OrgApacheLuceneIndexTerm;
@protocol JavaUtilCollection;
@protocol OrgApacheLuceneIndexTermPositions;

@interface OrgApacheLuceneSearchSpansTermSpans : OrgApacheLuceneSearchSpansSpans {
 @public
  id<OrgApacheLuceneIndexTermPositions> positions_;
  OrgApacheLuceneIndexTerm *term_;
  jint doc_;
  jint freq_;
  jint count_;
  jint position_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneIndexTermPositions:(id<OrgApacheLuceneIndexTermPositions>)positions
                             withOrgApacheLuceneIndexTerm:(OrgApacheLuceneIndexTerm *)term;

- (jint)doc;

- (jint)end;

- (id<JavaUtilCollection>)getPayload;

- (id<OrgApacheLuceneIndexTermPositions>)getPositions;

- (jboolean)isPayloadAvailable;

- (jboolean)next;

- (jboolean)skipToWithInt:(jint)target;

- (jint)start;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchSpansTermSpans)

J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchSpansTermSpans, positions_, id<OrgApacheLuceneIndexTermPositions>)
J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchSpansTermSpans, term_, OrgApacheLuceneIndexTerm *)

FOUNDATION_EXPORT void OrgApacheLuceneSearchSpansTermSpans_initWithOrgApacheLuceneIndexTermPositions_withOrgApacheLuceneIndexTerm_(OrgApacheLuceneSearchSpansTermSpans *self, id<OrgApacheLuceneIndexTermPositions> positions, OrgApacheLuceneIndexTerm *term);

FOUNDATION_EXPORT OrgApacheLuceneSearchSpansTermSpans *new_OrgApacheLuceneSearchSpansTermSpans_initWithOrgApacheLuceneIndexTermPositions_withOrgApacheLuceneIndexTerm_(id<OrgApacheLuceneIndexTermPositions> positions, OrgApacheLuceneIndexTerm *term) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchSpansTermSpans *create_OrgApacheLuceneSearchSpansTermSpans_initWithOrgApacheLuceneIndexTermPositions_withOrgApacheLuceneIndexTerm_(id<OrgApacheLuceneIndexTermPositions> positions, OrgApacheLuceneIndexTerm *term);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchSpansTermSpans)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchSpansTermSpans")
