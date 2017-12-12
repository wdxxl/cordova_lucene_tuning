//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:jsoup-1.8.3-fis-sources.jar!org/jsoup/nodes/XmlDeclaration.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJsoupNodesXmlDeclaration")
#ifdef RESTRICT_OrgJsoupNodesXmlDeclaration
#define INCLUDE_ALL_OrgJsoupNodesXmlDeclaration 0
#else
#define INCLUDE_ALL_OrgJsoupNodesXmlDeclaration 1
#endif
#undef RESTRICT_OrgJsoupNodesXmlDeclaration

#if !defined (OrgJsoupNodesXmlDeclaration_) && (INCLUDE_ALL_OrgJsoupNodesXmlDeclaration || defined(INCLUDE_OrgJsoupNodesXmlDeclaration))
#define OrgJsoupNodesXmlDeclaration_

#define RESTRICT_OrgJsoupNodesNode 1
#define INCLUDE_OrgJsoupNodesNode 1
#include "org/jsoup/nodes/Node.h"

@class JavaLangStringBuilder;
@class OrgJsoupNodesDocument_OutputSettings;

@interface OrgJsoupNodesXmlDeclaration : OrgJsoupNodesNode

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)data
                    withNSString:(NSString *)baseUri
                     withBoolean:(jboolean)isProcessingInstruction;

- (NSString *)getWholeDeclaration;

- (NSString *)nodeName;

- (NSString *)description;

#pragma mark Package-Private

- (void)outerHtmlHeadWithJavaLangStringBuilder:(JavaLangStringBuilder *)accum
                                       withInt:(jint)depth
      withOrgJsoupNodesDocument_OutputSettings:(OrgJsoupNodesDocument_OutputSettings *)outArg;

- (void)outerHtmlTailWithJavaLangStringBuilder:(JavaLangStringBuilder *)accum
                                       withInt:(jint)depth
      withOrgJsoupNodesDocument_OutputSettings:(OrgJsoupNodesDocument_OutputSettings *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsoupNodesXmlDeclaration)

inline NSString *OrgJsoupNodesXmlDeclaration_get_DECL_KEY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgJsoupNodesXmlDeclaration_DECL_KEY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJsoupNodesXmlDeclaration, DECL_KEY, NSString *)

FOUNDATION_EXPORT void OrgJsoupNodesXmlDeclaration_initWithNSString_withNSString_withBoolean_(OrgJsoupNodesXmlDeclaration *self, NSString *data, NSString *baseUri, jboolean isProcessingInstruction);

FOUNDATION_EXPORT OrgJsoupNodesXmlDeclaration *new_OrgJsoupNodesXmlDeclaration_initWithNSString_withNSString_withBoolean_(NSString *data, NSString *baseUri, jboolean isProcessingInstruction) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsoupNodesXmlDeclaration *create_OrgJsoupNodesXmlDeclaration_initWithNSString_withNSString_withBoolean_(NSString *data, NSString *baseUri, jboolean isProcessingInstruction);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsoupNodesXmlDeclaration)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJsoupNodesXmlDeclaration")
