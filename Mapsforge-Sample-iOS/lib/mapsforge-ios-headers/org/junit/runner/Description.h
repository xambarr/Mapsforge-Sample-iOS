//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/junit/build_result/java/org/junit/runner/Description.java
//

#ifndef _OrgJunitRunnerDescription_H_
#define _OrgJunitRunnerDescription_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaUtilArrayList;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaUtilCollection;

@interface OrgJunitRunnerDescription : NSObject < JavaIoSerializable >

#pragma mark Public

- (void)addChildWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (OrgJunitRunnerDescription *)childlessCopy;

+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithIOSClass:(IOSClass *)testClass;

+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithNSString:(NSString *)name
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name;

+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name
                           withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

- (jboolean)isEqual:(id)obj;

- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (id<JavaUtilCollection>)getAnnotations;

- (JavaUtilArrayList *)getChildren;

- (NSString *)getClassName;

- (NSString *)getDisplayName;

- (NSString *)getMethodName;

- (IOSClass *)getTestClass;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (jboolean)isSuite;

- (jboolean)isTest;

- (jint)testCount;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnerDescription)

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_EMPTY_;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerDescription, EMPTY_, OrgJunitRunnerDescription *)

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_TEST_MECHANISM_;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerDescription, TEST_MECHANISM_, OrgJunitRunnerDescription *)

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithNSString_withJavaLangAnnotationAnnotationArray_(NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithIOSClass_withNSString_withJavaLangAnnotationAnnotationArray_(IOSClass *clazz, NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithIOSClass_withNSString_(IOSClass *clazz, NSString *name);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithIOSClass_(IOSClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerDescription)

#endif // _OrgJunitRunnerDescription_H_
