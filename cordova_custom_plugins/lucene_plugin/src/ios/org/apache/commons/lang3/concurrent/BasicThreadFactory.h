//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-lang3-3.4-sources.jar!org/apache/commons/lang3/concurrent/BasicThreadFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsLang3ConcurrentBasicThreadFactory")
#ifdef RESTRICT_OrgApacheCommonsLang3ConcurrentBasicThreadFactory
#define INCLUDE_ALL_OrgApacheCommonsLang3ConcurrentBasicThreadFactory 0
#else
#define INCLUDE_ALL_OrgApacheCommonsLang3ConcurrentBasicThreadFactory 1
#endif
#undef RESTRICT_OrgApacheCommonsLang3ConcurrentBasicThreadFactory

#if !defined (OrgApacheCommonsLang3ConcurrentBasicThreadFactory_) && (INCLUDE_ALL_OrgApacheCommonsLang3ConcurrentBasicThreadFactory || defined(INCLUDE_OrgApacheCommonsLang3ConcurrentBasicThreadFactory))
#define OrgApacheCommonsLang3ConcurrentBasicThreadFactory_

#define RESTRICT_JavaUtilConcurrentThreadFactory 1
#define INCLUDE_JavaUtilConcurrentThreadFactory 1
#include "java/util/concurrent/ThreadFactory.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangThread;
@protocol JavaLangRunnable;
@protocol JavaLangThread_UncaughtExceptionHandler;

@interface OrgApacheCommonsLang3ConcurrentBasicThreadFactory : NSObject < JavaUtilConcurrentThreadFactory >

#pragma mark Public

- (JavaLangBoolean *)getDaemonFlag;

- (NSString *)getNamingPattern;

- (JavaLangInteger *)getPriority;

- (jlong)getThreadCount;

- (id<JavaLangThread_UncaughtExceptionHandler>)getUncaughtExceptionHandler;

- (id<JavaUtilConcurrentThreadFactory>)getWrappedFactory;

- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)r OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsLang3ConcurrentBasicThreadFactory)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsLang3ConcurrentBasicThreadFactory)

#endif

#if !defined (OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder_) && (INCLUDE_ALL_OrgApacheCommonsLang3ConcurrentBasicThreadFactory || defined(INCLUDE_OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder))
#define OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder_

#define RESTRICT_OrgApacheCommonsLang3BuilderBuilder 1
#define INCLUDE_OrgApacheCommonsLang3BuilderBuilder 1
#include "org/apache/commons/lang3/builder/Builder.h"

@class OrgApacheCommonsLang3ConcurrentBasicThreadFactory;
@protocol JavaLangThread_UncaughtExceptionHandler;
@protocol JavaUtilConcurrentThreadFactory;

@interface OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder : NSObject < OrgApacheCommonsLang3BuilderBuilder >

#pragma mark Public

- (instancetype)init;

- (OrgApacheCommonsLang3ConcurrentBasicThreadFactory *)build;

- (OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *)daemonWithBoolean:(jboolean)f;

- (OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *)namingPatternWithNSString:(NSString *)pattern;

- (OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *)priorityWithInt:(jint)prio;

- (void)reset;

- (OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *)uncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)handler;

- (OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *)wrappedFactoryWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)factory;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder)

FOUNDATION_EXPORT void OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder_init(OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *self);

FOUNDATION_EXPORT OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *new_OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder *create_OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsLang3ConcurrentBasicThreadFactory_Builder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsLang3ConcurrentBasicThreadFactory")
