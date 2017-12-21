//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:wdxxl_lucene_350.jar!org/apache/lucene/index/IndexWriterConfig.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneIndexIndexWriterConfig")
#ifdef RESTRICT_OrgApacheLuceneIndexIndexWriterConfig
#define INCLUDE_ALL_OrgApacheLuceneIndexIndexWriterConfig 0
#else
#define INCLUDE_ALL_OrgApacheLuceneIndexIndexWriterConfig 1
#endif
#undef RESTRICT_OrgApacheLuceneIndexIndexWriterConfig

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheLuceneIndexIndexWriterConfig_) && (INCLUDE_ALL_OrgApacheLuceneIndexIndexWriterConfig || defined(INCLUDE_OrgApacheLuceneIndexIndexWriterConfig))
#define OrgApacheLuceneIndexIndexWriterConfig_

@class OrgApacheLuceneAnalysisAnalyzer;
@class OrgApacheLuceneIndexDocumentsWriter_IndexingChain;
@class OrgApacheLuceneIndexIndexCommit;
@class OrgApacheLuceneIndexIndexWriterConfig_OpenMode;
@class OrgApacheLuceneIndexIndexWriter_IndexReaderWarmer;
@class OrgApacheLuceneIndexMergePolicy;
@class OrgApacheLuceneIndexMergeScheduler;
@class OrgApacheLuceneSearchSimilarity;
@class OrgApacheLuceneUtilVersion;
@protocol OrgApacheLuceneIndexIndexDeletionPolicy;

@interface OrgApacheLuceneIndexIndexWriterConfig : NSObject < NSCopying >

#pragma mark Public

- (instancetype)initWithOrgApacheLuceneUtilVersion:(OrgApacheLuceneUtilVersion *)matchVersion
               withOrgApacheLuceneAnalysisAnalyzer:(OrgApacheLuceneAnalysisAnalyzer *)analyzer;

- (id)java_clone;

- (OrgApacheLuceneAnalysisAnalyzer *)getAnalyzer;

+ (jlong)getDefaultWriteLockTimeout;

- (OrgApacheLuceneIndexIndexCommit *)getIndexCommit;

- (id<OrgApacheLuceneIndexIndexDeletionPolicy>)getIndexDeletionPolicy;

- (jint)getMaxBufferedDeleteTerms;

- (jint)getMaxBufferedDocs;

- (jint)getMaxThreadStates;

- (OrgApacheLuceneIndexIndexWriter_IndexReaderWarmer *)getMergedSegmentWarmer;

- (OrgApacheLuceneIndexMergePolicy *)getMergePolicy;

- (OrgApacheLuceneIndexMergeScheduler *)getMergeScheduler;

- (OrgApacheLuceneIndexIndexWriterConfig_OpenMode *)getOpenMode;

- (jdouble)getRAMBufferSizeMB;

- (jboolean)getReaderPooling;

- (jint)getReaderTermsIndexDivisor;

- (OrgApacheLuceneSearchSimilarity *)getSimilarity;

- (jint)getTermIndexInterval;

- (jlong)getWriteLockTimeout;

+ (void)setDefaultWriteLockTimeoutWithLong:(jlong)writeLockTimeout;

- (OrgApacheLuceneIndexIndexWriterConfig *)setIndexCommitWithOrgApacheLuceneIndexIndexCommit:(OrgApacheLuceneIndexIndexCommit *)commit;

- (OrgApacheLuceneIndexIndexWriterConfig *)setIndexDeletionPolicyWithOrgApacheLuceneIndexIndexDeletionPolicy:(id<OrgApacheLuceneIndexIndexDeletionPolicy>)delPolicy;

- (OrgApacheLuceneIndexIndexWriterConfig *)setMaxBufferedDeleteTermsWithInt:(jint)maxBufferedDeleteTerms;

- (OrgApacheLuceneIndexIndexWriterConfig *)setMaxBufferedDocsWithInt:(jint)maxBufferedDocs;

- (OrgApacheLuceneIndexIndexWriterConfig *)setMaxThreadStatesWithInt:(jint)maxThreadStates;

- (OrgApacheLuceneIndexIndexWriterConfig *)setMergedSegmentWarmerWithOrgApacheLuceneIndexIndexWriter_IndexReaderWarmer:(OrgApacheLuceneIndexIndexWriter_IndexReaderWarmer *)mergeSegmentWarmer;

- (OrgApacheLuceneIndexIndexWriterConfig *)setMergePolicyWithOrgApacheLuceneIndexMergePolicy:(OrgApacheLuceneIndexMergePolicy *)mergePolicy;

