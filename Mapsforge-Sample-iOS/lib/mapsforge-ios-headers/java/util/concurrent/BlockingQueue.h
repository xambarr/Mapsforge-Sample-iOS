//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/BlockingQueue.java
//

#ifndef _JavaUtilConcurrentBlockingQueue_H_
#define _JavaUtilConcurrentBlockingQueue_H_

#include "J2ObjC_header.h"
#include "java/util/Queue.h"

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;

@protocol JavaUtilConcurrentBlockingQueue < JavaUtilQueue, NSObject, JavaObject >

- (jboolean)addWithId:(id)e;

- (jboolean)offerWithId:(id)e;

- (void)putWithId:(id)e;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)take;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jint)remainingCapacity;

- (jboolean)removeWithId:(id)o;

- (jboolean)containsWithId:(id)o;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentBlockingQueue)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentBlockingQueue)

#endif // _JavaUtilConcurrentBlockingQueue_H_
