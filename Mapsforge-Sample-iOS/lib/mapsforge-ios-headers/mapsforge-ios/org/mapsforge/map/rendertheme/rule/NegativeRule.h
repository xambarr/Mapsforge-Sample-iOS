//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/NegativeRule.java
//

#ifndef _OrgMapsforgeMapRenderthemeRuleNegativeRule_H_
#define _OrgMapsforgeMapRenderthemeRuleNegativeRule_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/rendertheme/rule/Rule.h"

@class OrgMapsforgeMapRenderthemeRuleClosedEnum;
@class OrgMapsforgeMapRenderthemeRuleRuleBuilder;
@protocol JavaUtilList;
@protocol OrgMapsforgeMapRenderthemeRuleAttributeMatcher;

@interface OrgMapsforgeMapRenderthemeRuleNegativeRule : OrgMapsforgeMapRenderthemeRuleRule

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapRenderthemeRuleRuleBuilder:(OrgMapsforgeMapRenderthemeRuleRuleBuilder *)ruleBuilder
               withOrgMapsforgeMapRenderthemeRuleAttributeMatcher:(id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher>)attributeMatcher;

- (jboolean)matchesNodeWithJavaUtilList:(id<JavaUtilList>)tags
                               withByte:(jbyte)zoomLevel;

- (jboolean)matchesWayWithJavaUtilList:(id<JavaUtilList>)tags
                              withByte:(jbyte)zoomLevel
withOrgMapsforgeMapRenderthemeRuleClosedEnum:(OrgMapsforgeMapRenderthemeRuleClosedEnum *)closed;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleNegativeRule)

FOUNDATION_EXPORT void OrgMapsforgeMapRenderthemeRuleNegativeRule_initWithOrgMapsforgeMapRenderthemeRuleRuleBuilder_withOrgMapsforgeMapRenderthemeRuleAttributeMatcher_(OrgMapsforgeMapRenderthemeRuleNegativeRule *self, OrgMapsforgeMapRenderthemeRuleRuleBuilder *ruleBuilder, id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher> attributeMatcher);

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleNegativeRule *new_OrgMapsforgeMapRenderthemeRuleNegativeRule_initWithOrgMapsforgeMapRenderthemeRuleRuleBuilder_withOrgMapsforgeMapRenderthemeRuleAttributeMatcher_(OrgMapsforgeMapRenderthemeRuleRuleBuilder *ruleBuilder, id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher> attributeMatcher) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleNegativeRule)

#endif // _OrgMapsforgeMapRenderthemeRuleNegativeRule_H_