- (OrgApacheLuceneIndexIndexWriterConfig *)setMergeSchedulerWithOrgApacheLuceneIndexMergeScheduler:(OrgApacheLuceneIndexMergeScheduler *)mergeScheduler;

- (OrgApacheLuceneIndexIndexWriterConfig *)setOpenModeWithOrgApacheLuceneIndexIndexWriterConfig_OpenMode:(OrgApacheLuceneIndexIndexWriterConfig_OpenMode *)openMode;

- (OrgApacheLuceneIndexIndexWriterConfig *)setRAMBufferSizeMBWithDouble:(jdouble)ramBufferSizeMB;

- (OrgApacheLuceneIndexIndexWriterConfig *)setReaderPoolingWithBoolean:(jboolean)readerPooling;

- (OrgApacheLuceneIndexIndexWriterConfig *)setReaderTermsIndexDivisorWithInt:(jint)divisor;

- (OrgApacheLuceneIndexIndexWriterConfig *)setSimilarityWithOrgApacheLuceneSearchSimilarity:(OrgApacheLuceneSearchSimilarity *)similarity;

- (OrgApacheLuceneIndexIndexWriterConfig *)setTermIndexIntervalWithInt:(jint)interval;

- (OrgApacheLuceneIndexIndexWriterConfig *)setWriteLockTimeoutWithLong:(jlong)writeLockTimeout;

- (NSString *)description;

#pragma mark Package-Private

- (OrgApacheLuceneIndexDocumentsWriter_IndexingChain *)getIndexingChain;

- (OrgApacheLuceneIndexIndexWriterConfig *)setIndexingChainWithOrgApacheLuceneIndexDocumentsWriter_IndexingChain:(OrgApacheLuceneIndexDocumentsWriter_IndexingChain *)indexingChain;

@end

J2OBJC_STATIC_INIT(OrgApacheLuceneIndexIndexWriterConfig)

inline jint OrgApacheLuceneIndexIndexWriterConfig_get_DEFAULT_TERM_INDEX_INTERVAL();
#define OrgApacheLuceneIndexIndexWriterConfig_DEFAULT_TERM_INDEX_INTERVAL 128
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig, DEFAULT_TERM_INDEX_INTERVAL, jint)

inline jint OrgApacheLuceneIndexIndexWriterConfig_get_DISABLE_AUTO_FLUSH();
#define OrgApacheLuceneIndexIndexWriterConfig_DISABLE_AUTO_FLUSH -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig, DISABLE_AUTO_FLUSH, jint)

inline jint OrgApacheLuceneIndexIndexWriterConfig_get_DEFAULT_MAX_BUFFERED_DELETE_TERMS();
#define OrgApacheLuceneIndexIndexWriterConfig_DEFAULT_MAX_BUFFERED_DELETE_TERMS -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig, DEFAULT_MAX_BUFFERED_DELETE_TERMS, jint)

inline jint OrgApacheLuceneIndexIndexWriterConfig_get_DEFAULT_MAX_BUFFERED_DOCS();
#define OrgApacheLuceneIndexIndexWriterConfig_DEFAULT_MAX_BUFFERED_DOCS -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig, DEFAULT_MAX_BUFFERED_DOCS, jint)

inline jdouble OrgApacheLuceneIndexIndexWriterConfig_get_DEFAULT_RAM_BUFFER_SIZE_MB();
#define OrgApacheLuceneIndexIndexWriterConfig_DEFAULT_RAM_BUFFER_SIZE_MB 16.0
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig, DEFAULT_RAM_BUFFER_SIZE_MB, jdouble)

inline jlong OrgApacheLuceneIndexIndexWriterConfig_get_WRITE_LOCK_TIMEOUT();
inline jlong OrgApacheLuceneIndexIndexWriterConfig_set_WRITE_LOCK_TIMEOUT(jlong value);
inline jlong *OrgApacheLuceneIndexIndexWriterConfig_getRef_WRITE_LOCK_TIMEOUT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jlong OrgApacheLuceneIndexIndexWriterConfig_WRITE_LOCK_TIMEOUT;
J2OBJC_STATIC_FIELD_PRIMITIVE(OrgApacheLuceneIndexIndexWriterConfig, WRITE_LOCK_TIMEOUT, jlong)

inline jint OrgApacheLuceneIndexIndexWriterConfig_get_DEFAULT_MAX_THREAD_STATES();
#define OrgApacheLuceneIndexIndexWriterConfig_DEFAULT_MAX_THREAD_STATES 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig, DEFAULT_MAX_THREAD_STATES, jint)

