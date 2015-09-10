//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/matchers/apachecommons/EqualsBuilder.java
//

#ifndef _OrgMockitoInternalMatchersApachecommonsEqualsBuilder_H_
#define _OrgMockitoInternalMatchersApachecommonsEqualsBuilder_H_

#include "J2ObjC_header.h"

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSClass;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;

@interface OrgMockitoInternalMatchersApachecommonsEqualsBuilder : NSObject

#pragma mark Public

- (instancetype)init;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithBoolean:(jboolean)lhs
                                                                withBoolean:(jboolean)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithBooleanArray:(IOSBooleanArray *)lhs
                                                                withBooleanArray:(IOSBooleanArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithByte:(jbyte)lhs
                                                                withByte:(jbyte)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithByteArray:(IOSByteArray *)lhs
                                                                withByteArray:(IOSByteArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithChar:(jchar)lhs
                                                                withChar:(jchar)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithCharArray:(IOSCharArray *)lhs
                                                                withCharArray:(IOSCharArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithDouble:(jdouble)lhs
                                                                withDouble:(jdouble)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithDoubleArray:(IOSDoubleArray *)lhs
                                                                withDoubleArray:(IOSDoubleArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithFloat:(jfloat)lhs
                                                                withFloat:(jfloat)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithFloatArray:(IOSFloatArray *)lhs
                                                                withFloatArray:(IOSFloatArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithInt:(jint)lhs
                                                                withInt:(jint)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithIntArray:(IOSIntArray *)lhs
                                                                withIntArray:(IOSIntArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithLong:(jlong)lhs
                                                                withLong:(jlong)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithLongArray:(IOSLongArray *)lhs
                                                                withLongArray:(IOSLongArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithId:(id)lhs
                                                                withId:(id)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithNSObjectArray:(IOSObjectArray *)lhs
                                                                withNSObjectArray:(IOSObjectArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithShort:(jshort)lhs
                                                                withShort:(jshort)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithShortArray:(IOSShortArray *)lhs
                                                                withShortArray:(IOSShortArray *)rhs;

- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendSuperWithBoolean:(jboolean)superEquals;

- (jboolean)isEquals;

+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs;

+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                       withBoolean:(jboolean)testTransients;

+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                       withBoolean:(jboolean)testTransients
                      withIOSClass:(IOSClass *)reflectUpToClass;

+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                       withBoolean:(jboolean)testTransients
                      withIOSClass:(IOSClass *)reflectUpToClass
                 withNSStringArray:(IOSObjectArray *)excludeFields;

+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                 withNSStringArray:(IOSObjectArray *)excludeFields;

#pragma mark Protected

- (void)setEqualsWithBoolean:(jboolean)isEquals;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersApachecommonsEqualsBuilder)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersApachecommonsEqualsBuilder_init(OrgMockitoInternalMatchersApachecommonsEqualsBuilder *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersApachecommonsEqualsBuilder *new_OrgMockitoInternalMatchersApachecommonsEqualsBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_(id lhs, id rhs);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withNSStringArray_(id lhs, id rhs, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withBoolean_(id lhs, id rhs, jboolean testTransients);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withBoolean_withIOSClass_(id lhs, id rhs, jboolean testTransients, IOSClass *reflectUpToClass);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withBoolean_withIOSClass_withNSStringArray_(id lhs, id rhs, jboolean testTransients, IOSClass *reflectUpToClass, IOSObjectArray *excludeFields);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersApachecommonsEqualsBuilder)

#endif // _OrgMockitoInternalMatchersApachecommonsEqualsBuilder_H_
