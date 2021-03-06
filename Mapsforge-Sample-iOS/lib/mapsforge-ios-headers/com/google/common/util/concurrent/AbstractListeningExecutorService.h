//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/AbstractListeningExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_RESTRICT
#define ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_) && (ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_

#define ComGoogleCommonUtilConcurrentListeningExecutorService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListeningExecutorService_INCLUDE 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"

@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilList;

@interface ComGoogleCommonUtilConcurrentAbstractListeningExecutorService : NSObject < ComGoogleCommonUtilConcurrentListeningExecutorService >

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                             withLong:(jlong)timeout
   withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                                         withId:(id)result;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_init(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService)

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL")
