//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/util/ToStringUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneUtilToStringUtils")
#ifdef RESTRICT_OrgApacheLuceneUtilToStringUtils
#define INCLUDE_ALL_OrgApacheLuceneUtilToStringUtils 0
#else
#define INCLUDE_ALL_OrgApacheLuceneUtilToStringUtils 1
#endif
#undef RESTRICT_OrgApacheLuceneUtilToStringUtils

#if !defined (OrgApacheLuceneUtilToStringUtils_) && (INCLUDE_ALL_OrgApacheLuceneUtilToStringUtils || defined(INCLUDE_OrgApacheLuceneUtilToStringUtils))
#define OrgApacheLuceneUtilToStringUtils_

@class IOSByteArray;
@class JavaLangStringBuilder;

@interface OrgApacheLuceneUtilToStringUtils : NSObject

#pragma mark Public

+ (NSString *)boostWithFloat:(jfloat)boost;

+ (void)byteArrayWithJavaLangStringBuilder:(JavaLangStringBuilder *)buffer
                             withByteArray:(IOSByteArray *)bytes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneUtilToStringUtils)

FOUNDATION_EXPORT NSString *OrgApacheLuceneUtilToStringUtils_boostWithFloat_(jfloat boost);

FOUNDATION_EXPORT void OrgApacheLuceneUtilToStringUtils_byteArrayWithJavaLangStringBuilder_withByteArray_(JavaLangStringBuilder *buffer, IOSByteArray *bytes);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneUtilToStringUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneUtilToStringUtils")
