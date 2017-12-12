//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:lucene-core-3.5.0-sources.jar!org/apache/lucene/store/SimpleFSDirectory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheLuceneStoreSimpleFSDirectory")
#ifdef RESTRICT_OrgApacheLuceneStoreSimpleFSDirectory
#define INCLUDE_ALL_OrgApacheLuceneStoreSimpleFSDirectory 0
#else
#define INCLUDE_ALL_OrgApacheLuceneStoreSimpleFSDirectory 1
#endif
#undef RESTRICT_OrgApacheLuceneStoreSimpleFSDirectory

#if !defined (OrgApacheLuceneStoreSimpleFSDirectory_) && (INCLUDE_ALL_OrgApacheLuceneStoreSimpleFSDirectory || defined(INCLUDE_OrgApacheLuceneStoreSimpleFSDirectory))
#define OrgApacheLuceneStoreSimpleFSDirectory_

#define RESTRICT_OrgApacheLuceneStoreFSDirectory 1
#define INCLUDE_OrgApacheLuceneStoreFSDirectory 1
#include "org/apache/lucene/store/FSDirectory.h"

@class JavaIoFile;
@class OrgApacheLuceneStoreIndexInput;
@class OrgApacheLuceneStoreLockFactory;

@interface OrgApacheLuceneStoreSimpleFSDirectory : OrgApacheLuceneStoreFSDirectory

#pragma mark Public

- (instancetype)initWithJavaIoFile:(JavaIoFile *)path;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)path
withOrgApacheLuceneStoreLockFactory:(OrgApacheLuceneStoreLockFactory *)lockFactory;

- (OrgApacheLuceneStoreIndexInput *)openInputWithNSString:(NSString *)name
                                                  withInt:(jint)bufferSize;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneStoreSimpleFSDirectory)

FOUNDATION_EXPORT void OrgApacheLuceneStoreSimpleFSDirectory_initWithJavaIoFile_withOrgApacheLuceneStoreLockFactory_(OrgApacheLuceneStoreSimpleFSDirectory *self, JavaIoFile *path, OrgApacheLuceneStoreLockFactory *lockFactory);

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory *new_OrgApacheLuceneStoreSimpleFSDirectory_initWithJavaIoFile_withOrgApacheLuceneStoreLockFactory_(JavaIoFile *path, OrgApacheLuceneStoreLockFactory *lockFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory *create_OrgApacheLuceneStoreSimpleFSDirectory_initWithJavaIoFile_withOrgApacheLuceneStoreLockFactory_(JavaIoFile *path, OrgApacheLuceneStoreLockFactory *lockFactory);

FOUNDATION_EXPORT void OrgApacheLuceneStoreSimpleFSDirectory_initWithJavaIoFile_(OrgApacheLuceneStoreSimpleFSDirectory *self, JavaIoFile *path);

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory *new_OrgApacheLuceneStoreSimpleFSDirectory_initWithJavaIoFile_(JavaIoFile *path) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory *create_OrgApacheLuceneStoreSimpleFSDirectory_initWithJavaIoFile_(JavaIoFile *path);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneStoreSimpleFSDirectory)

#endif

#if !defined (OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_) && (INCLUDE_ALL_OrgApacheLuceneStoreSimpleFSDirectory || defined(INCLUDE_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput))
#define OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_

#define RESTRICT_OrgApacheLuceneStoreBufferedIndexInput 1
#define INCLUDE_OrgApacheLuceneStoreBufferedIndexInput 1
#include "org/apache/lucene/store/BufferedIndexInput.h"

@class IOSByteArray;
@class JavaIoFile;
@class OrgApacheLuceneStoreIndexOutput;
@class OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor;

@interface OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput : OrgApacheLuceneStoreBufferedIndexInput {
 @public
  OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor *file_;
  jboolean isClone_;
  jint chunkSize_;
}

#pragma mark Public

- (instancetype)initWithJavaIoFile:(JavaIoFile *)path
                           withInt:(jint)bufferSize
                           withInt:(jint)chunkSize;

- (instancetype)initWithNSString:(NSString *)resourceDesc
                  withJavaIoFile:(JavaIoFile *)path
                         withInt:(jint)bufferSize
                         withInt:(jint)chunkSize;

- (id)java_clone;

- (void)close;

- (void)copyBytesWithOrgApacheLuceneStoreIndexOutput:(OrgApacheLuceneStoreIndexOutput *)outArg
                                            withLong:(jlong)numBytes OBJC_METHOD_FAMILY_NONE;

- (jlong)length;

#pragma mark Protected

- (void)readInternalWithByteArray:(IOSByteArray *)b
                          withInt:(jint)offset
                          withInt:(jint)len;

- (void)seekInternalWithLong:(jlong)position;

#pragma mark Package-Private

- (jboolean)isFDValid;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput)

J2OBJC_FIELD_SETTER(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput, file_, OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor *)

FOUNDATION_EXPORT void OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_initWithJavaIoFile_withInt_withInt_(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput *self, JavaIoFile *path, jint bufferSize, jint chunkSize);

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput *new_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_initWithJavaIoFile_withInt_withInt_(JavaIoFile *path, jint bufferSize, jint chunkSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput *create_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_initWithJavaIoFile_withInt_withInt_(JavaIoFile *path, jint bufferSize, jint chunkSize);

FOUNDATION_EXPORT void OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_initWithNSString_withJavaIoFile_withInt_withInt_(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput *self, NSString *resourceDesc, JavaIoFile *path, jint bufferSize, jint chunkSize);

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput *new_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_initWithNSString_withJavaIoFile_withInt_withInt_(NSString *resourceDesc, JavaIoFile *path, jint bufferSize, jint chunkSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput *create_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_initWithNSString_withJavaIoFile_withInt_withInt_(NSString *resourceDesc, JavaIoFile *path, jint bufferSize, jint chunkSize);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput)

#endif

#if !defined (OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor_) && (INCLUDE_ALL_OrgApacheLuceneStoreSimpleFSDirectory || defined(INCLUDE_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor))
#define OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor_

#define RESTRICT_JavaIoRandomAccessFile 1
#define INCLUDE_JavaIoRandomAccessFile 1
#include "java/io/RandomAccessFile.h"

@class JavaIoFile;

@interface OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor : JavaIoRandomAccessFile {
 @public
  volatile_jboolean isOpen_;
  jlong position_;
  jlong length_;
}

#pragma mark Public

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)mode;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor)

FOUNDATION_EXPORT void OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor_initWithJavaIoFile_withNSString_(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor *self, JavaIoFile *file, NSString *mode);

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor *new_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor *create_OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *mode);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheLuceneStoreSimpleFSDirectory_SimpleFSIndexInput_Descriptor)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheLuceneStoreSimpleFSDirectory")
