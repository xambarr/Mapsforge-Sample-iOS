//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/TileBitmap.java
//

#ifndef _OrgMapsforgeCoreGraphicsTileBitmap_H_
#define _OrgMapsforgeCoreGraphicsTileBitmap_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/core/graphics/Bitmap.h"

@protocol OrgMapsforgeCoreGraphicsTileBitmap < OrgMapsforgeCoreGraphicsBitmap, NSObject, JavaObject >

- (jlong)getTimestamp;

- (jboolean)isExpired;

- (void)setExpirationWithLong:(jlong)expiration;

- (void)setTimestampWithLong:(jlong)timestamp;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsTileBitmap)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsTileBitmap)

#endif // _OrgMapsforgeCoreGraphicsTileBitmap_H_
