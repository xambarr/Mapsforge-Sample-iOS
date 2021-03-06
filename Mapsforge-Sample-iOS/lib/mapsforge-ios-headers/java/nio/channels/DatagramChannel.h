//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/DatagramChannel.java
//

#ifndef _JavaNioChannelsDatagramChannel_H_
#define _JavaNioChannelsDatagramChannel_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/ByteChannel.h"
#include "java/nio/channels/GatheringByteChannel.h"
#include "java/nio/channels/NetworkChannel.h"
#include "java/nio/channels/ScatteringByteChannel.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

@class IOSObjectArray;
@class JavaNetDatagramSocket;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

@interface JavaNioChannelsDatagramChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsGatheringByteChannel, JavaNioChannelsNetworkChannel >

#pragma mark Public

- (JavaNioChannelsDatagramChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNioChannelsDatagramChannel *)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (JavaNioChannelsDatagramChannel *)disconnect;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (jboolean)isConnected;

+ (JavaNioChannelsDatagramChannel *)open;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets
                                withInt:(jint)offset
                                withInt:(jint)length;

- (JavaNetSocketAddress *)receiveWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jint)sendWithJavaNioByteBuffer:(JavaNioByteBuffer *)source
         withJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (JavaNioChannelsDatagramChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                              withId:(id)value;

- (JavaNetDatagramSocket *)socket;

- (id<JavaUtilSet>)supportedOptions;

- (jint)validOps;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)source;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources
                                 withInt:(jint)offset
                                 withInt:(jint)length;

#pragma mark Protected

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsDatagramChannel)

FOUNDATION_EXPORT void JavaNioChannelsDatagramChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsDatagramChannel *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

FOUNDATION_EXPORT JavaNioChannelsDatagramChannel *JavaNioChannelsDatagramChannel_open();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsDatagramChannel)

#endif // _JavaNioChannelsDatagramChannel_H_
