//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/Runtime.java
//

#ifndef _JavaLangRuntime_H_
#define _JavaLangRuntime_H_

#include "J2ObjC_header.h"

@class JavaLangThread;

@interface JavaLangRuntime : NSObject

#pragma mark Public

- (void)addShutdownHookWithJavaLangThread:(JavaLangThread *)hook;

- (jint)availableProcessors;

- (void)exitWithInt:(jint)status;

- (jlong)freeMemory;

- (void)gc;

+ (JavaLangRuntime *)getRuntime;

- (void)haltWithInt:(jint)status;

- (jlong)maxMemory;

- (jboolean)removeShutdownHookWithJavaLangThread:(JavaLangThread *)hook;

- (jlong)totalMemory;

@end

J2OBJC_STATIC_INIT(JavaLangRuntime)

FOUNDATION_EXPORT JavaLangRuntime *JavaLangRuntime_getRuntime();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRuntime)

#endif // _JavaLangRuntime_H_
