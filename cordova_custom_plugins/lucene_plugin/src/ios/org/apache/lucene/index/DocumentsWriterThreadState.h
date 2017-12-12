//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/index/DocumentsWriterThreadState.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexDocumentsWriterThreadState")
#ifdef RESTRICT_OrgApacheLuceneIndexDocumentsWriterThreadState
#define INCLUDE_ALL_OrgApacheLuceneIndexDocumentsWriterThreadState 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexDocumentsWriterThreadState 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexDocumentsWriterThreadState

#if !defined (OrgApacheLuceneIndexDocumentsWriterThreadState_) && (INCLUDE_ALL_OrgApacheLuceneIndexDocumentsWriterThreadState || defined(INCLUDE_OrgApacheLuceneIndexDocumentsWriterThreadState))
#define OrgApacheLuceneIndexDocumentsWriterThreadState_

@class OrgApacheLuceneIndexDocConsumerPerThread;
@class OrgApacheLuceneIndexDocumentsWriter;
@class OrgApacheLuceneIndexDocumentsWriter_DocState;

@interface OrgApacheLuceneIndexDocumentsWriterThreadState : NSObject {
 @public
  jboolean isIdle_;
  jint numThreads_;
  OrgApacheLuceneIndexDocConsumerPerThread *consumer_;
  OrgApacheLuceneIndexDocumentsWriter_DocState *docState_;
  OrgApacheLuceneIndexDocumentsWriter *docWriter_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneIndexDocumentsWriter:(OrgApacheLuceneIndexDocumentsWriter *)docWriter;

#pragma mark Package-Private

- (void)doAfterFlush;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexDocumentsWriterThreadState)

J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexDocumentsWriterThreadState, consumer_, OrgApacheLuceneIndexDocConsumerPerThread *)
J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexDocumentsWriterThreadState, docState_, OrgApacheLuceneIndexDocumentsWriter_DocState *)
J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexDocumentsWriterThreadState, docWriter_, OrgApacheLuceneIndexDocumentsWriter *)

FOUNDATION_EXPORT void OrgApacheLuceneIndexDocumentsWriterThreadState_initWithOrgApacheLuceneIndexDocumentsWriter_(OrgApacheLuceneIndexDocumentsWriterThreadState *self, OrgApacheLuceneIndexDocumentsWriter *docWriter);

FOUNDATION_EXPORT OrgApacheLuceneIndexDocumentsWriterThreadState *new_OrgApacheLuceneIndexDocumentsWriterThreadState_initWithOrgApacheLuceneIndexDocumentsWriter_(OrgApacheLuceneIndexDocumentsWriter *docWriter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexDocumentsWriterThreadState *create_OrgApacheLuceneIndexDocumentsWriterThreadState_initWithOrgApacheLuceneIndexDocumentsWriter_(OrgApacheLuceneIndexDocumentsWriter *docWriter);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexDocumentsWriterThreadState)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexDocumentsWriterThreadState")
