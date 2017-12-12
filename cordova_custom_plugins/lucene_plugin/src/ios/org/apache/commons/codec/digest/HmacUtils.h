//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-codec-1.10-sources.jar!org/apache/commons/codec/digest/HmacUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsCodecDigestHmacUtils")
#ifdef RESTRICT_OrgApacheCommonsCodecDigestHmacUtils
#define INCLUDE_ALL_OrgApacheCommonsCodecDigestHmacUtils 0
#else
#define INCLUDE_ALL_OrgApacheCommonsCodecDigestHmacUtils 1
#endif
#undef RESTRICT_OrgApacheCommonsCodecDigestHmacUtils

#if !defined (OrgApacheCommonsCodecDigestHmacUtils_) && (INCLUDE_ALL_OrgApacheCommonsCodecDigestHmacUtils || defined(INCLUDE_OrgApacheCommonsCodecDigestHmacUtils))
#define OrgApacheCommonsCodecDigestHmacUtils_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaxCryptoMac;
@class OrgApacheCommonsCodecDigestHmacAlgorithms;

@interface OrgApacheCommonsCodecDigestHmacUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (JavaxCryptoMac *)getHmacMd5WithByteArray:(IOSByteArray *)key;

+ (JavaxCryptoMac *)getHmacSha1WithByteArray:(IOSByteArray *)key;

+ (JavaxCryptoMac *)getHmacSha256WithByteArray:(IOSByteArray *)key;

+ (JavaxCryptoMac *)getHmacSha384WithByteArray:(IOSByteArray *)key;

+ (JavaxCryptoMac *)getHmacSha512WithByteArray:(IOSByteArray *)key;

+ (JavaxCryptoMac *)getInitializedMacWithOrgApacheCommonsCodecDigestHmacAlgorithms:(OrgApacheCommonsCodecDigestHmacAlgorithms *)algorithm
                                                                     withByteArray:(IOSByteArray *)key;

+ (JavaxCryptoMac *)getInitializedMacWithNSString:(NSString *)algorithm
                                    withByteArray:(IOSByteArray *)key;

+ (IOSByteArray *)hmacMd5WithByteArray:(IOSByteArray *)key
                         withByteArray:(IOSByteArray *)valueToDigest;

+ (IOSByteArray *)hmacMd5WithByteArray:(IOSByteArray *)key
                 withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (IOSByteArray *)hmacMd5WithNSString:(NSString *)key
                         withNSString:(NSString *)valueToDigest;

+ (NSString *)hmacMd5HexWithByteArray:(IOSByteArray *)key
                        withByteArray:(IOSByteArray *)valueToDigest;

+ (NSString *)hmacMd5HexWithByteArray:(IOSByteArray *)key
                withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (NSString *)hmacMd5HexWithNSString:(NSString *)key
                        withNSString:(NSString *)valueToDigest;

+ (IOSByteArray *)hmacSha1WithByteArray:(IOSByteArray *)key
                          withByteArray:(IOSByteArray *)valueToDigest;

+ (IOSByteArray *)hmacSha1WithByteArray:(IOSByteArray *)key
                  withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (IOSByteArray *)hmacSha1WithNSString:(NSString *)key
                          withNSString:(NSString *)valueToDigest;

+ (NSString *)hmacSha1HexWithByteArray:(IOSByteArray *)key
                         withByteArray:(IOSByteArray *)valueToDigest;

+ (NSString *)hmacSha1HexWithByteArray:(IOSByteArray *)key
                 withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (NSString *)hmacSha1HexWithNSString:(NSString *)key
                         withNSString:(NSString *)valueToDigest;

+ (IOSByteArray *)hmacSha256WithByteArray:(IOSByteArray *)key
                            withByteArray:(IOSByteArray *)valueToDigest;

+ (IOSByteArray *)hmacSha256WithByteArray:(IOSByteArray *)key
                    withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (IOSByteArray *)hmacSha256WithNSString:(NSString *)key
                            withNSString:(NSString *)valueToDigest;

+ (NSString *)hmacSha256HexWithByteArray:(IOSByteArray *)key
                           withByteArray:(IOSByteArray *)valueToDigest;

+ (NSString *)hmacSha256HexWithByteArray:(IOSByteArray *)key
                   withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (NSString *)hmacSha256HexWithNSString:(NSString *)key
                           withNSString:(NSString *)valueToDigest;

