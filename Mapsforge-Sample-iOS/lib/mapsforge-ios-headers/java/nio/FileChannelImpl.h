//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/FileChannelImpl.java
//

#ifndef _JavaNioFileChannelImpl_H_
#define _JavaNioFileChannelImpl_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/FileChannel.h"

@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileLock;
@class JavaNioMappedByteBuffer;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaNioChannelsWritableByteChannel;

@interface JavaNioFileChannelImpl : JavaNioChannelsFileChannel

#pragma mark Public

- (instancetype)initWithId:(id)stream
  withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                   withInt:(jint)mode;

- (void)forceWithBoolean:(jboolean)metadata;

- (JavaIoFileDescriptor *)getFD;

- (JavaNioChannelsFileLock *)lockWithLong:(jlong)position
                                 withLong:(jlong)size
                              withBoolean:(jboolean)shared;

- (JavaNioMappedByteBuffer *)mapWithJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mapMode
                                                              withLong:(jlong)position
                                                              withLong:(jlong)size;

- (jlong)position;

- (JavaNioChannelsFileChannel *)positionWithLong:(jlong)newPosition;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                         withLong:(jlong)position;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                withInt:(jint)offset
                                withInt:(jint)length;

- (void)release__WithJavaNioChannelsFileLock:(JavaNioChannelsFileLock *)lock;

- (jlong)size;

- (jlong)transferFromWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src
                                                   withLong:(jlong)position
                                                   withLong:(jlong)count;

- (jlong)transferToWithLong:(jlong)position
                   withLong:(jlong)count
withJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)target;

- (JavaNioChannelsFileChannel *)truncateWithLong:(jlong)size;

- (JavaNioChannelsFileLock *)tryLockWithLong:(jlong)position
                                    withLong:(jlong)size
                                 withBoolean:(jboolean)shared;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                          withLong:(jlong)position;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                 withInt:(jint)offset
                                 withInt:(jint)length;

#pragma mark Protected

- (void)implCloseChannel;

#pragma mark Package-Private

+ (jint)calculateTotalRemainingWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                                  withInt:(jint)offset
                                                  withInt:(jint)length
                                              withBoolean:(jboolean)copyingIn;

@end

J2OBJC_STATIC_INIT(JavaNioFileChannelImpl)

FOUNDATION_EXPORT void JavaNioFileChannelImpl_initWithId_withJavaIoFileDescriptor_withInt_(JavaNioFileChannelImpl *self, id stream, JavaIoFileDescriptor *fd, jint mode);

FOUNDATION_EXPORT JavaNioFileChannelImpl *new_JavaNioFileChannelImpl_initWithId_withJavaIoFileDescriptor_withInt_(id stream, JavaIoFileDescriptor *fd, jint mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jint JavaNioFileChannelImpl_calculateTotalRemainingWithJavaNioByteBufferArray_withInt_withInt_withBoolean_(IOSObjectArray *buffers, jint offset, jint length, jboolean copyingIn);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileChannelImpl)

#endif // _JavaNioFileChannelImpl_H_
