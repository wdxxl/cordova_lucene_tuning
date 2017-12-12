//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-lang3-3.4-sources.jar!org/apache/commons/lang3/exception/ExceptionUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsLang3ExceptionExceptionUtils")
#ifdef RESTRICT_OrgApacheCommonsLang3ExceptionExceptionUtils
#define INCLUDE_ALL_OrgApacheCommonsLang3ExceptionExceptionUtils 0
#else
#define INCLUDE_ALL_OrgApacheCommonsLang3ExceptionExceptionUtils 1
#endif
#undef RESTRICT_OrgApacheCommonsLang3ExceptionExceptionUtils

#if !defined (OrgApacheCommonsLang3ExceptionExceptionUtils_) && (INCLUDE_ALL_OrgApacheCommonsLang3ExceptionExceptionUtils || defined(INCLUDE_OrgApacheCommonsLang3ExceptionExceptionUtils))
#define OrgApacheCommonsLang3ExceptionExceptionUtils_

@class IOSClass;
@class IOSObjectArray;
@class JavaIoPrintStream;
@class JavaIoPrintWriter;
@protocol JavaUtilList;

@interface OrgApacheCommonsLang3ExceptionExceptionUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSException *)getCauseWithNSException:(NSException *)throwable;
#define getCauseWithJavaLangThrowable getCauseWithNSException

+ (NSException *)getCauseWithNSException:(NSException *)throwable
                       withNSStringArray:(IOSObjectArray *)methodNames;
#define getCauseWithJavaLangThrowable getCauseWithNSException

+ (IOSObjectArray *)getDefaultCauseMethodNames;

+ (NSString *)getMessageWithNSException:(NSException *)th;
#define getMessageWithJavaLangThrowable getMessageWithNSException

+ (NSException *)getRootCauseWithNSException:(NSException *)throwable;
#define getRootCauseWithJavaLangThrowable getRootCauseWithNSException

+ (NSString *)getRootCauseMessageWithNSException:(NSException *)th;
#define getRootCauseMessageWithJavaLangThrowable getRootCauseMessageWithNSException

+ (IOSObjectArray *)getRootCauseStackTraceWithNSException:(NSException *)throwable;
#define getRootCauseStackTraceWithJavaLangThrowable getRootCauseStackTraceWithNSException

+ (IOSObjectArray *)getStackFramesWithNSException:(NSException *)throwable;
#define getStackFramesWithJavaLangThrowable getStackFramesWithNSException

+ (NSString *)getStackTraceWithNSException:(NSException *)throwable;
#define getStackTraceWithJavaLangThrowable getStackTraceWithNSException

+ (jint)getThrowableCountWithNSException:(NSException *)throwable;
#define getThrowableCountWithJavaLangThrowable getThrowableCountWithNSException

+ (id<JavaUtilList>)getThrowableListWithNSException:(NSException *)throwable;
#define getThrowableListWithJavaLangThrowable getThrowableListWithNSException

+ (IOSObjectArray *)getThrowablesWithNSException:(NSException *)throwable;
#define getThrowablesWithJavaLangThrowable getThrowablesWithNSException

+ (jint)indexOfThrowableWithNSException:(NSException *)throwable
                           withIOSClass:(IOSClass *)clazz;
#define indexOfThrowableWithJavaLangThrowable indexOfThrowableWithNSException

+ (jint)indexOfThrowableWithNSException:(NSException *)throwable
                           withIOSClass:(IOSClass *)clazz
                                withInt:(jint)fromIndex;
#define indexOfThrowableWithJavaLangThrowable indexOfThrowableWithNSException

+ (jint)indexOfTypeWithNSException:(NSException *)throwable
                      withIOSClass:(IOSClass *)type;
#define indexOfTypeWithJavaLangThrowable indexOfTypeWithNSException

+ (jint)indexOfTypeWithNSException:(NSException *)throwable
                      withIOSClass:(IOSClass *)type
                           withInt:(jint)fromIndex;
#define indexOfTypeWithJavaLangThrowable indexOfTypeWithNSException

+ (void)printRootCauseStackTraceWithNSException:(NSException *)throwable;
#define printRootCauseStackTraceWithJavaLangThrowable printRootCauseStackTraceWithNSException

+ (void)printRootCauseStackTraceWithNSException:(NSException *)throwable
                          withJavaIoPrintStream:(JavaIoPrintStream *)stream;
#define printRootCauseStackTraceWithJavaLangThrowable printRootCauseStackTraceWithNSException

+ (void)printRootCauseStackTraceWithNSException:(NSException *)throwable
                          withJavaIoPrintWriter:(JavaIoPrintWriter *)writer;
#define printRootCauseStackTraceWithJavaLangThrowable printRootCauseStackTraceWithNSException

+ (void)removeCommonFramesWithJavaUtilList:(id<JavaUtilList>)causeFrames
                          withJavaUtilList:(id<JavaUtilList>)wrapperFrames;

