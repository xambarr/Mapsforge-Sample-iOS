//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/util/Primitives.java
//

#ifndef _OrgMockitoInternalUtilPrimitives_H_
#define _OrgMockitoInternalUtilPrimitives_H_

#include "J2ObjC_header.h"

@class IOSClass;

@interface OrgMockitoInternalUtilPrimitives : NSObject

#pragma mark Public

- (instancetype)init;

+ (id)defaultValueForPrimitiveOrWrapperWithIOSClass:(IOSClass *)primitiveOrWrapperType;

+ (jboolean)isPrimitiveOrWrapperWithIOSClass:(IOSClass *)type;

+ (IOSClass *)primitiveTypeOfWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalUtilPrimitives)

FOUNDATION_EXPORT IOSClass *OrgMockitoInternalUtilPrimitives_primitiveTypeOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT jboolean OrgMockitoInternalUtilPrimitives_isPrimitiveOrWrapperWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id OrgMockitoInternalUtilPrimitives_defaultValueForPrimitiveOrWrapperWithIOSClass_(IOSClass *primitiveOrWrapperType);

FOUNDATION_EXPORT void OrgMockitoInternalUtilPrimitives_init(OrgMockitoInternalUtilPrimitives *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilPrimitives *new_OrgMockitoInternalUtilPrimitives_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilPrimitives)

#endif // _OrgMockitoInternalUtilPrimitives_H_
