//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/PersistentSnapshotDeletionPolicy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy")
#ifdef RESTRICT_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy
#define INCLUDE_ALL_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy

#if !defined (OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy_) && (INCLUDE_ALL_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy || defined(INCLUDE_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy))
#define OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy_

#define RESTRICT_OrgApacheLuceneIndexSnapshotDeletionPolicy 1
#define INCLUDE_OrgApacheLuceneIndexSnapshotDeletionPolicy 1
#include "org/apache/lucene/index/SnapshotDeletionPolicy.h"

@class OrgApacheLuceneIndexIndexCommit;
@class OrgApacheLuceneIndexIndexWriterConfig_OpenMode;
@class OrgApacheLuceneStoreDirectory;
@class OrgApacheLuceneUtilVersion;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol OrgApacheLuceneIndexIndexDeletionPolicy;

@interface OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy : OrgApacheLuceneIndexSnapshotDeletionPolicy

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneIndexIndexDeletionPolicy:(id<OrgApacheLuceneIndexIndexDeletionPolicy>)primary
                              withOrgApacheLuceneStoreDirectory:(OrgApacheLuceneStoreDirectory *)dir
             withOrgApacheLuceneIndexIndexWriterConfig_OpenMode:(OrgApacheLuceneIndexIndexWriterConfig_OpenMode *)mode
                                 withOrgApacheLuceneUtilVersion:(OrgApacheLuceneUtilVersion *)matchVersion;

- (void)close;

- (void)onInitWithJavaUtilList:(id<JavaUtilList>)commits;

+ (id<JavaUtilMap>)readSnapshotsInfoWithOrgApacheLuceneStoreDirectory:(OrgApacheLuceneStoreDirectory *)dir;

- (void)release__WithNSString:(NSString *)id_;

- (OrgApacheLuceneIndexIndexCommit *)snapshotWithNSString:(NSString *)id_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy)

FOUNDATION_EXPORT id<JavaUtilMap> OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy_readSnapshotsInfoWithOrgApacheLuceneStoreDirectory_(OrgApacheLuceneStoreDirectory *dir);

FOUNDATION_EXPORT void OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy_initWithOrgApacheLuceneIndexIndexDeletionPolicy_withOrgApacheLuceneStoreDirectory_withOrgApacheLuceneIndexIndexWriterConfig_OpenMode_withOrgApacheLuceneUtilVersion_(OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy *self, id<OrgApacheLuceneIndexIndexDeletionPolicy> primary, OrgApacheLuceneStoreDirectory *dir, OrgApacheLuceneIndexIndexWriterConfig_OpenMode *mode, OrgApacheLuceneUtilVersion *matchVersion);

FOUNDATION_EXPORT OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy *new_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy_initWithOrgApacheLuceneIndexIndexDeletionPolicy_withOrgApacheLuceneStoreDirectory_withOrgApacheLuceneIndexIndexWriterConfig_OpenMode_withOrgApacheLuceneUtilVersion_(id<OrgApacheLuceneIndexIndexDeletionPolicy> primary, OrgApacheLuceneStoreDirectory *dir, OrgApacheLuceneIndexIndexWriterConfig_OpenMode *mode, OrgApacheLuceneUtilVersion *matchVersion) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy *create_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy_initWithOrgApacheLuceneIndexIndexDeletionPolicy_withOrgApacheLuceneStoreDirectory_withOrgApacheLuceneIndexIndexWriterConfig_OpenMode_withOrgApacheLuceneUtilVersion_(id<OrgApacheLuceneIndexIndexDeletionPolicy> primary, OrgApacheLuceneStoreDirectory *dir, OrgApacheLuceneIndexIndexWriterConfig_OpenMode *mode, OrgApacheLuceneUtilVersion *matchVersion);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexPersistentSnapshotDeletionPolicy")
