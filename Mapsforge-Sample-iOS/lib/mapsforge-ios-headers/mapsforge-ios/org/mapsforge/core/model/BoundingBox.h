//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/model/BoundingBox.java
//

#ifndef _OrgMapsforgeCoreModelBoundingBox_H_
#define _OrgMapsforgeCoreModelBoundingBox_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class OrgMapsforgeCoreModelLatLong;
@class OrgMapsforgeCoreModelRectangle;
@class OrgMapsforgeCoreModelTile;

@interface OrgMapsforgeCoreModelBoundingBox : NSObject < JavaIoSerializable > {
 @public
  jdouble maxLatitude_;
  jdouble maxLongitude_;
  jdouble minLatitude_;
  jdouble minLongitude_;
}

#pragma mark Public

- (instancetype)initWithDouble:(jdouble)minLatitude
                    withDouble:(jdouble)minLongitude
                    withDouble:(jdouble)maxLatitude
                    withDouble:(jdouble)maxLongitude;

- (jboolean)containsWithOrgMapsforgeCoreModelLatLong:(OrgMapsforgeCoreModelLatLong *)latLong;

- (jboolean)isEqual:(id)obj;

- (OrgMapsforgeCoreModelBoundingBox *)extendWithOrgMapsforgeCoreModelBoundingBox:(OrgMapsforgeCoreModelBoundingBox *)boundingBox;

- (OrgMapsforgeCoreModelBoundingBox *)extendWithInt:(jint)meters;

+ (OrgMapsforgeCoreModelBoundingBox *)fromStringWithNSString:(NSString *)boundingBoxString;

- (OrgMapsforgeCoreModelLatLong *)getCenterPoint;

- (jdouble)getLatitudeSpan;

- (jdouble)getLongitudeSpan;

- (OrgMapsforgeCoreModelRectangle *)getPositionRelativeToTileWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (NSUInteger)hash;

- (jboolean)intersectsWithOrgMapsforgeCoreModelBoundingBox:(OrgMapsforgeCoreModelBoundingBox *)boundingBox;

- (jboolean)intersectsAreaWithOrgMapsforgeCoreModelLatLongArray2:(IOSObjectArray *)latLongs;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreModelBoundingBox)

FOUNDATION_EXPORT OrgMapsforgeCoreModelBoundingBox *OrgMapsforgeCoreModelBoundingBox_fromStringWithNSString_(NSString *boundingBoxString);

FOUNDATION_EXPORT void OrgMapsforgeCoreModelBoundingBox_initWithDouble_withDouble_withDouble_withDouble_(OrgMapsforgeCoreModelBoundingBox *self, jdouble minLatitude, jdouble minLongitude, jdouble maxLatitude, jdouble maxLongitude);

FOUNDATION_EXPORT OrgMapsforgeCoreModelBoundingBox *new_OrgMapsforgeCoreModelBoundingBox_initWithDouble_withDouble_withDouble_withDouble_(jdouble minLatitude, jdouble minLongitude, jdouble maxLatitude, jdouble maxLongitude) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreModelBoundingBox)

#endif // _OrgMapsforgeCoreModelBoundingBox_H_
