//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/invocation/ArgumentsProcessor.java
//

#ifndef _OrgMockitoInternalInvocationArgumentsProcessor_H_
#define _OrgMockitoInternalInvocationArgumentsProcessor_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@protocol JavaUtilList;

@interface OrgMockitoInternalInvocationArgumentsProcessor : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<JavaUtilList>)argumentsToMatchersWithNSObjectArray:(IOSObjectArray *)arguments;

+ (IOSObjectArray *)expandVarArgsWithBoolean:(jboolean)isVarArgs
                           withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationArgumentsProcessor)

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoInternalInvocationArgumentsProcessor_expandVarArgsWithBoolean_withNSObjectArray_(jboolean isVarArgs, IOSObjectArray *args);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationArgumentsProcessor_argumentsToMatchersWithNSObjectArray_(IOSObjectArray *arguments);

FOUNDATION_EXPORT void OrgMockitoInternalInvocationArgumentsProcessor_init(OrgMockitoInternalInvocationArgumentsProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationArgumentsProcessor *new_OrgMockitoInternalInvocationArgumentsProcessor_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationArgumentsProcessor)

#endif // _OrgMockitoInternalInvocationArgumentsProcessor_H_
