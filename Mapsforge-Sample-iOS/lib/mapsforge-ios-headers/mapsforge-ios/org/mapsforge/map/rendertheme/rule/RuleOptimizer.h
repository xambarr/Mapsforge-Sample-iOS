//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/RuleOptimizer.java
//

#ifndef _OrgMapsforgeMapRenderthemeRuleRuleOptimizer_H_
#define _OrgMapsforgeMapRenderthemeRuleRuleOptimizer_H_

#include "J2ObjC_header.h"

@class JavaUtilStack;
@protocol OrgMapsforgeMapRenderthemeRuleAttributeMatcher;
@protocol OrgMapsforgeMapRenderthemeRuleClosedMatcher;
@protocol OrgMapsforgeMapRenderthemeRuleElementMatcher;

@interface OrgMapsforgeMapRenderthemeRuleRuleOptimizer : NSObject

#pragma mark Package-Private

+ (id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher>)optimizeWithOrgMapsforgeMapRenderthemeRuleAttributeMatcher:(id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher>)attributeMatcher
                                                                                               withJavaUtilStack:(JavaUtilStack *)ruleStack;

+ (id<OrgMapsforgeMapRenderthemeRuleClosedMatcher>)optimizeWithOrgMapsforgeMapRenderthemeRuleClosedMatcher:(id<OrgMapsforgeMapRenderthemeRuleClosedMatcher>)closedMatcher
                                                                                         withJavaUtilStack:(JavaUtilStack *)ruleStack;

+ (id<OrgMapsforgeMapRenderthemeRuleElementMatcher>)optimizeWithOrgMapsforgeMapRenderthemeRuleElementMatcher:(id<OrgMapsforgeMapRenderthemeRuleElementMatcher>)elementMatcher
                                                                                           withJavaUtilStack:(JavaUtilStack *)ruleStack;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleRuleOptimizer)

FOUNDATION_EXPORT id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher> OrgMapsforgeMapRenderthemeRuleRuleOptimizer_optimizeWithOrgMapsforgeMapRenderthemeRuleAttributeMatcher_withJavaUtilStack_(id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher> attributeMatcher, JavaUtilStack *ruleStack);

FOUNDATION_EXPORT id<OrgMapsforgeMapRenderthemeRuleClosedMatcher> OrgMapsforgeMapRenderthemeRuleRuleOptimizer_optimizeWithOrgMapsforgeMapRenderthemeRuleClosedMatcher_withJavaUtilStack_(id<OrgMapsforgeMapRenderthemeRuleClosedMatcher> closedMatcher, JavaUtilStack *ruleStack);

FOUNDATION_EXPORT id<OrgMapsforgeMapRenderthemeRuleElementMatcher> OrgMapsforgeMapRenderthemeRuleRuleOptimizer_optimizeWithOrgMapsforgeMapRenderthemeRuleElementMatcher_withJavaUtilStack_(id<OrgMapsforgeMapRenderthemeRuleElementMatcher> elementMatcher, JavaUtilStack *ruleStack);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleRuleOptimizer)

#endif // _OrgMapsforgeMapRenderthemeRuleRuleOptimizer_H_
