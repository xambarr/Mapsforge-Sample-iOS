//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AccessControlException.java
//

#ifndef _JavaSecurityAccessControlException_H_
#define _JavaSecurityAccessControlException_H_

#include "J2ObjC_header.h"
#include "java/lang/SecurityException.h"

@class JavaSecurityPermission;

@interface JavaSecurityAccessControlException : JavaLangSecurityException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
      withJavaSecurityPermission:(JavaSecurityPermission *)perm;

- (JavaSecurityPermission *)getPermission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAccessControlException)

FOUNDATION_EXPORT void JavaSecurityAccessControlException_initWithNSString_(JavaSecurityAccessControlException *self, NSString *message);

FOUNDATION_EXPORT JavaSecurityAccessControlException *new_JavaSecurityAccessControlException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityAccessControlException_initWithNSString_withJavaSecurityPermission_(JavaSecurityAccessControlException *self, NSString *message, JavaSecurityPermission *perm);

FOUNDATION_EXPORT JavaSecurityAccessControlException *new_JavaSecurityAccessControlException_initWithNSString_withJavaSecurityPermission_(NSString *message, JavaSecurityPermission *perm) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAccessControlException)

#endif // _JavaSecurityAccessControlException_H_
