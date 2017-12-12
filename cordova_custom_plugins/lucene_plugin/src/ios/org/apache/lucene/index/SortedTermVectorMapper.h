//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/index/SortedTermVectorMapper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexSortedTermVectorMapper")
#ifdef RESTRICT_OrgApacheLuceneIndexSortedTermVectorMapper
#define INCLUDE_ALL_OrgApacheLuceneIndexSortedTermVectorMapper 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexSortedTermVectorMapper 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexSortedTermVectorMapper

#if !defined (OrgApacheLuceneIndexSortedTermVectorMapper_) && (INCLUDE_ALL_OrgApacheLuceneIndexSortedTermVectorMapper || defined(INCLUDE_OrgApacheLuceneIndexSortedTermVectorMapper))
#define OrgApacheLuceneIndexSortedTermVectorMapper_

#define RESTRICT_OrgApacheLuceneIndexTermVectorMapper 1
#define INCLUDE_OrgApacheLuceneIndexTermVectorMapper 1
#include "org/apache/lucene/index/TermVectorMapper.h"

@class IOSIntArray;
@class IOSObjectArray;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedSet;

@interface OrgApacheLuceneIndexSortedTermVectorMapper : OrgApacheLuceneIndexTermVectorMapper

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)ignoringPositions
                    withBoolean:(jboolean)ignoringOffsets
         withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id<JavaUtilSortedSet>)getTermVectorEntrySet;

- (void)mapWithNSString:(NSString *)term
                withInt:(jint)frequency
withOrgApacheLuceneIndexTermVectorOffsetInfoArray:(IOSObjectArray *)offsets
           withIntArray:(IOSIntArray *)positions;

- (void)setExpectationsWithNSString:(NSString *)field
                            withInt:(jint)numTerms
                        withBoolean:(jboolean)storeOffsets
                        withBoolean:(jboolean)storePositions;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexSortedTermVectorMapper)

inline NSString *OrgApacheLuceneIndexSortedTermVectorMapper_get_ALL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheLuceneIndexSortedTermVectorMapper_ALL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheLuceneIndexSortedTermVectorMapper, ALL, NSString *)

FOUNDATION_EXPORT void OrgApacheLuceneIndexSortedTermVectorMapper_initWithJavaUtilComparator_(OrgApacheLuceneIndexSortedTermVectorMapper *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT OrgApacheLuceneIndexSortedTermVectorMapper *new_OrgApacheLuceneIndexSortedTermVectorMapper_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexSortedTermVectorMapper *create_OrgApacheLuceneIndexSortedTermVectorMapper_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT void OrgApacheLuceneIndexSortedTermVectorMapper_initWithBoolean_withBoolean_withJavaUtilComparator_(OrgApacheLuceneIndexSortedTermVectorMapper *self, jboolean ignoringPositions, jboolean ignoringOffsets, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT OrgApacheLuceneIndexSortedTermVectorMapper *new_OrgApacheLuceneIndexSortedTermVectorMapper_initWithBoolean_withBoolean_withJavaUtilComparator_(jboolean ignoringPositions, jboolean ignoringOffsets, id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexSortedTermVectorMapper *create_OrgApacheLuceneIndexSortedTermVectorMapper_initWithBoolean_withBoolean_withJavaUtilComparator_(jboolean ignoringPositions, jboolean ignoringOffsets, id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexSortedTermVectorMapper)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexSortedTermVectorMapper")
