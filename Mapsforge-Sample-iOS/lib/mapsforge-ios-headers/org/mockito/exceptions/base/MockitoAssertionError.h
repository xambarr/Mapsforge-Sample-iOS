//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/exceptions/base/MockitoAssertionError.java
//

#ifndef _OrgMockitoExceptionsBaseMockitoAssertionError_H_
#define _OrgMockitoExceptionsBaseMockitoAssertionError_H_

#include "J2ObjC_header.h"
#include "java/lang/AssertionError.h"

@class IOSObjectArray;

@interface OrgMockitoExceptionsBaseMockitoAssertionError : JavaLangAssertionError

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (IOSObjectArray *)getUnfilteredStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsBaseMockitoAssertionError)

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(OrgMockitoExceptionsBaseMockitoAssertionError *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *new_OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsBaseMockitoAssertionError)

#endif // _OrgMockitoExceptionsBaseMockitoAssertionError_H_
