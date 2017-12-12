//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:jsoup-1.8.3-fis-sources.jar!org/jsoup/parser/ParseError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJsoupParserParseError")
#ifdef RESTRICT_OrgJsoupParserParseError
#define INCLUDE_ALL_OrgJsoupParserParseError 0
#else
#define INCLUDE_ALL_OrgJsoupParserParseError 1
#endif
#undef RESTRICT_OrgJsoupParserParseError

#if !defined (OrgJsoupParserParseError_) && (INCLUDE_ALL_OrgJsoupParserParseError || defined(INCLUDE_OrgJsoupParserParseError))
#define OrgJsoupParserParseError_

@class IOSObjectArray;

@interface OrgJsoupParserParseError : NSObject

#pragma mark Public

- (NSString *)getErrorMessage;

- (jint)getPosition;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)pos
               withNSString:(NSString *)errorMsg;

- (instancetype)initWithInt:(jint)pos
               withNSString:(NSString *)errorFormat
          withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsoupParserParseError)

FOUNDATION_EXPORT void OrgJsoupParserParseError_initWithInt_withNSString_(OrgJsoupParserParseError *self, jint pos, NSString *errorMsg);

FOUNDATION_EXPORT OrgJsoupParserParseError *new_OrgJsoupParserParseError_initWithInt_withNSString_(jint pos, NSString *errorMsg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsoupParserParseError *create_OrgJsoupParserParseError_initWithInt_withNSString_(jint pos, NSString *errorMsg);

FOUNDATION_EXPORT void OrgJsoupParserParseError_initWithInt_withNSString_withNSObjectArray_(OrgJsoupParserParseError *self, jint pos, NSString *errorFormat, IOSObjectArray *args);

FOUNDATION_EXPORT OrgJsoupParserParseError *new_OrgJsoupParserParseError_initWithInt_withNSString_withNSObjectArray_(jint pos, NSString *errorFormat, IOSObjectArray *args) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsoupParserParseError *create_OrgJsoupParserParseError_initWithInt_withNSString_withNSObjectArray_(jint pos, NSString *errorFormat, IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsoupParserParseError)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJsoupParserParseError")