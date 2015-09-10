//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/ForwardingFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT
#if ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_INCLUDE
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingFuture_) && (ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingFuture_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define JavaUtilConcurrentFuture_RESTRICT 1
#define JavaUtilConcurrentFuture_INCLUDE 1
#include "java/util/concurrent/Future.h"

@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonUtilConcurrentForwardingFuture : ComGoogleCommonCollectForwardingObject < JavaUtilConcurrentFuture >

#pragma mark Public

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (id)get;

- (id)getWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)isCancelled;

- (jboolean)isDone;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingFuture_init(ComGoogleCommonUtilConcurrentForwardingFuture *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingFuture)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_) && (ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_

@protocol JavaUtilConcurrentFuture;

@interface ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture : ComGoogleCommonUtilConcurrentForwardingFuture

#pragma mark Protected

- (instancetype)initWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)delegate;

- (id<JavaUtilConcurrentFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_initWithJavaUtilConcurrentFuture_(ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture *self, id<JavaUtilConcurrentFuture> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture)

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL")
