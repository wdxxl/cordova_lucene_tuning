//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-codec-1.10-sources.jar!org/apache/commons/codec/Charsets.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsCodecCharsets")
#ifdef RESTRICT_OrgApacheCommonsCodecCharsets
#define INCLUDE_ALL_OrgApacheCommonsCodecCharsets 0
#else
#define INCLUDE_ALL_OrgApacheCommonsCodecCharsets 1
#endif
#undef RESTRICT_OrgApacheCommonsCodecCharsets

#if !defined (OrgApacheCommonsCodecCharsets_) && (INCLUDE_ALL_OrgApacheCommonsCodecCharsets || defined(INCLUDE_OrgApacheCommonsCodecCharsets))
#define OrgApacheCommonsCodecCharsets_

@class JavaNioCharsetCharset;

@interface OrgApacheCommonsCodecCharsets : NSObject

#pragma mark Public

- (instancetype)init;

+ (JavaNioCharsetCharset *)toCharsetWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (JavaNioCharsetCharset *)toCharsetWithNSString:(NSString *)charset;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsCodecCharsets)

inline JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_get_ISO_8859_1();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_ISO_8859_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsCodecCharsets, ISO_8859_1, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_get_US_ASCII();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_US_ASCII;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsCodecCharsets, US_ASCII, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_get_UTF_16();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_UTF_16;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsCodecCharsets, UTF_16, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_get_UTF_16BE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_UTF_16BE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsCodecCharsets, UTF_16BE, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_get_UTF_16LE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_UTF_16LE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsCodecCharsets, UTF_16LE, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_get_UTF_8();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_UTF_8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsCodecCharsets, UTF_8, JavaNioCharsetCharset *)

FOUNDATION_EXPORT void OrgApacheCommonsCodecCharsets_init(OrgApacheCommonsCodecCharsets *self);

FOUNDATION_EXPORT OrgApacheCommonsCodecCharsets *new_OrgApacheCommonsCodecCharsets_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsCodecCharsets *create_OrgApacheCommonsCodecCharsets_init();

FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_toCharsetWithJavaNioCharsetCharset_(JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT JavaNioCharsetCharset *OrgApacheCommonsCodecCharsets_toCharsetWithNSString_(NSString *charset);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsCodecCharsets)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsCodecCharsets")
