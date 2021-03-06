//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyManagementException.java
//

#ifndef _JavaSecurityKeyManagementException_H_
#define _JavaSecurityKeyManagementException_H_

#include "J2ObjC_header.h"
#include "java/security/KeyException.h"

@class JavaLangThrowable;

@interface JavaSecurityKeyManagementException : JavaSecurityKeyException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyManagementException)

FOUNDATION_EXPORT void JavaSecurityKeyManagementException_initWithNSString_(JavaSecurityKeyManagementException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityKeyManagementException *new_JavaSecurityKeyManagementException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityKeyManagementException_init(JavaSecurityKeyManagementException *self);

FOUNDATION_EXPORT JavaSecurityKeyManagementException *new_JavaSecurityKeyManagementException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityKeyManagementException_initWithNSString_withJavaLangThrowable_(JavaSecurityKeyManagementException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityKeyManagementException *new_JavaSecurityKeyManagementException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityKeyManagementException_initWithJavaLangThrowable_(JavaSecurityKeyManagementException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityKeyManagementException *new_JavaSecurityKeyManagementException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyManagementException)

#endif // _JavaSecurityKeyManagementException_H_
