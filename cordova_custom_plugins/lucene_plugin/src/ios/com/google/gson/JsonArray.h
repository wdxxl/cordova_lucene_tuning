//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/JsonArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleGsonJsonArray")
#ifdef RESTRICT_ComGoogleGsonJsonArray
#define INCLUDE_ALL_ComGoogleGsonJsonArray 0
#else
#define INCLUDE_ALL_ComGoogleGsonJsonArray 1
#endif
#undef RESTRICT_ComGoogleGsonJsonArray

#if !defined (ComGoogleGsonJsonArray_) && (INCLUDE_ALL_ComGoogleGsonJsonArray || defined(INCLUDE_ComGoogleGsonJsonArray))
#define ComGoogleGsonJsonArray_

#define RESTRICT_ComGoogleGsonJsonElement 1
#define INCLUDE_ComGoogleGsonJsonElement 1
#include "com/google/gson/JsonElement.h"

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include "java/lang/Iterable.h"

@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaMathBigDecimal;
@class JavaMathBigInteger;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

@interface ComGoogleGsonJsonArray : ComGoogleGsonJsonElement < JavaLangIterable >

#pragma mark Public

- (instancetype)init;

- (void)addWithJavaLangBoolean:(JavaLangBoolean *)bool_;

- (void)addWithJavaLangCharacter:(JavaLangCharacter *)character;

- (void)addWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element;

- (void)addWithNSNumber:(NSNumber *)number;

- (void)addWithNSString:(NSString *)string;

- (void)addAllWithComGoogleGsonJsonArray:(ComGoogleGsonJsonArray *)array;

- (jboolean)containsWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element;

- (jboolean)isEqual:(id)o;

- (ComGoogleGsonJsonElement *)getWithInt:(jint)i;

- (JavaMathBigDecimal *)getAsBigDecimal;

- (JavaMathBigInteger *)getAsBigInteger;

- (jboolean)getAsBoolean;

- (jbyte)getAsByte;

- (jchar)getAsCharacter;

- (jdouble)getAsDouble;

- (jfloat)getAsFloat;

- (jint)getAsInt;

- (jlong)getAsLong;

- (NSNumber *)getAsNumber;

- (jshort)getAsShort;

- (NSString *)getAsString;

- (NSUInteger)hash;

- (id<JavaUtilIterator>)iterator;

- (ComGoogleGsonJsonElement *)removeWithInt:(jint)index;

- (jboolean)removeWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element;

- (ComGoogleGsonJsonElement *)setWithInt:(jint)index
            withComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element;

- (jint)size;

#pragma mark Package-Private

- (ComGoogleGsonJsonArray *)deepCopy;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleGsonJsonArray)

FOUNDATION_EXPORT void ComGoogleGsonJsonArray_init(ComGoogleGsonJsonArray *self);

FOUNDATION_EXPORT ComGoogleGsonJsonArray *new_ComGoogleGsonJsonArray_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonJsonArray *create_ComGoogleGsonJsonArray_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleGsonJsonArray)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleGsonJsonArray")
