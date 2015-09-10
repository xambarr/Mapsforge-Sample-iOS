//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/reader/header/OptionalFields.java
//

#ifndef _OrgMapsforgeMapReaderHeaderOptionalFields_H_
#define _OrgMapsforgeMapReaderHeaderOptionalFields_H_

#include "J2ObjC_header.h"

@class JavaLangByte;
@class OrgMapsforgeCoreModelLatLong;
@class OrgMapsforgeMapReaderHeaderMapFileInfoBuilder;
@class OrgMapsforgeMapReaderReadBuffer;

@interface OrgMapsforgeMapReaderHeaderOptionalFields : NSObject {
 @public
  NSString *comment_;
  NSString *createdBy_;
  jboolean hasComment_;
  jboolean hasCreatedBy_;
  jboolean hasLanguagePreference_;
  jboolean hasStartPosition_;
  jboolean hasStartZoomLevel_;
  jboolean isDebugFile_;
  NSString *languagePreference_;
  OrgMapsforgeCoreModelLatLong *startPosition_;
  JavaLangByte *startZoomLevel_;
}

#pragma mark Package-Private

+ (void)readOptionalFieldsWithOrgMapsforgeMapReaderReadBuffer:(OrgMapsforgeMapReaderReadBuffer *)readBuffer
            withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapReaderHeaderOptionalFields)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderOptionalFields, comment_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderOptionalFields, createdBy_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderOptionalFields, languagePreference_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderOptionalFields, startPosition_, OrgMapsforgeCoreModelLatLong *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderOptionalFields, startZoomLevel_, JavaLangByte *)

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderOptionalFields_readOptionalFieldsWithOrgMapsforgeMapReaderReadBuffer_withOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderReadBuffer *readBuffer, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapReaderHeaderOptionalFields)

#endif // _OrgMapsforgeMapReaderHeaderOptionalFields_H_