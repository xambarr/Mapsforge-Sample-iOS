//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StackOverflowError.java
//

#ifndef _JavaLangStackOverflowError_H_
#define _JavaLangStackOverflowError_H_

#include "J2ObjC_header.h"
#include "java/lang/VirtualMachineError.h"

@interface JavaLangStackOverflowError : JavaLangVirtualMachineError

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStackOverflowError)

FOUNDATION_EXPORT void JavaLangStackOverflowError_init(JavaLangStackOverflowError *self);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangStackOverflowError_initWithNSString_(JavaLangStackOverflowError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStackOverflowError)

#endif // _JavaLangStackOverflowError_H_
