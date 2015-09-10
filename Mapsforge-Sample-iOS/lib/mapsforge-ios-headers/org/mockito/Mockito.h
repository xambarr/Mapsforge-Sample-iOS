//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/Mockito.java
//

#ifndef _OrgMockitoMockito_H_
#define _OrgMockitoMockito_H_

#include "J2ObjC_header.h"
#include "org/mockito/Matchers.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangThrowable;
@class OrgMockitoInternalMockitoCore;
@protocol OrgMockitoInOrder;
@protocol OrgMockitoMockSettings;
@protocol OrgMockitoMockingDetails;
@protocol OrgMockitoMockitoDebugger;
@protocol OrgMockitoReturnValues;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing;
@protocol OrgMockitoStubbingOngoingStubbing;
@protocol OrgMockitoStubbingStubber;
@protocol OrgMockitoStubbingVoidMethodStubbable;
@protocol OrgMockitoVerificationVerificationMode;
@protocol OrgMockitoVerificationVerificationWithTimeout;

@interface OrgMockitoMockito : OrgMockitoMatchers

#pragma mark Public

- (instancetype)init;

+ (id<OrgMockitoVerificationVerificationMode>)atLeastWithInt:(jint)minNumberOfInvocations;

+ (id<OrgMockitoVerificationVerificationMode>)atLeastOnce;

+ (id<OrgMockitoVerificationVerificationMode>)atMostWithInt:(jint)maxNumberOfInvocations;

+ (id<OrgMockitoVerificationVerificationMode>)callsWithInt:(jint)wantedNumberOfInvocations;

+ (id<OrgMockitoStubbingStubber>)doAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

+ (id<OrgMockitoStubbingStubber>)doCallRealMethod;

+ (id<OrgMockitoStubbingStubber>)doNothing;

+ (id<OrgMockitoStubbingStubber>)doReturnWithId:(id)toBeReturned;

+ (id<OrgMockitoStubbingStubber>)doThrowWithIOSClass:(IOSClass *)toBeThrown;

+ (id<OrgMockitoStubbingStubber>)doThrowWithJavaLangThrowable:(JavaLangThrowable *)toBeThrown;

+ (IOSObjectArray *)ignoreStubsWithNSObjectArray:(IOSObjectArray *)mocks;

+ (id<OrgMockitoInOrder>)inOrderWithNSObjectArray:(IOSObjectArray *)mocks;

+ (id)mockWithIOSClass:(IOSClass *)classToMock;

+ (id)mockWithIOSClass:(IOSClass *)classToMock
withOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)defaultAnswer;

+ (id)mockWithIOSClass:(IOSClass *)classToMock
withOrgMockitoMockSettings:(id<OrgMockitoMockSettings>)mockSettings;

+ (id)mockWithIOSClass:(IOSClass *)classToMock
withOrgMockitoReturnValues:(id<OrgMockitoReturnValues>)returnValues;

+ (id)mockWithIOSClass:(IOSClass *)classToMock
          withNSString:(NSString *)name;

+ (id<OrgMockitoMockingDetails>)mockingDetailsWithId:(id)toInspect;

+ (id<OrgMockitoVerificationVerificationMode>)never;

+ (id<OrgMockitoVerificationVerificationMode>)only;

+ (void)resetWithNSObjectArray:(IOSObjectArray *)mocks;

+ (id)spyWithId:(id)object;

+ (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)stubWithId:(id)methodCall;

+ (id<OrgMockitoStubbingVoidMethodStubbable>)stubVoidWithId:(id)mock;

+ (id<OrgMockitoVerificationVerificationWithTimeout>)timeoutWithInt:(jint)millis;

+ (id<OrgMockitoVerificationVerificationMode>)timesWithInt:(jint)wantedNumberOfInvocations;

+ (void)validateMockitoUsage;

+ (id)verifyWithId:(id)mock;

+ (id)verifyWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

+ (void)verifyNoMoreInteractionsWithNSObjectArray:(IOSObjectArray *)mocks;

+ (void)verifyZeroInteractionsWithNSObjectArray:(IOSObjectArray *)mocks;

+ (id<OrgMockitoStubbingOngoingStubbing>)whenWithId:(id)methodCall;

+ (id<OrgMockitoMockSettings>)withSettings;

#pragma mark Package-Private

+ (id<OrgMockitoMockitoDebugger>)debug;

@end

J2OBJC_STATIC_INIT(OrgMockitoMockito)

FOUNDATION_EXPORT OrgMockitoInternalMockitoCore *OrgMockitoMockito_MOCKITO_CORE_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoMockito, MOCKITO_CORE_, OrgMockitoInternalMockitoCore *)

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoMockito_RETURNS_DEFAULTS_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoMockito, RETURNS_DEFAULTS_, id<OrgMockitoStubbingAnswer>)

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoMockito_RETURNS_SMART_NULLS_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoMockito, RETURNS_SMART_NULLS_, id<OrgMockitoStubbingAnswer>)

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoMockito_RETURNS_MOCKS_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoMockito, RETURNS_MOCKS_, id<OrgMockitoStubbingAnswer>)

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoMockito_RETURNS_DEEP_STUBS_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoMockito, RETURNS_DEEP_STUBS_, id<OrgMockitoStubbingAnswer>)

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoMockito_CALLS_REAL_METHODS_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoMockito, CALLS_REAL_METHODS_, id<OrgMockitoStubbingAnswer>)

