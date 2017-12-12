//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/search/FilterManager.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneSearchFilterManager")
#ifdef RESTRICT_OrgApacheLuceneSearchFilterManager
#define INCLUDE_ALL_OrgApacheLuceneSearchFilterManager 0
#else
#define INCLUDE_ALL_OrgApacheLuceneSearchFilterManager 1
#endif
#undef RESTRICT_OrgApacheLuceneSearchFilterManager

#if !defined (OrgApacheLuceneSearchFilterManager_) && (INCLUDE_ALL_OrgApacheLuceneSearchFilterManager || defined(INCLUDE_OrgApacheLuceneSearchFilterManager))
#define OrgApacheLuceneSearchFilterManager_

@class OrgApacheLuceneSearchFilter;
@class OrgApacheLuceneSearchFilterManager_FilterCleaner;
@protocol JavaUtilMap;

@interface OrgApacheLuceneSearchFilterManager : NSObject {
 @public
  id<JavaUtilMap> cache_;
  jint cacheCleanSize_;
  jlong cleanSleepTime_;
  OrgApacheLuceneSearchFilterManager_FilterCleaner *filterCleaner_;
}

#pragma mark Public

- (OrgApacheLuceneSearchFilter *)getFilterWithOrgApacheLuceneSearchFilter:(OrgApacheLuceneSearchFilter *)filter;

+ (OrgApacheLuceneSearchFilterManager *)getInstance;

- (void)setCacheSizeWithInt:(jint)cacheCleanSize;

- (void)setCleanThreadSleepTimeWithLong:(jlong)cleanSleepTime;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchFilterManager)

J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchFilterManager, cache_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchFilterManager, filterCleaner_, OrgApacheLuceneSearchFilterManager_FilterCleaner *)

inline OrgApacheLuceneSearchFilterManager *OrgApacheLuceneSearchFilterManager_get_manager();
inline OrgApacheLuceneSearchFilterManager *OrgApacheLuceneSearchFilterManager_set_manager(OrgApacheLuceneSearchFilterManager *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager *OrgApacheLuceneSearchFilterManager_manager;
J2OBJC_STATIC_FIELD_OBJ(OrgApacheLuceneSearchFilterManager, manager, OrgApacheLuceneSearchFilterManager *)

inline jint OrgApacheLuceneSearchFilterManager_get_DEFAULT_CACHE_CLEAN_SIZE();
#define OrgApacheLuceneSearchFilterManager_DEFAULT_CACHE_CLEAN_SIZE 100
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneSearchFilterManager, DEFAULT_CACHE_CLEAN_SIZE, jint)

inline jlong OrgApacheLuceneSearchFilterManager_get_DEFAULT_CACHE_SLEEP_TIME();
#define OrgApacheLuceneSearchFilterManager_DEFAULT_CACHE_SLEEP_TIME 600000LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneSearchFilterManager, DEFAULT_CACHE_SLEEP_TIME, jlong)

FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager *OrgApacheLuceneSearchFilterManager_getInstance();

FOUNDATION_EXPORT void OrgApacheLuceneSearchFilterManager_init(OrgApacheLuceneSearchFilterManager *self);

FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager *new_OrgApacheLuceneSearchFilterManager_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager *create_OrgApacheLuceneSearchFilterManager_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchFilterManager)

#endif

#if !defined (OrgApacheLuceneSearchFilterManager_FilterItem_) && (INCLUDE_ALL_OrgApacheLuceneSearchFilterManager || defined(INCLUDE_OrgApacheLuceneSearchFilterManager_FilterItem))
#define OrgApacheLuceneSearchFilterManager_FilterItem_

@class OrgApacheLuceneSearchFilter;
@class OrgApacheLuceneSearchFilterManager;

@interface OrgApacheLuceneSearchFilterManager_FilterItem : NSObject {
 @public
  OrgApacheLuceneSearchFilter *filter_;
  jlong timestamp_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneSearchFilterManager:(OrgApacheLuceneSearchFilterManager *)outer$
                           withOrgApacheLuceneSearchFilter:(OrgApacheLuceneSearchFilter *)filter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchFilterManager_FilterItem)

J2OBJC_FIELD_SETTER(OrgApacheLuceneSearchFilterManager_FilterItem, filter_, OrgApacheLuceneSearchFilter *)

FOUNDATION_EXPORT void OrgApacheLuceneSearchFilterManager_FilterItem_initWithOrgApacheLuceneSearchFilterManager_withOrgApacheLuceneSearchFilter_(OrgApacheLuceneSearchFilterManager_FilterItem *self, OrgApacheLuceneSearchFilterManager *outer$, OrgApacheLuceneSearchFilter *filter);

FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager_FilterItem *new_OrgApacheLuceneSearchFilterManager_FilterItem_initWithOrgApacheLuceneSearchFilterManager_withOrgApacheLuceneSearchFilter_(OrgApacheLuceneSearchFilterManager *outer$, OrgApacheLuceneSearchFilter *filter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager_FilterItem *create_OrgApacheLuceneSearchFilterManager_FilterItem_initWithOrgApacheLuceneSearchFilterManager_withOrgApacheLuceneSearchFilter_(OrgApacheLuceneSearchFilterManager *outer$, OrgApacheLuceneSearchFilter *filter);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchFilterManager_FilterItem)

#endif

#if !defined (OrgApacheLuceneSearchFilterManager_FilterCleaner_) && (INCLUDE_ALL_OrgApacheLuceneSearchFilterManager || defined(INCLUDE_OrgApacheLuceneSearchFilterManager_FilterCleaner))
#define OrgApacheLuceneSearchFilterManager_FilterCleaner_

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class OrgApacheLuceneSearchFilterManager;

@interface OrgApacheLuceneSearchFilterManager_FilterCleaner : NSObject < JavaLangRunnable >

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneSearchFilterManager:(OrgApacheLuceneSearchFilterManager *)outer$;

- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneSearchFilterManager_FilterCleaner)

FOUNDATION_EXPORT void OrgApacheLuceneSearchFilterManager_FilterCleaner_initWithOrgApacheLuceneSearchFilterManager_(OrgApacheLuceneSearchFilterManager_FilterCleaner *self, OrgApacheLuceneSearchFilterManager *outer$);

FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager_FilterCleaner *new_OrgApacheLuceneSearchFilterManager_FilterCleaner_initWithOrgApacheLuceneSearchFilterManager_(OrgApacheLuceneSearchFilterManager *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneSearchFilterManager_FilterCleaner *create_OrgApacheLuceneSearchFilterManager_FilterCleaner_initWithOrgApacheLuceneSearchFilterManager_(OrgApacheLuceneSearchFilterManager *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneSearchFilterManager_FilterCleaner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneSearchFilterManager")
