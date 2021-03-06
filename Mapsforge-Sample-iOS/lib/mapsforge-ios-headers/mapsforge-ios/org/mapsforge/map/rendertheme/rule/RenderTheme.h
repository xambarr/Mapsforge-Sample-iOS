//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/RenderTheme.java
//

#ifndef _OrgMapsforgeMapRenderthemeRuleRenderTheme_H_
#define _OrgMapsforgeMapRenderthemeRuleRenderTheme_H_

#include "J2ObjC_header.h"

@class OrgMapsforgeCoreModelTile;
@class OrgMapsforgeMapLayerRendererPolylineContainer;
@class OrgMapsforgeMapReaderPointOfInterest;
@class OrgMapsforgeMapRenderthemeRuleRenderThemeBuilder;
@class OrgMapsforgeMapRenderthemeRuleRule;
@protocol OrgMapsforgeMapRenderthemeRenderCallback;

@interface OrgMapsforgeMapRenderthemeRuleRenderTheme : NSObject

#pragma mark Public

- (void)destroy;

- (jint)getLevels;

- (jint)getMapBackground;

- (jint)getMapBackgroundOutside;

- (jboolean)hasMapBackgroundOutside;

- (void)incrementRefCount;

- (void)matchClosedWayWithOrgMapsforgeMapRenderthemeRenderCallback:(id<OrgMapsforgeMapRenderthemeRenderCallback>)renderCallback
                 withOrgMapsforgeMapLayerRendererPolylineContainer:(OrgMapsforgeMapLayerRendererPolylineContainer *)way;

- (void)matchLinearWayWithOrgMapsforgeMapRenderthemeRenderCallback:(id<OrgMapsforgeMapRenderthemeRenderCallback>)renderCallback
                 withOrgMapsforgeMapLayerRendererPolylineContainer:(OrgMapsforgeMapLayerRendererPolylineContainer *)way;

- (void)matchNodeWithOrgMapsforgeMapRenderthemeRenderCallback:(id<OrgMapsforgeMapRenderthemeRenderCallback>)renderCallback
                     withOrgMapsforgeMapReaderPointOfInterest:(OrgMapsforgeMapReaderPointOfInterest *)poi
                                withOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (void)scaleStrokeWidthWithFloat:(jfloat)scaleFactor;

- (void)scaleTextSizeWithFloat:(jfloat)scaleFactor;

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapRenderthemeRuleRenderThemeBuilder:(OrgMapsforgeMapRenderthemeRuleRenderThemeBuilder *)renderThemeBuilder;

- (void)addRuleWithOrgMapsforgeMapRenderthemeRuleRule:(OrgMapsforgeMapRenderthemeRuleRule *)rule;

- (void)complete;

- (void)setLevelsWithInt:(jint)levels;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleRenderTheme)

FOUNDATION_EXPORT void OrgMapsforgeMapRenderthemeRuleRenderTheme_initWithOrgMapsforgeMapRenderthemeRuleRenderThemeBuilder_(OrgMapsforgeMapRenderthemeRuleRenderTheme *self, OrgMapsforgeMapRenderthemeRuleRenderThemeBuilder *renderThemeBuilder);

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleRenderTheme *new_OrgMapsforgeMapRenderthemeRuleRenderTheme_initWithOrgMapsforgeMapRenderthemeRuleRenderThemeBuilder_(OrgMapsforgeMapRenderthemeRuleRenderThemeBuilder *renderThemeBuilder) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleRenderTheme)

#endif // _OrgMapsforgeMapRenderthemeRuleRenderTheme_H_
