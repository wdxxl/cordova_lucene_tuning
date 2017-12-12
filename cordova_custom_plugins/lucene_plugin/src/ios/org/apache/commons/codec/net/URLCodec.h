//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-codec-1.10-sources.jar!org/apache/commons/codec/net/URLCodec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsCodecNetURLCodec")
#ifdef RESTRICT_OrgApacheCommonsCodecNetURLCodec
#define INCLUDE_ALL_OrgApacheCommonsCodecNetURLCodec 0
#else
#define INCLUDE_ALL_OrgApacheCommonsCodecNetURLCodec 1
#endif
#undef RESTRICT_OrgApacheCommonsCodecNetURLCodec

#if !defined (OrgApacheCommonsCodecNetURLCodec_) && (INCLUDE_ALL_OrgApacheCommonsCodecNetURLCodec || defined(INCLUDE_OrgApacheCommonsCodecNetURLCodec))
#define OrgApacheCommonsCodecNetURLCodec_

#define RESTRICT_OrgApacheCommonsCodecBinaryEncoder 1
#define INCLUDE_OrgApacheCommonsCodecBinaryEncoder 1
#include "org/apache/commons/codec/BinaryEncoder.h"

#define RESTRICT_OrgApacheCommonsCodecBinaryDecoder 1
#define INCLUDE_OrgApacheCommonsCodecBinaryDecoder 1
#include "org/apache/commons/codec/BinaryDecoder.h"

#define RESTRICT_OrgApacheCommonsCodecStringEncoder 1
#define INCLUDE_OrgApacheCommonsCodecStringEncoder 1
#include "org/apache/commons/codec/StringEncoder.h"

#define RESTRICT_OrgApacheCommonsCodecStringDecoder 1
#define INCLUDE_OrgApacheCommonsCodecStringDecoder 1
#include "org/apache/commons/codec/StringDecoder.h"

@class IOSByteArray;
@class JavaUtilBitSet;

@interface OrgApacheCommonsCodecNetURLCodec : NSObject < OrgApacheCommonsCodecBinaryEncoder, OrgApacheCommonsCodecBinaryDecoder, OrgApacheCommonsCodecStringEncoder, OrgApacheCommonsCodecStringDecoder > {
 @public
  NSString *charset_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)charset;

- (IOSByteArray *)decodeWithByteArray:(IOSByteArray *)bytes;

- (id)decodeWithId:(id)obj;

- (NSString *)decodeWithNSString:(NSString *)str;

- (NSString *)decodeWithNSString:(NSString *)str
                    withNSString:(NSString *)charset;

+ (IOSByteArray *)decodeUrlWithByteArray:(IOSByteArray *)bytes;

- (IOSByteArray *)encodeWithByteArray:(IOSByteArray *)bytes;

- (id)encodeWithId:(id)obj;

- (NSString *)encodeWithNSString:(NSString *)str;

- (NSString *)encodeWithNSString:(NSString *)str
                    withNSString:(NSString *)charset;

+ (IOSByteArray *)encodeUrlWithJavaUtilBitSet:(JavaUtilBitSet *)urlsafe
                                withByteArray:(IOSByteArray *)bytes;

- (NSString *)getDefaultCharset;

- (NSString *)getEncoding;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsCodecNetURLCodec)

J2OBJC_FIELD_SETTER(OrgApacheCommonsCodecNetURLCodec, charset_, NSString *)

inline jint OrgApacheCommonsCodecNetURLCodec_get_RADIX();
#define OrgApacheCommonsCodecNetURLCodec_RADIX 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheCommonsCodecNetURLCodec, RADIX, jint)

inline jbyte OrgApacheCommonsCodecNetURLCodec_get_ESCAPE_CHAR();
#define OrgApacheCommonsCodecNetURLCodec_ESCAPE_CHAR 37
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheCommonsCodecNetURLCodec, ESCAPE_CHAR, jbyte)

inline JavaUtilBitSet *OrgApacheCommonsCodecNetURLCodec_get_WWW_FORM_URL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBitSet *OrgApacheCommonsCodecNetURLCodec_WWW_FORM_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsCodecNetURLCodec, WWW_FORM_URL, JavaUtilBitSet *)

FOUNDATION_EXPORT void OrgApacheCommonsCodecNetURLCodec_init(OrgApacheCommonsCodecNetURLCodec *self);

FOUNDATION_EXPORT OrgApacheCommonsCodecNetURLCodec *new_OrgApacheCommonsCodecNetURLCodec_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsCodecNetURLCodec *create_OrgApacheCommonsCodecNetURLCodec_init();

FOUNDATION_EXPORT void OrgApacheCommonsCodecNetURLCodec_initWithNSString_(OrgApacheCommonsCodecNetURLCodec *self, NSString *charset);

FOUNDATION_EXPORT OrgApacheCommonsCodecNetURLCodec *new_OrgApacheCommonsCodecNetURLCodec_initWithNSString_(NSString *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsCodecNetURLCodec *create_OrgApacheCommonsCodecNetURLCodec_initWithNSString_(NSString *charset);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecNetURLCodec_encodeUrlWithJavaUtilBitSet_withByteArray_(JavaUtilBitSet *urlsafe, IOSByteArray *bytes);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecNetURLCodec_decodeUrlWithByteArray_(IOSByteArray *bytes);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsCodecNetURLCodec)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsCodecNetURLCodec")