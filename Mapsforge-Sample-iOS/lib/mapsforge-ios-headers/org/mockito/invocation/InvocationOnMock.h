//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/invocation/InvocationOnMock.java
//

#ifndef _OrgMockitoInvocationInvocationOnMock_H_
#define _OrgMockitoInvocationInvocationOnMock_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;

@protocol OrgMockitoInvocationInvocationOnMock < JavaIoSerializable, NSObject, JavaObject >

- (id)getMock;

- (JavaLangReflectMethod *)getMethod;

- (IOSObjectArray *)getArguments;

- (id)callRealMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationInvocationOnMock)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationInvocationOnMock)

#endif // _OrgMockitoInvocationInvocationOnMock_H_
