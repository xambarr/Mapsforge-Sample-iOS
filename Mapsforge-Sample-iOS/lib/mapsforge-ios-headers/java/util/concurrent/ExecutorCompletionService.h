//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ExecutorCompletionService.java
//

#ifndef _JavaUtilConcurrentExecutorCompletionService_H_
#define _JavaUtilConcurrentExecutorCompletionService_H_

#include "J2ObjC_header.h"
#include "java/util/concurrent/CompletionService.h"

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentFuture;

@interface JavaUtilConcurrentExecutorCompletionService : NSObject < JavaUtilConcurrentCompletionService >

#pragma mark Public

- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor
               withJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)completionQueue;

- (id<JavaUtilConcurrentFuture>)poll;

- (id<JavaUtilConcurrentFuture>)pollWithLong:(jlong)timeout
          withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

- (id<JavaUtilConcurrentFuture>)take;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutorCompletionService)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_(JavaUtilConcurrentExecutorCompletionService *self, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT JavaUtilConcurrentExecutorCompletionService *new_JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_withJavaUtilConcurrentBlockingQueue_(JavaUtilConcurrentExecutorCompletionService *self, id<JavaUtilConcurrentExecutor> executor, id<JavaUtilConcurrentBlockingQueue> completionQueue);

FOUNDATION_EXPORT JavaUtilConcurrentExecutorCompletionService *new_JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_withJavaUtilConcurrentBlockingQueue_(id<JavaUtilConcurrentExecutor> executor, id<JavaUtilConcurrentBlockingQueue> completionQueue) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutorCompletionService)

#endif // _JavaUtilConcurrentExecutorCompletionService_H_
