//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/messages/NLS.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneMessagesNLS")
#ifdef RESTRICT_OrgApacheLuceneMessagesNLS
#define INCLUDE_ALL_OrgApacheLuceneMessagesNLS 0
#else
#define INCLUDE_ALL_OrgApacheLuceneMessagesNLS 1
#endif
#undef RESTRICT_OrgApacheLuceneMessagesNLS

#if !defined (OrgApacheLuceneMessagesNLS_) && (INCLUDE_ALL_OrgApacheLuceneMessagesNLS || defined(INCLUDE_OrgApacheLuceneMessagesNLS))
#define OrgApacheLuceneMessagesNLS_

@class IOSClass;
@class IOSObjectArray;
@class JavaUtilLocale;

@interface OrgApacheLuceneMessagesNLS : NSObject

#pragma mark Public

+ (NSString *)getLocalizedMessageWithNSString:(NSString *)key;

+ (NSString *)getLocalizedMessageWithNSString:(NSString *)key
                           withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)getLocalizedMessageWithNSString:(NSString *)key
                           withJavaUtilLocale:(JavaUtilLocale *)locale
                            withNSObjectArray:(IOSObjectArray *)args;

+ (NSString *)getLocalizedMessageWithNSString:(NSString *)key
                            withNSObjectArray:(IOSObjectArray *)args;

#pragma mark Protected

- (instancetype)init;

+ (void)initializeMessagesWithNSString:(NSString *)bundleName
                          withIOSClass:(IOSClass *)clazz OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(OrgApacheLuceneMessagesNLS)

FOUNDATION_EXPORT void OrgApacheLuceneMessagesNLS_init(OrgApacheLuceneMessagesNLS *self);

FOUNDATION_EXPORT OrgApacheLuceneMessagesNLS *new_OrgApacheLuceneMessagesNLS_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneMessagesNLS *create_OrgApacheLuceneMessagesNLS_init();

FOUNDATION_EXPORT NSString *OrgApacheLuceneMessagesNLS_getLocalizedMessageWithNSString_(NSString *key);

FOUNDATION_EXPORT NSString *OrgApacheLuceneMessagesNLS_getLocalizedMessageWithNSString_withJavaUtilLocale_(NSString *key, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheLuceneMessagesNLS_getLocalizedMessageWithNSString_withJavaUtilLocale_withNSObjectArray_(NSString *key, JavaUtilLocale *locale, IOSObjectArray *args);

FOUNDATION_EXPORT NSString *OrgApacheLuceneMessagesNLS_getLocalizedMessageWithNSString_withNSObjectArray_(NSString *key, IOSObjectArray *args);

FOUNDATION_EXPORT void OrgApacheLuceneMessagesNLS_initializeMessagesWithNSString_withIOSClass_(NSString *bundleName, IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneMessagesNLS)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneMessagesNLS")
