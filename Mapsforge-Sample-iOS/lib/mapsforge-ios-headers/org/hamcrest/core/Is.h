//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/junit/build_result/java/org/hamcrest/core/Is.java
//

#ifndef _OrgHamcrestCoreIs_H_
#define _OrgHamcrestCoreIs_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIs : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)isWithIOSClass:(IOSClass *)type;

+ (id<OrgHamcrestMatcher>)isWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)isWithId:(id)value;

- (jboolean)matchesWithId:(id)arg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIs)

FOUNDATION_EXPORT void OrgHamcrestCoreIs_initWithOrgHamcrestMatcher_(OrgHamcrestCoreIs *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreIs *new_OrgHamcrestCoreIs_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithId_(id value);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIs)

#endif // _OrgHamcrestCoreIs_H_
