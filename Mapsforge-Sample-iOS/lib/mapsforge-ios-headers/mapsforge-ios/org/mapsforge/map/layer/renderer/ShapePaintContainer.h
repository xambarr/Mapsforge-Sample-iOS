//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/renderer/ShapePaintContainer.java
//

#ifndef _OrgMapsforgeMapLayerRendererShapePaintContainer_H_
#define _OrgMapsforgeMapLayerRendererShapePaintContainer_H_

#include "J2ObjC_header.h"

@protocol OrgMapsforgeCoreGraphicsPaint;
@protocol OrgMapsforgeMapLayerRendererShapeContainer;

@interface OrgMapsforgeMapLayerRendererShapePaintContainer : NSObject {
 @public
  jfloat dy_;
  id<OrgMapsforgeCoreGraphicsPaint> paint_;
  id<OrgMapsforgeMapLayerRendererShapeContainer> shapeContainer_;
}

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapLayerRendererShapeContainer:(id<OrgMapsforgeMapLayerRendererShapeContainer>)shapeContainer
                                 withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paint;

- (instancetype)initWithOrgMapsforgeMapLayerRendererShapeContainer:(id<OrgMapsforgeMapLayerRendererShapeContainer>)shapeContainer
                                 withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paint
                                                         withFloat:(jfloat)dy;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerRendererShapePaintContainer)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerRendererShapePaintContainer, paint_, id<OrgMapsforgeCoreGraphicsPaint>)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerRendererShapePaintContainer, shapeContainer_, id<OrgMapsforgeMapLayerRendererShapeContainer>)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerRendererShapePaintContainer_initWithOrgMapsforgeMapLayerRendererShapeContainer_withOrgMapsforgeCoreGraphicsPaint_(OrgMapsforgeMapLayerRendererShapePaintContainer *self, id<OrgMapsforgeMapLayerRendererShapeContainer> shapeContainer, id<OrgMapsforgeCoreGraphicsPaint> paint);

FOUNDATION_EXPORT OrgMapsforgeMapLayerRendererShapePaintContainer *new_OrgMapsforgeMapLayerRendererShapePaintContainer_initWithOrgMapsforgeMapLayerRendererShapeContainer_withOrgMapsforgeCoreGraphicsPaint_(id<OrgMapsforgeMapLayerRendererShapeContainer> shapeContainer, id<OrgMapsforgeCoreGraphicsPaint> paint) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMapsforgeMapLayerRendererShapePaintContainer_initWithOrgMapsforgeMapLayerRendererShapeContainer_withOrgMapsforgeCoreGraphicsPaint_withFloat_(OrgMapsforgeMapLayerRendererShapePaintContainer *self, id<OrgMapsforgeMapLayerRendererShapeContainer> shapeContainer, id<OrgMapsforgeCoreGraphicsPaint> paint, jfloat dy);

FOUNDATION_EXPORT OrgMapsforgeMapLayerRendererShapePaintContainer *new_OrgMapsforgeMapLayerRendererShapePaintContainer_initWithOrgMapsforgeMapLayerRendererShapeContainer_withOrgMapsforgeCoreGraphicsPaint_withFloat_(id<OrgMapsforgeMapLayerRendererShapeContainer> shapeContainer, id<OrgMapsforgeCoreGraphicsPaint> paint, jfloat dy) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerRendererShapePaintContainer)

#endif // _OrgMapsforgeMapLayerRendererShapePaintContainer_H_
