//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/download/tilesource/TileSource.java
//

#ifndef _OrgMapsforgeMapLayerDownloadTilesourceTileSource_H_
#define _OrgMapsforgeMapLayerDownloadTilesourceTileSource_H_

#include "J2ObjC_header.h"

@class JavaNetURL;
@class OrgMapsforgeCoreModelTile;

@protocol OrgMapsforgeMapLayerDownloadTilesourceTileSource < NSObject, JavaObject >

- (jlong)getDefaultTimeToLive;

- (jint)getParallelRequestsLimit;

- (JavaNetURL *)getTileUrlWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (jbyte)getZoomLevelMax;

- (jbyte)getZoomLevelMin;

- (jboolean)hasAlpha;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerDownloadTilesourceTileSource)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerDownloadTilesourceTileSource)

#endif // _OrgMapsforgeMapLayerDownloadTilesourceTileSource_H_
