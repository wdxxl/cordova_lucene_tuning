//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/IndexFileNameFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexIndexFileNameFilter")
#ifdef RESTRICT_OrgApacheLuceneIndexIndexFileNameFilter
#define INCLUDE_ALL_OrgApacheLuceneIndexIndexFileNameFilter 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexIndexFileNameFilter 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexIndexFileNameFilter

#if !defined (OrgApacheLuceneIndexIndexFileNameFilter_) && (INCLUDE_ALL_OrgApacheLuceneIndexIndexFileNameFilter || defined(INCLUDE_OrgApacheLuceneIndexIndexFileNameFilter))
#define OrgApacheLuceneIndexIndexFileNameFilter_

#define RESTRICT_JavaIoFilenameFilter 1
#define INCLUDE_JavaIoFilenameFilter 1
#include "java/io/FilenameFilter.h"

@class JavaIoFile;

@interface OrgApacheLuceneIndexIndexFileNameFilter : NSObject < JavaIoFilenameFilter >

#pragma mark Public

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)name;

+ (OrgApacheLuceneIndexIndexFileNameFilter *)getFilter;

- (jboolean)isCFSFileWithNSString:(NSString *)name;

@end

J2OBJC_STATIC_INIT(OrgApacheLuceneIndexIndexFileNameFilter)

FOUNDATION_EXPORT OrgApacheLuceneIndexIndexFileNameFilter *OrgApacheLuceneIndexIndexFileNameFilter_getFilter();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexIndexFileNameFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexIndexFileNameFilter")
