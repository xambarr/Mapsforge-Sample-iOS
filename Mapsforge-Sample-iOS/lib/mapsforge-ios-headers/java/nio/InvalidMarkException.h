//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/InvalidMarkException.java
//

#ifndef _JavaNioInvalidMarkException_H_
#define _JavaNioInvalidMarkException_H_

#include "J2ObjC_header.h"
#include "java/lang/IllegalStateException.h"

@interface JavaNioInvalidMarkException : JavaLangIllegalStateException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioInvalidMarkException)

FOUNDATION_EXPORT void JavaNioInvalidMarkException_init(JavaNioInvalidMarkException *self);

FOUNDATION_EXPORT JavaNioInvalidMarkException *new_JavaNioInvalidMarkException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNioInvalidMarkException_initWithNSString_(JavaNioInvalidMarkException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNioInvalidMarkException *new_JavaNioInvalidMarkException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioInvalidMarkException)

#endif // _JavaNioInvalidMarkException_H_
