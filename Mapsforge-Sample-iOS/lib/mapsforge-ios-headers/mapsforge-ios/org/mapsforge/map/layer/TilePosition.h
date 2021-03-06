//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/TilePosition.java
//

#ifndef _OrgMapsforgeMapLayerTilePosition_H_
#define _OrgMapsforgeMapLayerTilePosition_H_

#include "J2ObjC_header.h"

@class OrgMapsforgeCoreModelPoint;
@class OrgMapsforgeCoreModelTile;

@interface OrgMapsforgeMapLayerTilePosition : NSObject {
 @public
  OrgMapsforgeCoreModelPoint *point_;
  OrgMapsforgeCoreModelTile *tile_;
}

#pragma mark Public

- (instancetype)initWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile
                   withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)point;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerTilePosition)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerTilePosition, point_, OrgMapsforgeCoreModelPoint *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerTilePosition, tile_, OrgMapsforgeCoreModelTile *)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerTilePosition_initWithOrgMapsforgeCoreModelTile_withOrgMapsforgeCoreModelPoint_(OrgMapsforgeMapLayerTilePosition *self, OrgMapsforgeCoreModelTile *tile, OrgMapsforgeCoreModelPoint *point);

FOUNDATION_EXPORT OrgMapsforgeMapLayerTilePosition *new_OrgMapsforgeMapLayerTilePosition_initWithOrgMapsforgeCoreModelTile_withOrgMapsforgeCoreModelPoint_(OrgMapsforgeCoreModelTile *tile, OrgMapsforgeCoreModelPoint *point) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerTilePosition)

#endif // _OrgMapsforgeMapLayerTilePosition_H_
