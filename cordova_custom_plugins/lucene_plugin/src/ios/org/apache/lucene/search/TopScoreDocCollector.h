//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/search/TopScoreDocCollector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchTopScoreDocCollector")
#ifdef RESTRICT_OrgApacheLuceneSearchTopScoreDocCollector
#define INCLUDE_ALL_OrgApacheLuceneSearchTopScoreDocCollector 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchTopScoreDocCollector 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchTopScoreDocCollector

#if !defined (OrgApacheLuceneSearchTopScoreDocCollector_) && (INCLUDE_ALL_OrgApacheLuceneSearchTopScoreDocCollector || defined(INCLUDE_OrgApacheLuceneSearchTopScoreDocCollector))
#define OrgApacheLuceneSearchTopScoreDocCollector_

#define RESTRICT_OrgApacheLuceneSearchTopDocsCollector 1
#define INCLUDE_OrgApacheLuceneSearchTopDocsCollector 1
#include "org/apache/lucene/search/TopDocsCollector.h"

@class IOSObjectArray;
@class OrgApacheLuceneIndexIndexReader;
@class OrgApacheLuceneSearchScoreDoc;
@class OrgApacheLuceneSearchScorer;
@class OrgApacheLuceneSearchTopDocs;

@interface OrgApacheLuceneSearchTopScoreDocCollector : OrgApacheLuceneSearchTopDocsCollector {
 @public
  OrgApacheLuceneSearchScoreDoc *pqTop_;
  jint docBase_;
  OrgApacheLuceneSearchScorer *scorer_;
}

#pragma mark Public

+ (OrgApacheLuceneSearchTopScoreDocCollector *)createWithInt:(jint)numHits
                                                 withBoolean:(jboolean)docsScoredInOrder;

+ (OrgApacheLuceneSearchTopScoreDocCollector *)createWithInt:(jint)numHits
                           withOrgApacheLuceneSearchScoreDoc:(OrgApacheLuceneSearchScoreDoc *)after
                                                 withBoolean:(jboolean)docsScoredInOrder;

- (void)setNextReaderWithOrgApacheLuceneIndexIndexReader:(OrgApacheLuceneIndexIndexReader *)reader
                                                 withInt:(jint)base;

- (void)setScorerWithOrgApacheLuceneSearchScorer:(OrgApacheLuceneSearchScorer *)scorer;

#pragma mark Protected

- (OrgApacheLuceneSearchTopDocs *)newTopDocsWithOrgApacheLuceneSearchScoreDocArray:(IOSObjectArray *)results
                                                                           withInt:(jint)start OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchTopScoreDocCollector)

J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchTopScoreDocCollector, pqTop_, OrgApacheLuceneSearchScoreDoc *)
J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchTopScoreDocCollector, scorer_, OrgApacheLuceneSearchScorer *)

FOUNDATION_EXPORT OrgApacheLuceneSearchTopScoreDocCollector *OrgApacheLuceneSearchTopScoreDocCollector_createWithInt_withBoolean_(jint numHits, jboolean docsScoredInOrder);

FOUNDATION_EXPORT OrgApacheLuceneSearchTopScoreDocCollector *OrgApacheLuceneSearchTopScoreDocCollector_createWithInt_withOrgApacheLuceneSearchScoreDoc_withBoolean_(jint numHits, OrgApacheLuceneSearchScoreDoc *after, jboolean docsScoredInOrder);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchTopScoreDocCollector)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchTopScoreDocCollector")
