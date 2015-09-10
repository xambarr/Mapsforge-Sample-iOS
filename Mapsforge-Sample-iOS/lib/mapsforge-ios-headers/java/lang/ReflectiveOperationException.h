//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ReflectiveOperationException.java
//

#ifndef _JavaLangReflectiveOperationException_H_
#define _JavaLangReflectiveOperationException_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

@class JavaLangThrowable;

@interface JavaLangReflectiveOperationException : JavaLangException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectiveOperationException)

FOUNDATION_EXPORT void JavaLangReflectiveOperationException_init(JavaLangReflectiveOperationException *self);

FOUNDATION_EXPORT JavaLangReflectiveOperationException *new_JavaLangReflectiveOperationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangReflectiveOperationException_initWithNSString_(JavaLangReflectiveOperationException *self, NSString *message);

FOUNDATION_EXPORT JavaLangReflectiveOperationException *new_JavaLangReflectiveOperationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangReflectiveOperationException_initWithJavaLangThrowable_(JavaLangReflectiveOperationException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangReflectiveOperationException *new_JavaLangReflectiveOperationException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangReflectiveOperationException_initWithNSString_withJavaLangThrowable_(JavaLangReflectiveOperationException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangReflectiveOperationException *new_JavaLangReflectiveOperationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectiveOperationException)

#endif // _JavaLangReflectiveOperationException_H_
