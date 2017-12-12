//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-codec-1.10-sources.jar!org/apache/commons/codec/binary/CharSequenceUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsCodecBinaryCharSequenceUtils")
#ifdef RESTRICT_OrgApacheCommonsCodecBinaryCharSequenceUtils
#define INCLUDE_ALL_OrgApacheCommonsCodecBinaryCharSequenceUtils 0
#else
#define INCLUDE_ALL_OrgApacheCommonsCodecBinaryCharSequenceUtils 1
#endif
#undef RESTRICT_OrgApacheCommonsCodecBinaryCharSequenceUtils

#if !defined (OrgApacheCommonsCodecBinaryCharSequenceUtils_) && (INCLUDE_ALL_OrgApacheCommonsCodecBinaryCharSequenceUtils || defined(INCLUDE_OrgApacheCommonsCodecBinaryCharSequenceUtils))
#define OrgApacheCommonsCodecBinaryCharSequenceUtils_

@protocol JavaLangCharSequence;

@interface OrgApacheCommonsCodecBinaryCharSequenceUtils : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Package-Private

+ (jboolean)regionMatchesWithJavaLangCharSequence:(id<JavaLangCharSequence>)cs
                                      withBoolean:(jboolean)ignoreCase
                                          withInt:(jint)thisStart
                         withJavaLangCharSequence:(id<JavaLangCharSequence>)substring
                                          withInt:(jint)start
                                          withInt:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsCodecBinaryCharSequenceUtils)

FOUNDATION_EXPORT void OrgApacheCommonsCodecBinaryCharSequenceUtils_init(OrgApacheCommonsCodecBinaryCharSequenceUtils *self);

FOUNDATION_EXPORT OrgApacheCommonsCodecBinaryCharSequenceUtils *new_OrgApacheCommonsCodecBinaryCharSequenceUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsCodecBinaryCharSequenceUtils *create_OrgApacheCommonsCodecBinaryCharSequenceUtils_init();

FOUNDATION_EXPORT jboolean OrgApacheCommonsCodecBinaryCharSequenceUtils_regionMatchesWithJavaLangCharSequence_withBoolean_withInt_withJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> cs, jboolean ignoreCase, jint thisStart, id<JavaLangCharSequence> substring, jint start, jint length);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsCodecBinaryCharSequenceUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsCodecBinaryCharSequenceUtils")