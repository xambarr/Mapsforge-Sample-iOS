//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/Align.java
//

#ifndef _OrgMapsforgeCoreGraphicsAlign_H_
#define _OrgMapsforgeCoreGraphicsAlign_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, OrgMapsforgeCoreGraphicsAlign) {
  OrgMapsforgeCoreGraphicsAlign_CENTER = 0,
  OrgMapsforgeCoreGraphicsAlign_LEFT = 1,
  OrgMapsforgeCoreGraphicsAlign_RIGHT = 2,
};

@interface OrgMapsforgeCoreGraphicsAlignEnum : JavaLangEnum < NSCopying >

#pragma mark Public

- (OrgMapsforgeCoreGraphicsAlignEnum *)fromStringWithNSString:(NSString *)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *OrgMapsforgeCoreGraphicsAlignEnum_values();

+ (OrgMapsforgeCoreGraphicsAlignEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsAlignEnum *OrgMapsforgeCoreGraphicsAlignEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeCoreGraphicsAlignEnum)

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsAlignEnum *OrgMapsforgeCoreGraphicsAlignEnum_values_[];

#define OrgMapsforgeCoreGraphicsAlignEnum_CENTER OrgMapsforgeCoreGraphicsAlignEnum_values_[OrgMapsforgeCoreGraphicsAlign_CENTER]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsAlignEnum, CENTER)

#define OrgMapsforgeCoreGraphicsAlignEnum_LEFT OrgMapsforgeCoreGraphicsAlignEnum_values_[OrgMapsforgeCoreGraphicsAlign_LEFT]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsAlignEnum, LEFT)

#define OrgMapsforgeCoreGraphicsAlignEnum_RIGHT OrgMapsforgeCoreGraphicsAlignEnum_values_[OrgMapsforgeCoreGraphicsAlign_RIGHT]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMapsforgeCoreGraphicsAlignEnum, RIGHT)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsAlignEnum)

#endif // _OrgMapsforgeCoreGraphicsAlign_H_
