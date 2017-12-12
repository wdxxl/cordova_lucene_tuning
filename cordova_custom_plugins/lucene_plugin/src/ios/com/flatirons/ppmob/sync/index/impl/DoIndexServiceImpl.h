//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:offline-index-1.0.jar!com/flatirons/ppmob/sync/index/impl/DoIndexServiceImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl")
#ifdef RESTRICT_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl
#define INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl 0
#else
#define INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl 1
#endif
#undef RESTRICT_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_

#define RESTRICT_ComFlatironsPpmobSyncIndexIDoIndexService 1
#define INCLUDE_ComFlatironsPpmobSyncIndexIDoIndexService 1
#include "com/flatirons/ppmob/sync/index/IDoIndexService.h"

@class JavaIoFile;
@protocol JavaUtilList;
@protocol JavaUtilMap;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl : NSObject < ComFlatironsPpmobSyncIndexIDoIndexService >

#pragma mark Public

- (instancetype)init;

- (void)processWithJavaIoFile:(JavaIoFile *)basicFilesPath
                 withNSString:(NSString *)indexPath
                 withNSString:(NSString *)extractPath
                 withNSString:(NSString *)folderName
             withJavaUtilList:(id<JavaUtilList>)indexSubPaths
              withJavaUtilMap:(id<JavaUtilMap>)commonServices
              withJavaUtilMap:(id<JavaUtilMap>)fieldsConfigs
                 withNSString:(NSString *)status
                 withNSString:(NSString *)libraryId
                 withNSString:(NSString *)publicationId;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl)

inline jint ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_get_size();
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_size 100
J2OBJC_STATIC_FIELD_CONSTANT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl, size, jint)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_init(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *self);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_init();

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl)

#endif

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer_

#define RESTRICT_OrgApacheLuceneAnalysisAnalyzer 1
#define INCLUDE_OrgApacheLuceneAnalysisAnalyzer 1
#include "org/apache/lucene/analysis/Analyzer.h"

@class ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl;
@class JavaIoReader;
@class OrgApacheLuceneAnalysisTokenStream;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer : OrgApacheLuceneAnalysisAnalyzer

#pragma mark Public

- (OrgApacheLuceneAnalysisTokenStream *)tokenStreamWithNSString:(NSString *)s
                                               withJavaIoReader:(JavaIoReader *)reader;

#pragma mark Package-Private

- (instancetype)initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl:(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer *self, ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneral_Analyzer)

#endif

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer_

#define RESTRICT_OrgApacheLuceneAnalysisAnalyzer 1
#define INCLUDE_OrgApacheLuceneAnalysisAnalyzer 1
#include "org/apache/lucene/analysis/Analyzer.h"

@class ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl;
@class JavaIoReader;
@class OrgApacheLuceneAnalysisTokenStream;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer : OrgApacheLuceneAnalysisAnalyzer

#pragma mark Public

- (OrgApacheLuceneAnalysisTokenStream *)tokenStreamWithNSString:(NSString *)s
                                               withJavaIoReader:(JavaIoReader *)reader;

#pragma mark Package-Private

- (instancetype)initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl:(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer *self, ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralHTML_Analyzer)

#endif

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer_

#define RESTRICT_OrgApacheLuceneAnalysisAnalyzer 1
#define INCLUDE_OrgApacheLuceneAnalysisAnalyzer 1
#include "org/apache/lucene/analysis/Analyzer.h"

@class ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl;
@class JavaIoReader;
@class OrgApacheLuceneAnalysisTokenStream;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer : OrgApacheLuceneAnalysisAnalyzer

#pragma mark Public

- (OrgApacheLuceneAnalysisTokenStream *)tokenStreamWithNSString:(NSString *)s
                                               withJavaIoReader:(JavaIoReader *)reader;

#pragma mark Package-Private

- (instancetype)initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl:(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer *self, ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FF_TextGeneralHTML_Analyzer)

#endif

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer_

#define RESTRICT_OrgApacheLuceneAnalysisAnalyzer 1
#define INCLUDE_OrgApacheLuceneAnalysisAnalyzer 1
#include "org/apache/lucene/analysis/Analyzer.h"

