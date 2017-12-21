//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/DocFieldConsumer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexDocFieldConsumer")
#ifdef RESTRICT_OrgApacheLuceneIndexDocFieldConsumer
#define INCLUDE_ALL_OrgApacheLuceneIndexDocFieldConsumer 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexDocFieldConsumer 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexDocFieldConsumer

#if !defined (OrgApacheLuceneIndexDocFieldConsumer_) && (INCLUDE_ALL_OrgApacheLuceneIndexDocFieldConsumer || defined(INCLUDE_OrgApacheLuceneIndexDocFieldConsumer))
#define OrgApacheLuceneIndexDocFieldConsumer_

@class OrgApacheLuceneIndexDocFieldConsumerPerThread;
@class OrgApacheLuceneIndexDocFieldProcessorPerThread;
@class OrgApacheLuceneIndexFieldInfos;
@class OrgApacheLuceneIndexSegmentWriteState;
@protocol JavaUtilMap;

@interface OrgApacheLuceneIndexDocFieldConsumer : NSObject {
 @public
  OrgApacheLuceneIndexFieldInfos *fieldInfos_;
}

#pragma mark Package-Private

- (instancetype)init;

- (void)abort;

- (OrgApacheLuceneIndexDocFieldConsumerPerThread *)addThreadWithOrgApacheLuceneIndexDocFieldProcessorPerThread:(OrgApacheLuceneIndexDocFieldProcessorPerThread *)docFieldProcessorPerThread;

- (void)flushWithJavaUtilMap:(id<JavaUtilMap>)threadsAndFields
withOrgApacheLuceneIndexSegmentWriteState:(OrgApacheLuceneIndexSegmentWriteState *)state;

- (jboolean)freeRAM;

- (void)setFieldInfosWithOrgApacheLuceneIndexFieldInfos:(OrgApacheLuceneIndexFieldInfos *)fieldInfos;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexDocFieldConsumer)

J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexDocFieldConsumer, fieldInfos_, OrgApacheLuceneIndexFieldInfos *)

FOUNDATION_EXPORT void OrgApacheLuceneIndexDocFieldConsumer_init(OrgApacheLuceneIndexDocFieldConsumer *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexDocFieldConsumer)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexDocFieldConsumer")
