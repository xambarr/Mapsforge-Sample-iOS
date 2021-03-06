//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/cache/FileSystemTileCache.java
//

#ifndef _OrgMapsforgeMapLayerCacheFileSystemTileCache_H_
#define _OrgMapsforgeMapLayerCacheFileSystemTileCache_H_

#include "J2ObjC_header.h"
#include "java/lang/Runnable.h"
#include "org/mapsforge/map/layer/cache/TileCache.h"
#include "org/mapsforge/map/util/PausableThread.h"

@class JavaIoFile;
@class OrgMapsforgeMapLayerQueueJob;
@protocol JavaUtilSet;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeCoreGraphicsTileBitmap;

@interface OrgMapsforgeMapLayerCacheStorageJob : NSObject {
 @public
  OrgMapsforgeMapLayerQueueJob *key_;
  id<OrgMapsforgeCoreGraphicsTileBitmap> bitmap_;
}

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key
              withOrgMapsforgeCoreGraphicsTileBitmap:(id<OrgMapsforgeCoreGraphicsTileBitmap>)bitmap;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerCacheStorageJob)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerCacheStorageJob, key_, OrgMapsforgeMapLayerQueueJob *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerCacheStorageJob, bitmap_, id<OrgMapsforgeCoreGraphicsTileBitmap>)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerCacheStorageJob_initWithOrgMapsforgeMapLayerQueueJob_withOrgMapsforgeCoreGraphicsTileBitmap_(OrgMapsforgeMapLayerCacheStorageJob *self, OrgMapsforgeMapLayerQueueJob *key, id<OrgMapsforgeCoreGraphicsTileBitmap> bitmap);

FOUNDATION_EXPORT OrgMapsforgeMapLayerCacheStorageJob *new_OrgMapsforgeMapLayerCacheStorageJob_initWithOrgMapsforgeMapLayerQueueJob_withOrgMapsforgeCoreGraphicsTileBitmap_(OrgMapsforgeMapLayerQueueJob *key, id<OrgMapsforgeCoreGraphicsTileBitmap> bitmap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerCacheStorageJob)

@interface OrgMapsforgeMapLayerCacheFileSystemTileCache : OrgMapsforgeMapUtilPausableThread < OrgMapsforgeMapLayerCacheTileCache >

#pragma mark Public

- (instancetype)initWithInt:(jint)capacity
             withJavaIoFile:(JavaIoFile *)cacheDirectory
withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory;

- (instancetype)initWithInt:(jint)capacity
             withJavaIoFile:(JavaIoFile *)cacheDirectory
withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                withBoolean:(jboolean)threaded
                    withInt:(jint)queueSize;

- (instancetype)initWithInt:(jint)capacity
             withJavaIoFile:(JavaIoFile *)cacheDirectory
withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                withBoolean:(jboolean)threaded
                    withInt:(jint)queueSize
                withBoolean:(jboolean)persistent;

- (jboolean)containsKeyWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key;

- (void)destroy;

- (id<OrgMapsforgeCoreGraphicsTileBitmap>)getWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key;

- (jint)getCapacity;

- (jint)getCapacityFirstLevel;

- (id<OrgMapsforgeCoreGraphicsTileBitmap>)getImmediatelyWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key;

- (jint)getQueueLength;

- (jboolean)isPersistent;

- (void)purge;

- (void)putWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)key
     withOrgMapsforgeCoreGraphicsTileBitmap:(id<OrgMapsforgeCoreGraphicsTileBitmap>)bitmap;

- (void)setWorkingSetWithJavaUtilSet:(id<JavaUtilSet>)workingSet;

#pragma mark Protected

- (void)doWork;

- (OrgMapsforgeMapUtilPausableThread_ThreadPriorityEnum *)getThreadPriority;

- (jboolean)hasWork;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapLayerCacheFileSystemTileCache)

FOUNDATION_EXPORT NSString *OrgMapsforgeMapLayerCacheFileSystemTileCache_FILE_EXTENSION_;
J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapLayerCacheFileSystemTileCache, FILE_EXTENSION_, NSString *)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerCacheFileSystemTileCache_initWithInt_withJavaIoFile_withOrgMapsforgeCoreGraphicsGraphicFactory_(OrgMapsforgeMapLayerCacheFileSystemTileCache *self, jint capacity, JavaIoFile *cacheDirectory, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory);

FOUNDATION_EXPORT OrgMapsforgeMapLayerCacheFileSystemTileCache *new_OrgMapsforgeMapLayerCacheFileSystemTileCache_initWithInt_withJavaIoFile_withOrgMapsforgeCoreGraphicsGraphicFactory_(jint capacity, JavaIoFile *cacheDirectory, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMapsforgeMapLayerCacheFileSystemTileCache_initWithInt_withJavaIoFile_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_withInt_(OrgMapsforgeMapLayerCacheFileSystemTileCache *self, jint capacity, JavaIoFile *cacheDirectory, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean threaded, jint queueSize);

FOUNDATION_EXPORT OrgMapsforgeMapLayerCacheFileSystemTileCache *new_OrgMapsforgeMapLayerCacheFileSystemTileCache_initWithInt_withJavaIoFile_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_withInt_(jint capacity, JavaIoFile *cacheDirectory, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean threaded, jint queueSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMapsforgeMapLayerCacheFileSystemTileCache_initWithInt_withJavaIoFile_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_withInt_withBoolean_(OrgMapsforgeMapLayerCacheFileSystemTileCache *self, jint capacity, JavaIoFile *cacheDirectory, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean threaded, jint queueSize, jboolean persistent);

FOUNDATION_EXPORT OrgMapsforgeMapLayerCacheFileSystemTileCache *new_OrgMapsforgeMapLayerCacheFileSystemTileCache_initWithInt_withJavaIoFile_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_withInt_withBoolean_(jint capacity, JavaIoFile *cacheDirectory, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean threaded, jint queueSize, jboolean persistent) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerCacheFileSystemTileCache)

@interface OrgMapsforgeMapLayerCacheFileSystemTileCache_CacheDirectoryReader : NSObject < JavaLangRunnable >

#pragma mark Public

- (void)run;

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapLayerCacheFileSystemTileCache:(OrgMapsforgeMapLayerCacheFileSystemTileCache *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerCacheFileSystemTileCache_CacheDirectoryReader)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerCacheFileSystemTileCache_CacheDirectoryReader_initWithOrgMapsforgeMapLayerCacheFileSystemTileCache_(OrgMapsforgeMapLayerCacheFileSystemTileCache_CacheDirectoryReader *self, OrgMapsforgeMapLayerCacheFileSystemTileCache *outer$);

FOUNDATION_EXPORT OrgMapsforgeMapLayerCacheFileSystemTileCache_CacheDirectoryReader *new_OrgMapsforgeMapLayerCacheFileSystemTileCache_CacheDirectoryReader_initWithOrgMapsforgeMapLayerCacheFileSystemTileCache_(OrgMapsforgeMapLayerCacheFileSystemTileCache *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerCacheFileSystemTileCache_CacheDirectoryReader)

#endif // _OrgMapsforgeMapLayerCacheFileSystemTileCache_H_
