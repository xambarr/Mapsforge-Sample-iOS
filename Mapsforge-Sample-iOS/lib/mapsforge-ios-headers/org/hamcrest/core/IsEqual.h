//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/junit/build_result/java/org/hamcrest/core/IsEqual.java
//

#ifndef _OrgHamcrestCoreIsEqual_H_
#define _OrgHamcrestCoreIsEqual_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIsEqual : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithId:(id)equalArg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)equalToWithId:(id)operand;

- (jboolean)matchesWithId:(id)arg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsEqual)

FOUNDATION_EXPORT void OrgHamcrestCoreIsEqual_initWithId_(OrgHamcrestCoreIsEqual *self, id equalArg);

FOUNDATION_EXPORT OrgHamcrestCoreIsEqual *new_OrgHamcrestCoreIsEqual_initWithId_(id equalArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsEqual_equalToWithId_(id operand);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsEqual)

#endif // _OrgHamcrestCoreIsEqual_H_