+ (IOSByteArray *)hmacSha384WithByteArray:(IOSByteArray *)key
                            withByteArray:(IOSByteArray *)valueToDigest;

+ (IOSByteArray *)hmacSha384WithByteArray:(IOSByteArray *)key
                    withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (IOSByteArray *)hmacSha384WithNSString:(NSString *)key
                            withNSString:(NSString *)valueToDigest;

+ (NSString *)hmacSha384HexWithByteArray:(IOSByteArray *)key
                           withByteArray:(IOSByteArray *)valueToDigest;

+ (NSString *)hmacSha384HexWithByteArray:(IOSByteArray *)key
                   withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (NSString *)hmacSha384HexWithNSString:(NSString *)key
                           withNSString:(NSString *)valueToDigest;

+ (IOSByteArray *)hmacSha512WithByteArray:(IOSByteArray *)key
                            withByteArray:(IOSByteArray *)valueToDigest;

+ (IOSByteArray *)hmacSha512WithByteArray:(IOSByteArray *)key
                    withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (IOSByteArray *)hmacSha512WithNSString:(NSString *)key
                            withNSString:(NSString *)valueToDigest;

+ (NSString *)hmacSha512HexWithByteArray:(IOSByteArray *)key
                           withByteArray:(IOSByteArray *)valueToDigest;

+ (NSString *)hmacSha512HexWithByteArray:(IOSByteArray *)key
                   withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (NSString *)hmacSha512HexWithNSString:(NSString *)key
                           withNSString:(NSString *)valueToDigest;

+ (JavaxCryptoMac *)updateHmacWithJavaxCryptoMac:(JavaxCryptoMac *)mac
                                   withByteArray:(IOSByteArray *)valueToDigest;

+ (JavaxCryptoMac *)updateHmacWithJavaxCryptoMac:(JavaxCryptoMac *)mac
                           withJavaIoInputStream:(JavaIoInputStream *)valueToDigest;

+ (JavaxCryptoMac *)updateHmacWithJavaxCryptoMac:(JavaxCryptoMac *)mac
                                    withNSString:(NSString *)valueToDigest;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsCodecDigestHmacUtils)

FOUNDATION_EXPORT void OrgApacheCommonsCodecDigestHmacUtils_init(OrgApacheCommonsCodecDigestHmacUtils *self);

FOUNDATION_EXPORT OrgApacheCommonsCodecDigestHmacUtils *new_OrgApacheCommonsCodecDigestHmacUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsCodecDigestHmacUtils *create_OrgApacheCommonsCodecDigestHmacUtils_init();

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_getHmacMd5WithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_getHmacSha1WithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_getHmacSha256WithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_getHmacSha384WithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_getHmacSha512WithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_getInitializedMacWithOrgApacheCommonsCodecDigestHmacAlgorithms_withByteArray_(OrgApacheCommonsCodecDigestHmacAlgorithms *algorithm, IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_getInitializedMacWithNSString_withByteArray_(NSString *algorithm, IOSByteArray *key);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacMd5WithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacMd5WithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacMd5WithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacMd5HexWithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacMd5HexWithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacMd5HexWithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha1WithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha1WithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha1WithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha1HexWithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha1HexWithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha1HexWithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha256WithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha256WithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha256WithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha256HexWithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha256HexWithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha256HexWithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha384WithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha384WithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha384WithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha384HexWithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha384HexWithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha384HexWithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha512WithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha512WithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT IOSByteArray *OrgApacheCommonsCodecDigestHmacUtils_hmacSha512WithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha512HexWithByteArray_withByteArray_(IOSByteArray *key, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha512HexWithByteArray_withJavaIoInputStream_(IOSByteArray *key, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT NSString *OrgApacheCommonsCodecDigestHmacUtils_hmacSha512HexWithNSString_withNSString_(NSString *key, NSString *valueToDigest);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_updateHmacWithJavaxCryptoMac_withByteArray_(JavaxCryptoMac *mac, IOSByteArray *valueToDigest);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_updateHmacWithJavaxCryptoMac_withJavaIoInputStream_(JavaxCryptoMac *mac, JavaIoInputStream *valueToDigest);

FOUNDATION_EXPORT JavaxCryptoMac *OrgApacheCommonsCodecDigestHmacUtils_updateHmacWithJavaxCryptoMac_withNSString_(JavaxCryptoMac *mac, NSString *valueToDigest);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsCodecDigestHmacUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsCodecDigestHmacUtils")