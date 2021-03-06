//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:jsoup-1.8.3-fis-sources.jar!org/jsoup/nodes/Attribute.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJsoupNodesAttribute")
#ifdef RESTRICT_OrgJsoupNodesAttribute
#define INCLUDE_ALL_OrgJsoupNodesAttribute 0
#else
#define INCLUDE_ALL_OrgJsoupNodesAttribute 1
#endif
#undef RESTRICT_OrgJsoupNodesAttribute

#if !defined (OrgJsoupNodesAttribute_) && (INCLUDE_ALL_OrgJsoupNodesAttribute || defined(INCLUDE_OrgJsoupNodesAttribute))
#define OrgJsoupNodesAttribute_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap_Entry 1
#include "java/util/Map.h"

@class JavaLangStringBuilder;
@class OrgJsoupNodesDocument_OutputSettings;

@interface OrgJsoupNodesAttribute : NSObject < JavaUtilMap_Entry, NSCopying >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)key
                    withNSString:(NSString *)value;

- (OrgJsoupNodesAttribute *)java_clone;

+ (OrgJsoupNodesAttribute *)createFromEncodedWithNSString:(NSString *)unencodedKey
                                             withNSString:(NSString *)encodedValue;

- (jboolean)isEqual:(id)o;

- (NSString *)getKey;

- (NSString *)getValue;

- (NSUInteger)hash;

- (NSString *)html;

- (void)setKeyWithNSString:(NSString *)key;

- (NSString *)setValueWithId:(NSString *)value;

- (NSString *)description;

#pragma mark Protected

- (void)htmlWithJavaLangStringBuilder:(JavaLangStringBuilder *)accum
withOrgJsoupNodesDocument_OutputSettings:(OrgJsoupNodesDocument_OutputSettings *)outArg;

- (jboolean)isBooleanAttribute;

- (jboolean)isDataAttribute;

- (jboolean)shouldCollapseAttributeWithOrgJsoupNodesDocument_OutputSettings:(OrgJsoupNodesDocument_OutputSettings *)outArg;

@end

J2OBJC_STATIC_INIT(OrgJsoupNodesAttribute)

FOUNDATION_EXPORT void OrgJsoupNodesAttribute_initWithNSString_withNSString_(OrgJsoupNodesAttribute *self, NSString *key, NSString *value);

FOUNDATION_EXPORT OrgJsoupNodesAttribute *new_OrgJsoupNodesAttribute_initWithNSString_withNSString_(NSString *key, NSString *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsoupNodesAttribute *create_OrgJsoupNodesAttribute_initWithNSString_withNSString_(NSString *key, NSString *value);

FOUNDATION_EXPORT OrgJsoupNodesAttribute *OrgJsoupNodesAttribute_createFromEncodedWithNSString_withNSString_(NSString *unencodedKey, NSString *encodedValue);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsoupNodesAttribute)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJsoupNodesAttribute")
