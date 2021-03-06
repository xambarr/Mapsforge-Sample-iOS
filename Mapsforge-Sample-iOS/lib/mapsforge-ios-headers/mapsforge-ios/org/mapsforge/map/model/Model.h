//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/model/Model.java
//

#ifndef _OrgMapsforgeMapModelModel_H_
#define _OrgMapsforgeMapModelModel_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/model/common/Persistable.h"

@class OrgMapsforgeMapModelDisplayModel;
@class OrgMapsforgeMapModelFrameBufferModel;
@class OrgMapsforgeMapModelMapViewDimension;
@class OrgMapsforgeMapModelMapViewPosition;
@protocol OrgMapsforgeMapModelCommonPreferencesFacade;

@interface OrgMapsforgeMapModelModel : NSObject < OrgMapsforgeMapModelCommonPersistable > {
 @public
  OrgMapsforgeMapModelDisplayModel *displayModel_;
  OrgMapsforgeMapModelFrameBufferModel *frameBufferModel_;
  OrgMapsforgeMapModelMapViewDimension *mapViewDimension_;
  OrgMapsforgeMapModelMapViewPosition *mapViewPosition_;
}

#pragma mark Public

- (instancetype)init;

- (void)init__WithOrgMapsforgeMapModelCommonPreferencesFacade:(id<OrgMapsforgeMapModelCommonPreferencesFacade>)preferencesFacade OBJC_METHOD_FAMILY_NONE;

- (void)saveWithOrgMapsforgeMapModelCommonPreferencesFacade:(id<OrgMapsforgeMapModelCommonPreferencesFacade>)preferencesFacade;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapModelModel)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapModelModel, displayModel_, OrgMapsforgeMapModelDisplayModel *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapModelModel, frameBufferModel_, OrgMapsforgeMapModelFrameBufferModel *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapModelModel, mapViewDimension_, OrgMapsforgeMapModelMapViewDimension *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapModelModel, mapViewPosition_, OrgMapsforgeMapModelMapViewPosition *)

FOUNDATION_EXPORT void OrgMapsforgeMapModelModel_init(OrgMapsforgeMapModelModel *self);

FOUNDATION_EXPORT OrgMapsforgeMapModelModel *new_OrgMapsforgeMapModelModel_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapModelModel)

#endif // _OrgMapsforgeMapModelModel_H_