FOUNDATION_EXPORT id OrgMockitoMockito_mockWithIOSClass_(IOSClass *classToMock);

FOUNDATION_EXPORT id OrgMockitoMockito_mockWithIOSClass_withNSString_(IOSClass *classToMock, NSString *name);

FOUNDATION_EXPORT id<OrgMockitoMockingDetails> OrgMockitoMockito_mockingDetailsWithId_(id toInspect);

FOUNDATION_EXPORT id OrgMockitoMockito_mockWithIOSClass_withOrgMockitoReturnValues_(IOSClass *classToMock, id<OrgMockitoReturnValues> returnValues);

FOUNDATION_EXPORT id OrgMockitoMockito_mockWithIOSClass_withOrgMockitoStubbingAnswer_(IOSClass *classToMock, id<OrgMockitoStubbingAnswer> defaultAnswer);

FOUNDATION_EXPORT id OrgMockitoMockito_mockWithIOSClass_withOrgMockitoMockSettings_(IOSClass *classToMock, id<OrgMockitoMockSettings> mockSettings);

FOUNDATION_EXPORT id OrgMockitoMockito_spyWithId_(id object);

FOUNDATION_EXPORT id<OrgMockitoStubbingDeprecatedOngoingStubbing> OrgMockitoMockito_stubWithId_(id methodCall);

FOUNDATION_EXPORT id<OrgMockitoStubbingOngoingStubbing> OrgMockitoMockito_whenWithId_(id methodCall);

FOUNDATION_EXPORT id OrgMockitoMockito_verifyWithId_(id mock);

FOUNDATION_EXPORT id OrgMockitoMockito_verifyWithId_withOrgMockitoVerificationVerificationMode_(id mock, id<OrgMockitoVerificationVerificationMode> mode);

FOUNDATION_EXPORT void OrgMockitoMockito_resetWithNSObjectArray_(IOSObjectArray *mocks);

FOUNDATION_EXPORT void OrgMockitoMockito_verifyNoMoreInteractionsWithNSObjectArray_(IOSObjectArray *mocks);

FOUNDATION_EXPORT void OrgMockitoMockito_verifyZeroInteractionsWithNSObjectArray_(IOSObjectArray *mocks);

FOUNDATION_EXPORT id<OrgMockitoStubbingVoidMethodStubbable> OrgMockitoMockito_stubVoidWithId_(id mock);

FOUNDATION_EXPORT id<OrgMockitoStubbingStubber> OrgMockitoMockito_doThrowWithJavaLangThrowable_(JavaLangThrowable *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoStubbingStubber> OrgMockitoMockito_doThrowWithIOSClass_(IOSClass *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoStubbingStubber> OrgMockitoMockito_doCallRealMethod();

FOUNDATION_EXPORT id<OrgMockitoStubbingStubber> OrgMockitoMockito_doAnswerWithOrgMockitoStubbingAnswer_(id<OrgMockitoStubbingAnswer> answer);

FOUNDATION_EXPORT id<OrgMockitoStubbingStubber> OrgMockitoMockito_doNothing();

FOUNDATION_EXPORT id<OrgMockitoStubbingStubber> OrgMockitoMockito_doReturnWithId_(id toBeReturned);

FOUNDATION_EXPORT id<OrgMockitoInOrder> OrgMockitoMockito_inOrderWithNSObjectArray_(IOSObjectArray *mocks);

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoMockito_ignoreStubsWithNSObjectArray_(IOSObjectArray *mocks);

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoMockito_timesWithInt_(jint wantedNumberOfInvocations);

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoMockito_never();

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoMockito_atLeastOnce();

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoMockito_atLeastWithInt_(jint minNumberOfInvocations);

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoMockito_atMostWithInt_(jint maxNumberOfInvocations);

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoMockito_callsWithInt_(jint wantedNumberOfInvocations);

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoMockito_only();

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationWithTimeout> OrgMockitoMockito_timeoutWithInt_(jint millis);

FOUNDATION_EXPORT void OrgMockitoMockito_validateMockitoUsage();

FOUNDATION_EXPORT id<OrgMockitoMockSettings> OrgMockitoMockito_withSettings();

FOUNDATION_EXPORT id<OrgMockitoMockitoDebugger> OrgMockitoMockito_debug();

FOUNDATION_EXPORT void OrgMockitoMockito_init(OrgMockitoMockito *self);

FOUNDATION_EXPORT OrgMockitoMockito *new_OrgMockitoMockito_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMockito)

#endif // _OrgMockitoMockito_H_
