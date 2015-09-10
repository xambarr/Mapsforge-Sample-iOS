//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/download/tilesource/AbstractTileSource.java
//

#ifndef _OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource_H_
#define _OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/layer/download/tilesource/TileSource.h"

@class IOSObjectArray;
@class JavaUtilRandom;

@interface OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource : NSObject < OrgMapsforgeMapLayerDownloadTilesourceTileSource > {
 @public
  jlong defaultTimeToLive_;
  IOSObjectArray *hostNames_;
  jint port_;
  JavaUtilRandom *random_;
}

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (jlong)getDefaultTimeToLive;

- (NSUInteger)hash;

#pragma mark Protected

- (instancetype)initWithNSStringArray:(IOSObjectArray *)hostNames
                              withInt:(jint)port;

- (NSString *)getHostName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource, hostNames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource, random_, JavaUtilRandom *)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource_initWithNSStringArray_withInt_(OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource *self, IOSObjectArray *hostNames, jint port);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource)

#endif // _OrgMapsforgeMapLayerDownloadTilesourceAbstractTileSource_H_
