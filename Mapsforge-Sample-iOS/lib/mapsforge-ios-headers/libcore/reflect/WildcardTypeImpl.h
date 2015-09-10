//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/reflect/WildcardTypeImpl.java
//

#ifndef _LibcoreReflectWildcardTypeImpl_H_
#define _LibcoreReflectWildcardTypeImpl_H_

#include "J2ObjC_header.h"
#include "java/lang/reflect/WildcardType.h"

@class IOSObjectArray;
@class LibcoreReflectListOfTypes;

@interface LibcoreReflectWildcardTypeImpl : NSObject < JavaLangReflectWildcardType >

#pragma mark Public

- (instancetype)initWithLibcoreReflectListOfTypes:(LibcoreReflectListOfTypes *)extendsBound
                    withLibcoreReflectListOfTypes:(LibcoreReflectListOfTypes *)superBound;

- (jboolean)isEqual:(id)o;

- (IOSObjectArray *)getLowerBounds;

- (IOSObjectArray *)getUpperBounds;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreReflectWildcardTypeImpl)

FOUNDATION_EXPORT void LibcoreReflectWildcardTypeImpl_initWithLibcoreReflectListOfTypes_withLibcoreReflectListOfTypes_(LibcoreReflectWildcardTypeImpl *self, LibcoreReflectListOfTypes *extendsBound, LibcoreReflectListOfTypes *superBound);

FOUNDATION_EXPORT LibcoreReflectWildcardTypeImpl *new_LibcoreReflectWildcardTypeImpl_initWithLibcoreReflectListOfTypes_withLibcoreReflectListOfTypes_(LibcoreReflectListOfTypes *extendsBound, LibcoreReflectListOfTypes *superBound) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreReflectWildcardTypeImpl)

#endif // _LibcoreReflectWildcardTypeImpl_H_
