//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/reader/header/SubFileParameter.java
//

#ifndef _OrgMapsforgeMapReaderHeaderSubFileParameter_H_
#define _OrgMapsforgeMapReaderHeaderSubFileParameter_H_

#include "J2ObjC_header.h"

@class OrgMapsforgeMapReaderHeaderSubFileParameterBuilder;

#define OrgMapsforgeMapReaderHeaderSubFileParameter_BYTES_PER_INDEX_ENTRY 5

@interface OrgMapsforgeMapReaderHeaderSubFileParameter : NSObject {
 @public
  jbyte baseZoomLevel_;
  jlong blocksHeight_;
  jlong blocksWidth_;
  jlong boundaryTileBottom_;
  jlong boundaryTileLeft_;
  jlong boundaryTileRight_;
  jlong boundaryTileTop_;
  jlong indexEndAddress_;
  jlong indexStartAddress_;
  jlong numberOfBlocks_;
  jlong startAddress_;
  jlong subFileSize_;
  jbyte zoomLevelMax_;
  jbyte zoomLevelMin_;
}

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapReaderHeaderSubFileParameterBuilder:(OrgMapsforgeMapReaderHeaderSubFileParameterBuilder *)subFileParameterBuilder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapReaderHeaderSubFileParameter)

J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapReaderHeaderSubFileParameter, BYTES_PER_INDEX_ENTRY, jbyte)

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderSubFileParameter_initWithOrgMapsforgeMapReaderHeaderSubFileParameterBuilder_(OrgMapsforgeMapReaderHeaderSubFileParameter *self, OrgMapsforgeMapReaderHeaderSubFileParameterBuilder *subFileParameterBuilder);

FOUNDATION_EXPORT OrgMapsforgeMapReaderHeaderSubFileParameter *new_OrgMapsforgeMapReaderHeaderSubFileParameter_initWithOrgMapsforgeMapReaderHeaderSubFileParameterBuilder_(OrgMapsforgeMapReaderHeaderSubFileParameterBuilder *subFileParameterBuilder) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapReaderHeaderSubFileParameter)

#endif // _OrgMapsforgeMapReaderHeaderSubFileParameter_H_
