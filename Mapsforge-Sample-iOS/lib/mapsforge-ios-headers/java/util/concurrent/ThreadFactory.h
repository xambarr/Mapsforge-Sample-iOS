//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ThreadFactory.java
//

#ifndef _JavaUtilConcurrentThreadFactory_H_
#define _JavaUtilConcurrentThreadFactory_H_

#include "J2ObjC_header.h"

@class JavaLangThread;
@protocol JavaLangRunnable;

@protocol JavaUtilConcurrentThreadFactory < NSObject, JavaObject >

- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)r OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadFactory)

#endif // _JavaUtilConcurrentThreadFactory_H_
