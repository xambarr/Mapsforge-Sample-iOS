//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ForwardingBlockingDeque.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingBlockingDeque_RESTRICT
#define ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingBlockingDeque_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingBlockingDeque_) && (ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE_ALL || ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE)
#define _ComGoogleCommonCollectForwardingBlockingDeque_

#define ComGoogleCommonCollectForwardingDeque_RESTRICT 1
#define ComGoogleCommonCollectForwardingDeque_INCLUDE 1
#include "com/google/common/collect/ForwardingDeque.h"

#define JavaUtilConcurrentBlockingDeque_RESTRICT 1
#define JavaUtilConcurrentBlockingDeque_INCLUDE 1
#include "java/util/concurrent/BlockingDeque.h"

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectForwardingBlockingDeque : ComGoogleCommonCollectForwardingDeque < JavaUtilConcurrentBlockingDeque >

#pragma mark Public

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)offerFirstWithId:(id)e
                    withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)offerLastWithId:(id)e
                   withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)pollFirstWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)pollLastWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)putWithId:(id)e;

- (void)putFirstWithId:(id)e;

- (void)putLastWithId:(id)e;

- (jint)remainingCapacity;

- (id)take;

- (id)takeFirst;

- (id)takeLast;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentBlockingDeque>)delegate;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingBlockingDeque)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingBlockingDeque_init(ComGoogleCommonCollectForwardingBlockingDeque *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingBlockingDeque)

#endif
#pragma pop_macro("ComGoogleCommonCollectForwardingBlockingDeque_INCLUDE_ALL")
