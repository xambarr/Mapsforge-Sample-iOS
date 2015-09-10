//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/ForwardingBlockingQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentForwardingBlockingQueue_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingBlockingQueue_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentForwardingBlockingQueue_) && (ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingBlockingQueue_

#define ComGoogleCommonCollectForwardingQueue_RESTRICT 1
#define ComGoogleCommonCollectForwardingQueue_INCLUDE 1
#include "com/google/common/collect/ForwardingQueue.h"

#define JavaUtilConcurrentBlockingQueue_RESTRICT 1
#define JavaUtilConcurrentBlockingQueue_INCLUDE 1
#include "java/util/concurrent/BlockingQueue.h"

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;

@interface ComGoogleCommonUtilConcurrentForwardingBlockingQueue : ComGoogleCommonCollectForwardingQueue < JavaUtilConcurrentBlockingQueue >

#pragma mark Public

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)putWithId:(id)e;

- (jint)remainingCapacity;

- (id)take;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentBlockingQueue>)delegate;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingBlockingQueue_init(ComGoogleCommonUtilConcurrentForwardingBlockingQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentForwardingBlockingQueue_INCLUDE_ALL")
