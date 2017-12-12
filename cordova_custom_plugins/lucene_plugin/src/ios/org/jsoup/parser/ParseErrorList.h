//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:jsoup-1.8.3-fis-sources.jar!org/jsoup/parser/ParseErrorList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJsoupParserParseErrorList")
#ifdef RESTRICT_OrgJsoupParserParseErrorList
#define INCLUDE_ALL_OrgJsoupParserParseErrorList 0
#else
#define INCLUDE_ALL_OrgJsoupParserParseErrorList 1
#endif
#undef RESTRICT_OrgJsoupParserParseErrorList

#if !defined (OrgJsoupParserParseErrorList_) && (INCLUDE_ALL_OrgJsoupParserParseErrorList || defined(INCLUDE_OrgJsoupParserParseErrorList))
#define OrgJsoupParserParseErrorList_

#define RESTRICT_JavaUtilArrayList 1
#define INCLUDE_JavaUtilArrayList 1
#include "java/util/ArrayList.h"

@class OrgJsoupParserParseError;

@interface OrgJsoupParserParseErrorList : JavaUtilArrayList

#pragma mark Public

- (OrgJsoupParserParseError *)getWithInt:(jint)arg0;

- (OrgJsoupParserParseError *)removeWithInt:(jint)arg0;

- (OrgJsoupParserParseError *)setWithInt:(jint)arg0
                                  withId:(OrgJsoupParserParseError *)arg1;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)initialCapacity
                    withInt:(jint)maxSize;

- (jboolean)canAddError;

- (jint)getMaxSize;

+ (OrgJsoupParserParseErrorList *)noTracking;

+ (OrgJsoupParserParseErrorList *)trackingWithInt:(jint)maxSize;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsoupParserParseErrorList)

FOUNDATION_EXPORT void OrgJsoupParserParseErrorList_initWithInt_withInt_(OrgJsoupParserParseErrorList *self, jint initialCapacity, jint maxSize);

FOUNDATION_EXPORT OrgJsoupParserParseErrorList *new_OrgJsoupParserParseErrorList_initWithInt_withInt_(jint initialCapacity, jint maxSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsoupParserParseErrorList *create_OrgJsoupParserParseErrorList_initWithInt_withInt_(jint initialCapacity, jint maxSize);

FOUNDATION_EXPORT OrgJsoupParserParseErrorList *OrgJsoupParserParseErrorList_noTracking();

FOUNDATION_EXPORT OrgJsoupParserParseErrorList *OrgJsoupParserParseErrorList_trackingWithInt_(jint maxSize);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsoupParserParseErrorList)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJsoupParserParseErrorList")