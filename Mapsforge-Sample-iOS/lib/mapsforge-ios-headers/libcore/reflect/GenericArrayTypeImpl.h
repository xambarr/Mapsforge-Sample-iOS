//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/reflect/GenericArrayTypeImpl.java
//

#ifndef _LibcoreReflectGenericArrayTypeImpl_H_
#define _LibcoreReflectGenericArrayTypeImpl_H_

#include "J2ObjC_header.h"
#include "java/lang/reflect/GenericArrayType.h"

@protocol JavaLangReflectType;

@interface LibcoreReflectGenericArrayTypeImpl : NSObject < JavaLangReflectGenericArrayType >

#pragma mark Public

- (instancetype)initWithJavaLangReflectType:(id<JavaLangReflectType>)componentType;

- (jboolean)isEqual:(id)o;

- (id<JavaLangReflectType>)getGenericComponentType;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreReflectGenericArrayTypeImpl)

FOUNDATION_EXPORT void LibcoreReflectGenericArrayTypeImpl_initWithJavaLangReflectType_(LibcoreReflectGenericArrayTypeImpl *self, id<JavaLangReflectType> componentType);

FOUNDATION_EXPORT LibcoreReflectGenericArrayTypeImpl *new_LibcoreReflectGenericArrayTypeImpl_initWithJavaLangReflectType_(id<JavaLangReflectType> componentType) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreReflectGenericArrayTypeImpl)

#endif // _LibcoreReflectGenericArrayTypeImpl_H_
