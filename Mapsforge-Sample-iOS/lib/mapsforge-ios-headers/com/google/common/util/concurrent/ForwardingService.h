//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/ForwardingService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentForwardingService_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentForwardingService_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingService_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentForwardingService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingService_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentForwardingService_) && (ComGoogleCommonUtilConcurrentForwardingService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingService_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define ComGoogleCommonUtilConcurrentService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentService_INCLUDE 1
#include "com/google/common/util/concurrent/Service.h"

@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol ComGoogleCommonUtilConcurrentService_Listener;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentForwardingService : ComGoogleCommonCollectForwardingObject < ComGoogleCommonUtilConcurrentService >

#pragma mark Public

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(id<ComGoogleCommonUtilConcurrentService_Listener>)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (JavaLangThrowable *)failureCause;

- (jboolean)isRunning;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)start;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)startAndWait;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)state;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)stop;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)stopAndWait;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentService>)delegate;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)standardStartAndWait;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)standardStopAndWait;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingService_init(ComGoogleCommonUtilConcurrentForwardingService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingService)

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentForwardingService_INCLUDE_ALL")