inline jboolean OrgApacheLuceneIndexIndexWriterConfig_get_DEFAULT_READER_POOLING();
#define OrgApacheLuceneIndexIndexWriterConfig_DEFAULT_READER_POOLING false
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig, DEFAULT_READER_POOLING, jboolean)

inline jint OrgApacheLuceneIndexIndexWriterConfig_get_DEFAULT_READER_TERMS_INDEX_DIVISOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint OrgApacheLuceneIndexIndexWriterConfig_DEFAULT_READER_TERMS_INDEX_DIVISOR;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(OrgApacheLuceneIndexIndexWriterConfig, DEFAULT_READER_TERMS_INDEX_DIVISOR, jint)

FOUNDATION_EXPORT void OrgApacheLuceneIndexIndexWriterConfig_setDefaultWriteLockTimeoutWithLong_(jlong writeLockTimeout);

FOUNDATION_EXPORT jlong OrgApacheLuceneIndexIndexWriterConfig_getDefaultWriteLockTimeout();

FOUNDATION_EXPORT void OrgApacheLuceneIndexIndexWriterConfig_initWithOrgApacheLuceneUtilVersion_withOrgApacheLuceneAnalysisAnalyzer_(OrgApacheLuceneIndexIndexWriterConfig *self, OrgApacheLuceneUtilVersion *matchVersion, OrgApacheLuceneAnalysisAnalyzer *analyzer);

FOUNDATION_EXPORT OrgApacheLuceneIndexIndexWriterConfig *new_OrgApacheLuceneIndexIndexWriterConfig_initWithOrgApacheLuceneUtilVersion_withOrgApacheLuceneAnalysisAnalyzer_(OrgApacheLuceneUtilVersion *matchVersion, OrgApacheLuceneAnalysisAnalyzer *analyzer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneIndexIndexWriterConfig *create_OrgApacheLuceneIndexIndexWriterConfig_initWithOrgApacheLuceneUtilVersion_withOrgApacheLuceneAnalysisAnalyzer_(OrgApacheLuceneUtilVersion *matchVersion, OrgApacheLuceneAnalysisAnalyzer *analyzer);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexIndexWriterConfig)

#endif

#if !defined (OrgApacheLuceneIndexIndexWriterConfig_OpenMode_) && (INCLUDE_ALL_OrgApacheLuceneIndexIndexWriterConfig || defined(INCLUDE_OrgApacheLuceneIndexIndexWriterConfig_OpenMode))
#define OrgApacheLuceneIndexIndexWriterConfig_OpenMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgApacheLuceneIndexIndexWriterConfig_OpenMode_Enum) {
  OrgApacheLuceneIndexIndexWriterConfig_OpenMode_Enum_CREATE = 0,
  OrgApacheLuceneIndexIndexWriterConfig_OpenMode_Enum_APPEND = 1,
  OrgApacheLuceneIndexIndexWriterConfig_OpenMode_Enum_CREATE_OR_APPEND = 2,
};

@interface OrgApacheLuceneIndexIndexWriterConfig_OpenMode : JavaLangEnum < NSCopying >

#pragma mark Public

+ (OrgApacheLuceneIndexIndexWriterConfig_OpenMode *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgApacheLuceneIndexIndexWriterConfig_OpenMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgApacheLuceneIndexIndexWriterConfig_OpenMode *OrgApacheLuceneIndexIndexWriterConfig_OpenMode_values_[];

inline OrgApacheLuceneIndexIndexWriterConfig_OpenMode *OrgApacheLuceneIndexIndexWriterConfig_OpenMode_get_CREATE();
J2OBJC_ENUM_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig_OpenMode, CREATE)

inline OrgApacheLuceneIndexIndexWriterConfig_OpenMode *OrgApacheLuceneIndexIndexWriterConfig_OpenMode_get_APPEND();
J2OBJC_ENUM_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig_OpenMode, APPEND)

inline OrgApacheLuceneIndexIndexWriterConfig_OpenMode *OrgApacheLuceneIndexIndexWriterConfig_OpenMode_get_CREATE_OR_APPEND();
J2OBJC_ENUM_CONSTANT(OrgApacheLuceneIndexIndexWriterConfig_OpenMode, CREATE_OR_APPEND)

FOUNDATION_EXPORT IOSObjectArray *OrgApacheLuceneIndexIndexWriterConfig_OpenMode_values();

FOUNDATION_EXPORT OrgApacheLuceneIndexIndexWriterConfig_OpenMode *OrgApacheLuceneIndexIndexWriterConfig_OpenMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgApacheLuceneIndexIndexWriterConfig_OpenMode *OrgApacheLuceneIndexIndexWriterConfig_OpenMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneIndexIndexWriterConfig_OpenMode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneIndexIndexWriterConfig")
