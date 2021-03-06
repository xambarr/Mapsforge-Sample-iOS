//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/DatagramChannelImpl.java
//

#ifndef _JavaNioDatagramChannelImpl_H_
#define _JavaNioDatagramChannelImpl_H_

#include "J2ObjC_header.h"
#include "java/nio/FileDescriptorChannel.h"
#include "java/nio/channels/DatagramChannel.h"

@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaNetDatagramSocket;
@class JavaNetInetAddress;
@class JavaNetInetSocketAddress;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

@interface JavaNioDatagramChannelImpl : JavaNioChannelsDatagramChannel < JavaNioFileDescriptorChannel > {
 @public
  JavaNetInetSocketAddress *connectAddress_;
  JavaNetInetAddress *localAddress_;
  jboolean connected_;
  jboolean isBound_;
}

#pragma mark Public

- (JavaNioChannelsDatagramChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNioChannelsDatagramChannel *)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (JavaNioChannelsDatagramChannel *)disconnect;

- (JavaIoFileDescriptor *)getFD;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (jboolean)isConnected;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets
                                withInt:(jint)offset
                                withInt:(jint)length;

- (JavaNetSocketAddress *)receiveWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jint)sendWithJavaNioByteBuffer:(JavaNioByteBuffer *)source
         withJavaNetSocketAddress:(JavaNetSocketAddress *)socketAddress;

- (JavaNioChannelsDatagramChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                              withId:(id)value;

- (JavaNetDatagramSocket *)socket;

- (id<JavaUtilSet>)supportedOptions;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources
                                 withInt:(jint)offset
                                 withInt:(jint)length;

#pragma mark Protected

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

- (void)implCloseSelectableChannel;

- (void)implConfigureBlockingWithBoolean:(jboolean)blocking;

#pragma mark Package-Private

- (void)onBindWithBoolean:(jboolean)updateSocketState;

- (void)onConnectWithJavaNetInetAddress:(JavaNetInetAddress *)remoteAddress
                                withInt:(jint)remotePort
                            withBoolean:(jboolean)updateSocketState;

- (void)onDisconnectWithBoolean:(jboolean)updateSocketState;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioDatagramChannelImpl)

J2OBJC_FIELD_SETTER(JavaNioDatagramChannelImpl, connectAddress_, JavaNetInetSocketAddress *)
J2OBJC_FIELD_SETTER(JavaNioDatagramChannelImpl, localAddress_, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNioDatagramChannelImpl_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioDatagramChannelImpl *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

FOUNDATION_EXPORT JavaNioDatagramChannelImpl *new_JavaNioDatagramChannelImpl_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSpiSelectorProvider *selectorProvider) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioDatagramChannelImpl)

#endif // _JavaNioDatagramChannelImpl_H_
