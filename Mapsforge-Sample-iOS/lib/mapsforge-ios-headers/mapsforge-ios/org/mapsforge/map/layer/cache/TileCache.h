//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/cache/TileCache.java
//

#ifndef _OrgMapsforgeMapLayerCacheTileCache_H_
#define _OrgMapsforgeMapLayerCacheTileCache_H_

#include "J2ObjC_header.h"

@class OrgMapsforgeMapLayerQueueJob;
@protocol JavaUtilSet;
@protocol OrgMapsforgeCoreGraphicsTileBitmap;

@protocol OrgMapsforgeMapLayerCacheTileCache < NSObject, JavaObject >

- (jboolean)containsKeyWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key;

- (void)destroy;

- (id<OrgMapsforgeCoreGraphicsTileBitmap>)getWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key;

- (jint)getCapacity;

- (jint)getCapacityFirstLevel;

- (id<OrgMapsforgeCoreGraphicsTileBitmap>)getImmediatelyWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key;

- (void)purge;

- (void)putWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key
     withOrgMapsforgeCoreGraphicsTileBitmap:(id<OrgMapsforgeCoreGraphicsTileBitmap>)bitmap;

- (void)setWorkingSetWithJavaUtilSet:(id<JavaUtilSet>)workingSet;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerCacheTileCache)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerCacheTileCache)

#endif // _OrgMapsforgeMapLayerCacheTileCache_H_
