//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/UnrecoverableEntryException.java
//

#ifndef _JavaSecurityUnrecoverableEntryException_H_
#define _JavaSecurityUnrecoverableEntryException_H_

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

@interface JavaSecurityUnrecoverableEntryException : JavaSecurityGeneralSecurityException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityUnrecoverableEntryException)

FOUNDATION_EXPORT void JavaSecurityUnrecoverableEntryException_init(JavaSecurityUnrecoverableEntryException *self);

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *new_JavaSecurityUnrecoverableEntryException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityUnrecoverableEntryException_initWithNSString_(JavaSecurityUnrecoverableEntryException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityUnrecoverableEntryException *new_JavaSecurityUnrecoverableEntryException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityUnrecoverableEntryException)

#endif // _JavaSecurityUnrecoverableEntryException_H_
