//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/junit/build_result/java/junit/framework/JUnit4TestCaseFacade.java
//

#ifndef _JunitFrameworkJUnit4TestCaseFacade_H_
#define _JunitFrameworkJUnit4TestCaseFacade_H_

#include "J2ObjC_header.h"
#include "junit/framework/Test.h"
#include "org/junit/runner/Describable.h"

@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;

@interface JunitFrameworkJUnit4TestCaseFacade : NSObject < JunitFrameworkTest, OrgJunitRunnerDescribable >

#pragma mark Public

- (jint)countTestCases;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkJUnit4TestCaseFacade)

FOUNDATION_EXPORT void JunitFrameworkJUnit4TestCaseFacade_initWithOrgJunitRunnerDescription_(JunitFrameworkJUnit4TestCaseFacade *self, OrgJunitRunnerDescription *description_);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestCaseFacade *new_JunitFrameworkJUnit4TestCaseFacade_initWithOrgJunitRunnerDescription_(OrgJunitRunnerDescription *description_) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkJUnit4TestCaseFacade)

#endif // _JunitFrameworkJUnit4TestCaseFacade_H_
