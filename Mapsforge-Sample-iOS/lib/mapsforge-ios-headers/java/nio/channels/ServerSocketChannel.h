//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ServerSocketChannel.java
//

#ifndef _JavaNioChannelsServerSocketChannel_H_
#define _JavaNioChannelsServerSocketChannel_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/NetworkChannel.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

@class JavaNetServerSocket;
@class JavaNetSocketAddress;
@class JavaNioChannelsSocketChannel;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

@interface JavaNioChannelsServerSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsNetworkChannel >

#pragma mark Public

- (JavaNioChannelsSocketChannel *)accept;

- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr
                                                             withInt:(jint)backlog;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

+ (JavaNioChannelsServerSocketChannel *)open;

- (JavaNioChannelsServerSocketChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                                  withId:(id)value;

- (JavaNetServerSocket *)socket;

- (id<JavaUtilSet>)supportedOptions;

- (jint)validOps;

#pragma mark Protected

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsServerSocketChannel)

FOUNDATION_EXPORT void JavaNioChannelsServerSocketChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsServerSocketChannel *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

FOUNDATION_EXPORT JavaNioChannelsServerSocketChannel *JavaNioChannelsServerSocketChannel_open();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsServerSocketChannel)

#endif // _JavaNioChannelsServerSocketChannel_H_
