//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/AnswerReturnValuesAdapter.java
//

#ifndef _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_
#define _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

@protocol OrgMockitoInvocationInvocationOnMock;
@protocol OrgMockitoReturnValues;

@interface OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithOrgMockitoReturnValues:(id<OrgMockitoReturnValues>)returnValues;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_initWithOrgMockitoReturnValues_(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter *self, id<OrgMockitoReturnValues> returnValues);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter *new_OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_initWithOrgMockitoReturnValues_(id<OrgMockitoReturnValues> returnValues) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter)

#endif // _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_
