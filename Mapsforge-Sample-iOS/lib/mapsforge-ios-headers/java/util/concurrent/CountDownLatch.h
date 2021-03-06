//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CountDownLatch.java
//

#ifndef _JavaUtilConcurrentCountDownLatch_H_
#define _JavaUtilConcurrentCountDownLatch_H_

#include "J2ObjC_header.h"

@class JavaUtilConcurrentTimeUnitEnum;

@interface JavaUtilConcurrentCountDownLatch : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)count;

- (void)await;

- (jboolean)awaitWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)countDown;

- (jlong)getCount;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCountDownLatch)

FOUNDATION_EXPORT void JavaUtilConcurrentCountDownLatch_initWithInt_(JavaUtilConcurrentCountDownLatch *self, jint count);

FOUNDATION_EXPORT JavaUtilConcurrentCountDownLatch *new_JavaUtilConcurrentCountDownLatch_initWithInt_(jint count) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCountDownLatch)

#endif // _JavaUtilConcurrentCountDownLatch_H_