#pragma mark Package-Private

+ (id<JavaUtilList>)getStackFrameListWithNSException:(NSException *)t;
#define getStackFrameListWithJavaLangThrowable getStackFrameListWithNSException

+ (IOSObjectArray *)getStackFramesWithNSString:(NSString *)stackTrace;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsLang3ExceptionExceptionUtils)

inline NSString *OrgApacheCommonsLang3ExceptionExceptionUtils_get_WRAPPED_MARKER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3ExceptionExceptionUtils_WRAPPED_MARKER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3ExceptionExceptionUtils, WRAPPED_MARKER, NSString *)

FOUNDATION_EXPORT void OrgApacheCommonsLang3ExceptionExceptionUtils_init(OrgApacheCommonsLang3ExceptionExceptionUtils *self);

FOUNDATION_EXPORT OrgApacheCommonsLang3ExceptionExceptionUtils *new_OrgApacheCommonsLang3ExceptionExceptionUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsLang3ExceptionExceptionUtils *create_OrgApacheCommonsLang3ExceptionExceptionUtils_init();

FOUNDATION_EXPORT IOSObjectArray *OrgApacheCommonsLang3ExceptionExceptionUtils_getDefaultCauseMethodNames();

FOUNDATION_EXPORT NSException *OrgApacheCommonsLang3ExceptionExceptionUtils_getCauseWithNSException_(NSException *throwable);

FOUNDATION_EXPORT NSException *OrgApacheCommonsLang3ExceptionExceptionUtils_getCauseWithNSException_withNSStringArray_(NSException *throwable, IOSObjectArray *methodNames);

FOUNDATION_EXPORT NSException *OrgApacheCommonsLang3ExceptionExceptionUtils_getRootCauseWithNSException_(NSException *throwable);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3ExceptionExceptionUtils_getThrowableCountWithNSException_(NSException *throwable);

FOUNDATION_EXPORT IOSObjectArray *OrgApacheCommonsLang3ExceptionExceptionUtils_getThrowablesWithNSException_(NSException *throwable);

FOUNDATION_EXPORT id<JavaUtilList> OrgApacheCommonsLang3ExceptionExceptionUtils_getThrowableListWithNSException_(NSException *throwable);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3ExceptionExceptionUtils_indexOfThrowableWithNSException_withIOSClass_(NSException *throwable, IOSClass *clazz);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3ExceptionExceptionUtils_indexOfThrowableWithNSException_withIOSClass_withInt_(NSException *throwable, IOSClass *clazz, jint fromIndex);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3ExceptionExceptionUtils_indexOfTypeWithNSException_withIOSClass_(NSException *throwable, IOSClass *type);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3ExceptionExceptionUtils_indexOfTypeWithNSException_withIOSClass_withInt_(NSException *throwable, IOSClass *type, jint fromIndex);

FOUNDATION_EXPORT void OrgApacheCommonsLang3ExceptionExceptionUtils_printRootCauseStackTraceWithNSException_(NSException *throwable);

FOUNDATION_EXPORT void OrgApacheCommonsLang3ExceptionExceptionUtils_printRootCauseStackTraceWithNSException_withJavaIoPrintStream_(NSException *throwable, JavaIoPrintStream *stream);

FOUNDATION_EXPORT void OrgApacheCommonsLang3ExceptionExceptionUtils_printRootCauseStackTraceWithNSException_withJavaIoPrintWriter_(NSException *throwable, JavaIoPrintWriter *writer);

FOUNDATION_EXPORT IOSObjectArray *OrgApacheCommonsLang3ExceptionExceptionUtils_getRootCauseStackTraceWithNSException_(NSException *throwable);

FOUNDATION_EXPORT void OrgApacheCommonsLang3ExceptionExceptionUtils_removeCommonFramesWithJavaUtilList_withJavaUtilList_(id<JavaUtilList> causeFrames, id<JavaUtilList> wrapperFrames);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3ExceptionExceptionUtils_getStackTraceWithNSException_(NSException *throwable);

FOUNDATION_EXPORT IOSObjectArray *OrgApacheCommonsLang3ExceptionExceptionUtils_getStackFramesWithNSException_(NSException *throwable);

FOUNDATION_EXPORT IOSObjectArray *OrgApacheCommonsLang3ExceptionExceptionUtils_getStackFramesWithNSString_(NSString *stackTrace);

FOUNDATION_EXPORT id<JavaUtilList> OrgApacheCommonsLang3ExceptionExceptionUtils_getStackFrameListWithNSException_(NSException *t);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3ExceptionExceptionUtils_getMessageWithNSException_(NSException *th);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3ExceptionExceptionUtils_getRootCauseMessageWithNSException_(NSException *th);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsLang3ExceptionExceptionUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsLang3ExceptionExceptionUtils")
