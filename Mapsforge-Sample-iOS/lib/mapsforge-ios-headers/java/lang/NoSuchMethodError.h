//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NoSuchMethodError.java
//

#ifndef _JavaLangNoSuchMethodError_H_
#define _JavaLangNoSuchMethodError_H_

#include "J2ObjC_header.h"
#include "java/lang/IncompatibleClassChangeError.h"

@interface JavaLangNoSuchMethodError : JavaLangIncompatibleClassChangeError

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchMethodError)

FOUNDATION_EXPORT void JavaLangNoSuchMethodError_init(JavaLangNoSuchMethodError *self);

FOUNDATION_EXPORT JavaLangNoSuchMethodError *new_JavaLangNoSuchMethodError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangNoSuchMethodError_initWithNSString_(JavaLangNoSuchMethodError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNoSuchMethodError *new_JavaLangNoSuchMethodError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchMethodError)

#endif // _JavaLangNoSuchMethodError_H_
