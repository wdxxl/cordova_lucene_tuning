//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/FormatPostingsTermsConsumer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexFormatPostingsTermsConsumer")
#ifdef RESTRICT_OrgApacheLuceneIndexFormatPostingsTermsConsumer
#define INCLUDE_ALL_OrgApacheLuceneIndexFormatPostingsTermsConsumer 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexFormatPostingsTermsConsumer 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexFormatPostingsTermsConsumer

#if !defined (OrgApacheLuceneIndexFormatPostingsTermsConsumer_) && (INCLUDE_ALL_OrgApacheLuceneIndexFormatPostingsTermsConsumer || defined(INCLUDE_OrgApacheLuceneIndexFormatPostingsTermsConsumer))
#define OrgApacheLuceneIndexFormatPostingsTermsConsumer_

@class IOSCharArray;
@class OrgApacheLuceneIndexFormatPostingsDocsConsumer;

@interface OrgApacheLuceneIndexFormatPostingsTermsConsumer : NSObject {
 @public
  IOSCharArray *termBuffer_;
}

#pragma mark Package-Private

- (instancetype)init;

- (OrgApacheLuceneIndexFormatPostingsDocsConsumer *)addTermWithCharArray:(IOSCharArray *)text
                                                                 withInt:(jint)start;

- (OrgApacheLuceneIndexFormatPostingsDocsConsumer *)addTermWithNSString:(NSString *)text;

- (void)finish;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexFormatPostingsTermsConsumer)

J2OBJC_FIELD_SETTER(OrgApacheLuceneIndexFormatPostingsTermsConsumer, termBuffer_, IOSCharArray *)

FOUNDATION_EXPORT void OrgApacheLuceneIndexFormatPostingsTermsConsumer_init(OrgApacheLuceneIndexFormatPostingsTermsConsumer *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexFormatPostingsTermsConsumer)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexFormatPostingsTermsConsumer")
