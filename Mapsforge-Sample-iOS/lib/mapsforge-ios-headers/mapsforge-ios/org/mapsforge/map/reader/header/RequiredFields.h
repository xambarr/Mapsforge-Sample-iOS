//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/reader/header/RequiredFields.java
//

#ifndef _OrgMapsforgeMapReaderHeaderRequiredFields_H_
#define _OrgMapsforgeMapReaderHeaderRequiredFields_H_

#include "J2ObjC_header.h"

@class OrgMapsforgeMapReaderHeaderMapFileInfoBuilder;
@class OrgMapsforgeMapReaderReadBuffer;

@interface OrgMapsforgeMapReaderHeaderRequiredFields : NSObject

#pragma mark Package-Private

+ (void)readBoundingBoxWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
         withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

+ (void)readFileSizeWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
                                               withLong:(jlong)fileSize
      withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

+ (void)readFileVersionWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
         withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

+ (void)readMagicByteWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer;

+ (void)readMapDateWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
     withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

+ (void)readPoiTagsWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
     withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

+ (void)readProjectionNameWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
            withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

+ (void)readRemainingHeaderWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer;

+ (void)readTilePixelSizeWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
           withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

+ (void)readWayTagsWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
     withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapReaderHeaderRequiredFields)

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readBoundingBoxWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readFileSizeWithOrgMapsforgeMapReaderReadBuffer_withLong_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, jlong fileSize, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readFileVersionWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readMagicByteWithOrgMapsforgeMapReaderReadBuffer_(OrgMapsforgeMapReaderReadBuffer *readBuffer);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readMapDateWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readPoiTagsWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readProjectionNameWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readRemainingHeaderWithOrgMapsforgeMapReaderReadBuffer_(OrgMapsforgeMapReaderReadBuffer *readBuffer);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readTilePixelSizeWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderRequiredFields_readWayTagsWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapReaderHeaderRequiredFields)

#endif // _OrgMapsforgeMapReaderHeaderRequiredFields_H_
