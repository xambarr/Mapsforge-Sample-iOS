//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/reader/MapFile.java
//

#ifndef _OrgMapsforgeMapReaderMapFile_H_
#define _OrgMapsforgeMapReaderMapFile_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/reader/MapDataStore.h"

@class JavaIoFile;
@class JavaLangByte;
@class OrgMapsforgeCoreModelBoundingBox;
@class OrgMapsforgeCoreModelLatLong;
@class OrgMapsforgeCoreModelTile;
@class OrgMapsforgeMapReaderHeaderMapFileInfo;
@class OrgMapsforgeMapReaderMapReadResult;

@interface OrgMapsforgeMapReaderMapFile : NSObject < OrgMapsforgeMapReaderMapDataStore >

#pragma mark Public

- (instancetype)initWithJavaIoFile:(JavaIoFile *)mapFile;

- (instancetype)initWithNSString:(NSString *)mapFileName;

- (OrgMapsforgeCoreModelBoundingBox *)boundingBox;

- (void)close;

- (jlong)getDataTimestampWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (OrgMapsforgeMapReaderHeaderMapFileInfo *)getMapFileInfo;

- (OrgMapsforgeMapReaderMapReadResult *)readMapDataWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (void)restrictToZoomRangeWithByte:(jbyte)minZoom
                           withByte:(jbyte)maxZoom;

- (OrgMapsforgeCoreModelLatLong *)startPosition;

- (JavaLangByte *)startZoomLevel;

- (jboolean)supportsTileWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapReaderMapFile)

FOUNDATION_EXPORT OrgMapsforgeMapReaderMapFile *OrgMapsforgeMapReaderMapFile_TEST_MAP_FILE_;
J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapReaderMapFile, TEST_MAP_FILE_, OrgMapsforgeMapReaderMapFile *)

FOUNDATION_EXPORT jboolean OrgMapsforgeMapReaderMapFile_wayFilterEnabled_;
J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapReaderMapFile, wayFilterEnabled_, jboolean)
J2OBJC_STATIC_FIELD_REF_GETTER(OrgMapsforgeMapReaderMapFile, wayFilterEnabled_, jboolean)

FOUNDATION_EXPORT jint OrgMapsforgeMapReaderMapFile_wayFilterDistance_;
J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapReaderMapFile, wayFilterDistance_, jint)
J2OBJC_STATIC_FIELD_REF_GETTER(OrgMapsforgeMapReaderMapFile, wayFilterDistance_, jint)

FOUNDATION_EXPORT void OrgMapsforgeMapReaderMapFile_initWithJavaIoFile_(OrgMapsforgeMapReaderMapFile *self, JavaIoFile *mapFile);

FOUNDATION_EXPORT OrgMapsforgeMapReaderMapFile *new_OrgMapsforgeMapReaderMapFile_initWithJavaIoFile_(JavaIoFile *mapFile) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMapsforgeMapReaderMapFile_initWithNSString_(OrgMapsforgeMapReaderMapFile *self, NSString *mapFileName);

FOUNDATION_EXPORT OrgMapsforgeMapReaderMapFile *new_OrgMapsforgeMapReaderMapFile_initWithNSString_(NSString *mapFileName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapReaderMapFile)

#endif // _OrgMapsforgeMapReaderMapFile_H_
