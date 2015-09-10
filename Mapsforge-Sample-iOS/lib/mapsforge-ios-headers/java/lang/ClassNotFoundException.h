//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ClassNotFoundException.java
//

#ifndef _JavaLangClassNotFoundException_H_
#define _JavaLangClassNotFoundException_H_

#include "J2ObjC_header.h"
#include "java/lang/ReflectiveOperationException.h"

@class JavaLangThrowable;

@interface JavaLangClassNotFoundException : JavaLangReflectiveOperationException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)exception;

- (JavaLangThrowable *)getCause;

- (JavaLangThrowable *)getException;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangClassNotFoundException)

FOUNDATION_EXPORT void JavaLangClassNotFoundException_init(JavaLangClassNotFoundException *self);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangClassNotFoundException_initWithNSString_(JavaLangClassNotFoundException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangClassNotFoundException_initWithNSString_withJavaLangThrowable_(JavaLangClassNotFoundException *self, NSString *detailMessage, JavaLangThrowable *exception);

FOUNDATION_EXPORT JavaLangClassNotFoundException *new_JavaLangClassNotFoundException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *exception) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangClassNotFoundException)

#endif // _JavaLangClassNotFoundException_H_