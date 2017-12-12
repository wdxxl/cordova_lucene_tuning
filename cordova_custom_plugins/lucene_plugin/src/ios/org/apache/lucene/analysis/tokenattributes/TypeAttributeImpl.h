//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/analysis/tokenattributes/TypeAttributeImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl")
#ifdef RESTRICT_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl
#define INCLUDE_ALL_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl 0
#else
#define INCLUDE_ALL_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl 1
#endif
#undef RESTRICT_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl

#if !defined (OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_) && (INCLUDE_ALL_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl || defined(INCLUDE_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl))
#define OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_

#define RESTRICT_OrgApacheLuceneUtilAttributeImpl 1
#define INCLUDE_OrgApacheLuceneUtilAttributeImpl 1
#include "org/apache/lucene/util/AttributeImpl.h"

#define RESTRICT_OrgApacheLuceneAnalysisTokenattributesTypeAttribute 1
#define INCLUDE_OrgApacheLuceneAnalysisTokenattributesTypeAttribute 1
#include "org/apache/lucene/analysis/tokenattributes/TypeAttribute.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl : OrgApacheLuceneUtilAttributeImpl < OrgApacheLuceneAnalysisTokenattributesTypeAttribute, NSCopying, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)type;

- (void)clear;

- (void)copyToWithOrgApacheLuceneUtilAttributeImpl:(OrgApacheLuceneUtilAttributeImpl *)target OBJC_METHOD_FAMILY_NONE;

- (jboolean)isEqual:(id)other;

- (NSUInteger)hash;

- (void)setTypeWithNSString:(NSString *)type;

- (NSString *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl)

FOUNDATION_EXPORT void OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_init(OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl *self);

FOUNDATION_EXPORT OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl *new_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl *create_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_init();

FOUNDATION_EXPORT void OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_initWithNSString_(OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl *self, NSString *type);

FOUNDATION_EXPORT OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl *new_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_initWithNSString_(NSString *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl *create_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl_initWithNSString_(NSString *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneAnalysisTokenattributesTypeAttributeImpl")