@class ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl;
@class JavaIoReader;
@class OrgApacheLuceneAnalysisTokenStream;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer : OrgApacheLuceneAnalysisAnalyzer

#pragma mark Public

- (OrgApacheLuceneAnalysisTokenStream *)tokenStreamWithNSString:(NSString *)s
                                               withJavaIoReader:(JavaIoReader *)reader;

#pragma mark Package-Private

- (instancetype)initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl:(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer *self, ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralFIN_Analyzer)

#endif

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer_

#define RESTRICT_OrgApacheLuceneAnalysisAnalyzer 1
#define INCLUDE_OrgApacheLuceneAnalysisAnalyzer 1
#include "org/apache/lucene/analysis/Analyzer.h"

@class ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl;
@class JavaIoReader;
@class OrgApacheLuceneAnalysisTokenStream;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer : OrgApacheLuceneAnalysisAnalyzer

#pragma mark Public

- (OrgApacheLuceneAnalysisTokenStream *)tokenStreamWithNSString:(NSString *)s
                                               withJavaIoReader:(JavaIoReader *)reader;

#pragma mark Package-Private

- (instancetype)initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl:(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer *self, ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextGeneralKeyword_Analyzer)

#endif

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer_

#define RESTRICT_OrgApacheLuceneAnalysisAnalyzer 1
#define INCLUDE_OrgApacheLuceneAnalysisAnalyzer 1
#include "org/apache/lucene/analysis/Analyzer.h"

@class ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl;
@class JavaIoReader;
@class OrgApacheLuceneAnalysisTokenStream;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer : OrgApacheLuceneAnalysisAnalyzer

#pragma mark Public

- (OrgApacheLuceneAnalysisTokenStream *)tokenStreamWithNSString:(NSString *)s
                                               withJavaIoReader:(JavaIoReader *)reader;

#pragma mark Package-Private

- (instancetype)initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl:(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer *self, ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FTS_TextHyphn_Analyzer)

#endif

#if !defined (ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter_) && (INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl || defined(INCLUDE_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter))
#define ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter_

#define RESTRICT_OrgApacheLuceneAnalysisTokenFilter 1
#define INCLUDE_OrgApacheLuceneAnalysisTokenFilter 1
#include "org/apache/lucene/analysis/TokenFilter.h"

@class ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl;
@class JavaUtilRegexPattern;
@class OrgApacheLuceneAnalysisTokenStream;

@interface ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter : OrgApacheLuceneAnalysisTokenFilter

#pragma mark Public

- (instancetype)initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl:(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *)outer$
                                  withOrgApacheLuceneAnalysisTokenStream:(OrgApacheLuceneAnalysisTokenStream *)inArg
                                                withJavaUtilRegexPattern:(JavaUtilRegexPattern *)p
                                                            withNSString:(NSString *)replacement
                                                             withBoolean:(jboolean)all;

- (jboolean)incrementToken;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter)

FOUNDATION_EXPORT void ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_withOrgApacheLuceneAnalysisTokenStream_withJavaUtilRegexPattern_withNSString_withBoolean_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter *self, ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$, OrgApacheLuceneAnalysisTokenStream *inArg, JavaUtilRegexPattern *p, NSString *replacement, jboolean all);

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter *new_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_withOrgApacheLuceneAnalysisTokenStream_withJavaUtilRegexPattern_withNSString_withBoolean_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$, OrgApacheLuceneAnalysisTokenStream *inArg, JavaUtilRegexPattern *p, NSString *replacement, jboolean all) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter *create_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter_initWithComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_withOrgApacheLuceneAnalysisTokenStream_withJavaUtilRegexPattern_withNSString_withBoolean_(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl *outer$, OrgApacheLuceneAnalysisTokenStream *inArg, JavaUtilRegexPattern *p, NSString *replacement, jboolean all);

J2OBJC_TYPE_LITERAL_HEADER(ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl_FISPatternReplaceFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComFlatironsPpmobSyncIndexImplDoIndexServiceImpl")