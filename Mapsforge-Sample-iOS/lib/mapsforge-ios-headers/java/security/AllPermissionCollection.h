//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AllPermissionCollection.java
//

#ifndef _JavaSecurityAllPermissionCollection_H_
#define _JavaSecurityAllPermissionCollection_H_

#include "J2ObjC_header.h"
#include "java/security/PermissionCollection.h"

@class JavaSecurityPermission;
@protocol JavaUtilEnumeration;

@interface JavaSecurityAllPermissionCollection : JavaSecurityPermissionCollection

#pragma mark Public

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (id<JavaUtilEnumeration>)elements;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAllPermissionCollection)

FOUNDATION_EXPORT void JavaSecurityAllPermissionCollection_init(JavaSecurityAllPermissionCollection *self);

FOUNDATION_EXPORT JavaSecurityAllPermissionCollection *new_JavaSecurityAllPermissionCollection_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAllPermissionCollection)

#endif // _JavaSecurityAllPermissionCollection_H_
