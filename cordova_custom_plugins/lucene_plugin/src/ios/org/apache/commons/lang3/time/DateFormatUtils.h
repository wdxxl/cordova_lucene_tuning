//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:commons-lang3-3.4-sources.jar!org/apache/commons/lang3/time/DateFormatUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsLang3TimeDateFormatUtils")
#ifdef RESTRICT_OrgApacheCommonsLang3TimeDateFormatUtils
#define INCLUDE_ALL_OrgApacheCommonsLang3TimeDateFormatUtils 0
#else
#define INCLUDE_ALL_OrgApacheCommonsLang3TimeDateFormatUtils 1
#endif
#undef RESTRICT_OrgApacheCommonsLang3TimeDateFormatUtils

#if !defined (OrgApacheCommonsLang3TimeDateFormatUtils_) && (INCLUDE_ALL_OrgApacheCommonsLang3TimeDateFormatUtils || defined(INCLUDE_OrgApacheCommonsLang3TimeDateFormatUtils))
#define OrgApacheCommonsLang3TimeDateFormatUtils_

@class JavaUtilCalendar;
@class JavaUtilDate;
@class JavaUtilLocale;
@class JavaUtilTimeZone;
@class OrgApacheCommonsLang3TimeFastDateFormat;

@interface OrgApacheCommonsLang3TimeDateFormatUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSString *)formatWithJavaUtilCalendar:(JavaUtilCalendar *)calendar
                            withNSString:(NSString *)pattern;

+ (NSString *)formatWithJavaUtilCalendar:(JavaUtilCalendar *)calendar
                            withNSString:(NSString *)pattern
                      withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)formatWithJavaUtilCalendar:(JavaUtilCalendar *)calendar
                            withNSString:(NSString *)pattern
                    withJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone;

+ (NSString *)formatWithJavaUtilCalendar:(JavaUtilCalendar *)calendar
                            withNSString:(NSString *)pattern
                    withJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone
                      withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withNSString:(NSString *)pattern;

+ (NSString *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withNSString:(NSString *)pattern
                  withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withNSString:(NSString *)pattern
                withJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone;

+ (NSString *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withNSString:(NSString *)pattern
                withJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone
                  withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)formatWithLong:(jlong)millis
                withNSString:(NSString *)pattern;

+ (NSString *)formatWithLong:(jlong)millis
                withNSString:(NSString *)pattern
          withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)formatWithLong:(jlong)millis
                withNSString:(NSString *)pattern
        withJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone;

+ (NSString *)formatWithLong:(jlong)millis
                withNSString:(NSString *)pattern
        withJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone
          withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)formatUTCWithJavaUtilDate:(JavaUtilDate *)date
                           withNSString:(NSString *)pattern;

+ (NSString *)formatUTCWithJavaUtilDate:(JavaUtilDate *)date
                           withNSString:(NSString *)pattern
                     withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (NSString *)formatUTCWithLong:(jlong)millis
                   withNSString:(NSString *)pattern;

+ (NSString *)formatUTCWithLong:(jlong)millis
                   withNSString:(NSString *)pattern
             withJavaUtilLocale:(JavaUtilLocale *)locale;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsLang3TimeDateFormatUtils)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_DATETIME_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_DATETIME_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_DATETIME_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_DATETIME_TIME_ZONE_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_DATETIME_TIME_ZONE_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_DATETIME_TIME_ZONE_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_DATE_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_DATE_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_DATE_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_DATE_TIME_ZONE_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_DATE_TIME_ZONE_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_DATE_TIME_ZONE_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_TIME_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_TIME_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_TIME_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_TIME_TIME_ZONE_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_TIME_TIME_ZONE_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_TIME_TIME_ZONE_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_TIME_NO_T_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_TIME_NO_T_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_TIME_NO_T_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_ISO_TIME_NO_T_TIME_ZONE_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_ISO_TIME_NO_T_TIME_ZONE_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, ISO_TIME_NO_T_TIME_ZONE_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

inline OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_get_SMTP_DATETIME_FORMAT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsLang3TimeFastDateFormat *OrgApacheCommonsLang3TimeDateFormatUtils_SMTP_DATETIME_FORMAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsLang3TimeDateFormatUtils, SMTP_DATETIME_FORMAT, OrgApacheCommonsLang3TimeFastDateFormat *)

FOUNDATION_EXPORT void OrgApacheCommonsLang3TimeDateFormatUtils_init(OrgApacheCommonsLang3TimeDateFormatUtils *self);

FOUNDATION_EXPORT OrgApacheCommonsLang3TimeDateFormatUtils *new_OrgApacheCommonsLang3TimeDateFormatUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsLang3TimeDateFormatUtils *create_OrgApacheCommonsLang3TimeDateFormatUtils_init();

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatUTCWithLong_withNSString_(jlong millis, NSString *pattern);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatUTCWithJavaUtilDate_withNSString_(JavaUtilDate *date, NSString *pattern);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatUTCWithLong_withNSString_withJavaUtilLocale_(jlong millis, NSString *pattern, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatUTCWithJavaUtilDate_withNSString_withJavaUtilLocale_(JavaUtilDate *date, NSString *pattern, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithLong_withNSString_(jlong millis, NSString *pattern);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilDate_withNSString_(JavaUtilDate *date, NSString *pattern);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilCalendar_withNSString_(JavaUtilCalendar *calendar, NSString *pattern);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithLong_withNSString_withJavaUtilTimeZone_(jlong millis, NSString *pattern, JavaUtilTimeZone *timeZone);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilDate_withNSString_withJavaUtilTimeZone_(JavaUtilDate *date, NSString *pattern, JavaUtilTimeZone *timeZone);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilCalendar_withNSString_withJavaUtilTimeZone_(JavaUtilCalendar *calendar, NSString *pattern, JavaUtilTimeZone *timeZone);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithLong_withNSString_withJavaUtilLocale_(jlong millis, NSString *pattern, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilDate_withNSString_withJavaUtilLocale_(JavaUtilDate *date, NSString *pattern, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilCalendar_withNSString_withJavaUtilLocale_(JavaUtilCalendar *calendar, NSString *pattern, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithLong_withNSString_withJavaUtilTimeZone_withJavaUtilLocale_(jlong millis, NSString *pattern, JavaUtilTimeZone *timeZone, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilDate_withNSString_withJavaUtilTimeZone_withJavaUtilLocale_(JavaUtilDate *date, NSString *pattern, JavaUtilTimeZone *timeZone, JavaUtilLocale *locale);

FOUNDATION_EXPORT NSString *OrgApacheCommonsLang3TimeDateFormatUtils_formatWithJavaUtilCalendar_withNSString_withJavaUtilTimeZone_withJavaUtilLocale_(JavaUtilCalendar *calendar, NSString *pattern, JavaUtilTimeZone *timeZone, JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsLang3TimeDateFormatUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsLang3TimeDateFormatUtils")