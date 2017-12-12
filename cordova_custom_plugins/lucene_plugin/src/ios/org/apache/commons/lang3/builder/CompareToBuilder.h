//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-lang3-3.4-sources.jar!org/apache/commons/lang3/builder/CompareToBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsLang3BuilderCompareToBuilder")
#ifdef RESTRICT_OrgApacheCommonsLang3BuilderCompareToBuilder
#define INCLUDE_ALL_OrgApacheCommonsLang3BuilderCompareToBuilder 0
#else
#define INCLUDE_ALL_OrgApacheCommonsLang3BuilderCompareToBuilder 1
#endif
#undef RESTRICT_OrgApacheCommonsLang3BuilderCompareToBuilder

#if !defined (OrgApacheCommonsLang3BuilderCompareToBuilder_) && (INCLUDE_ALL_OrgApacheCommonsLang3BuilderCompareToBuilder || defined(INCLUDE_OrgApacheCommonsLang3BuilderCompareToBuilder))
#define OrgApacheCommonsLang3BuilderCompareToBuilder_

#define RESTRICT_OrgApacheCommonsLang3BuilderBuilder 1
#define INCLUDE_OrgApacheCommonsLang3BuilderBuilder 1
#include "org/apache/commons/lang3/builder/Builder.h"

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSClass;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;
@class JavaLangInteger;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

@interface OrgApacheCommonsLang3BuilderCompareToBuilder : NSObject < OrgApacheCommonsLang3BuilderBuilder >

#pragma mark Public

- (instancetype)init;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithBoolean:(jboolean)lhs
                                                        withBoolean:(jboolean)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithBooleanArray:(IOSBooleanArray *)lhs
                                                        withBooleanArray:(IOSBooleanArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithByte:(jbyte)lhs
                                                        withByte:(jbyte)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithByteArray:(IOSByteArray *)lhs
                                                        withByteArray:(IOSByteArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithChar:(jchar)lhs
                                                        withChar:(jchar)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithCharArray:(IOSCharArray *)lhs
                                                        withCharArray:(IOSCharArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithDouble:(jdouble)lhs
                                                        withDouble:(jdouble)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithDoubleArray:(IOSDoubleArray *)lhs
                                                        withDoubleArray:(IOSDoubleArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithFloat:(jfloat)lhs
                                                        withFloat:(jfloat)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithFloatArray:(IOSFloatArray *)lhs
                                                        withFloatArray:(IOSFloatArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithInt:(jint)lhs
                                                        withInt:(jint)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithIntArray:(IOSIntArray *)lhs
                                                        withIntArray:(IOSIntArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithLong:(jlong)lhs
                                                        withLong:(jlong)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithLongArray:(IOSLongArray *)lhs
                                                        withLongArray:(IOSLongArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithId:(id)lhs
                                                        withId:(id)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithId:(id)lhs
                                                        withId:(id)rhs
                                        withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithNSObjectArray:(IOSObjectArray *)lhs
                                                        withNSObjectArray:(IOSObjectArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithNSObjectArray:(IOSObjectArray *)lhs
                                                        withNSObjectArray:(IOSObjectArray *)rhs
                                                   withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithShort:(jshort)lhs
                                                        withShort:(jshort)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendWithShortArray:(IOSShortArray *)lhs
                                                        withShortArray:(IOSShortArray *)rhs;

- (OrgApacheCommonsLang3BuilderCompareToBuilder *)appendSuperWithInt:(jint)superCompareTo;

- (JavaLangInteger *)build;

+ (jint)reflectionCompareWithId:(id)lhs
                         withId:(id)rhs;

+ (jint)reflectionCompareWithId:(id)lhs
                         withId:(id)rhs
                    withBoolean:(jboolean)compareTransients;

+ (jint)reflectionCompareWithId:(id)lhs
                         withId:(id)rhs
                    withBoolean:(jboolean)compareTransients
                   withIOSClass:(IOSClass *)reflectUpToClass
              withNSStringArray:(IOSObjectArray *)excludeFields;

+ (jint)reflectionCompareWithId:(id)lhs
                         withId:(id)rhs
         withJavaUtilCollection:(id<JavaUtilCollection>)excludeFields;

+ (jint)reflectionCompareWithId:(id)lhs
                         withId:(id)rhs
              withNSStringArray:(IOSObjectArray *)excludeFields;

- (jint)toComparison;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsLang3BuilderCompareToBuilder)

FOUNDATION_EXPORT void OrgApacheCommonsLang3BuilderCompareToBuilder_init(OrgApacheCommonsLang3BuilderCompareToBuilder *self);

FOUNDATION_EXPORT OrgApacheCommonsLang3BuilderCompareToBuilder *new_OrgApacheCommonsLang3BuilderCompareToBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsLang3BuilderCompareToBuilder *create_OrgApacheCommonsLang3BuilderCompareToBuilder_init();

FOUNDATION_EXPORT jint OrgApacheCommonsLang3BuilderCompareToBuilder_reflectionCompareWithId_withId_(id lhs, id rhs);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3BuilderCompareToBuilder_reflectionCompareWithId_withId_withBoolean_(id lhs, id rhs, jboolean compareTransients);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3BuilderCompareToBuilder_reflectionCompareWithId_withId_withJavaUtilCollection_(id lhs, id rhs, id<JavaUtilCollection> excludeFields);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3BuilderCompareToBuilder_reflectionCompareWithId_withId_withNSStringArray_(id lhs, id rhs, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT jint OrgApacheCommonsLang3BuilderCompareToBuilder_reflectionCompareWithId_withId_withBoolean_withIOSClass_withNSStringArray_(id lhs, id rhs, jboolean compareTransients, IOSClass *reflectUpToClass, IOSObjectArray *excludeFields);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsLang3BuilderCompareToBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsLang3BuilderCompareToBuilder")
