//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/SerializationHandleMap.java
//

#ifndef _JavaIoSerializationHandleMap_H_
#define _JavaIoSerializationHandleMap_H_

#include "J2ObjC_header.h"

@interface JavaIoSerializationHandleMap : NSObject

#pragma mark Public

- (instancetype)init;

- (jint)getWithId:(id)key;

- (jboolean)isEmpty;

- (jint)putWithId:(id)key
          withInt:(jint)value;

- (jint)removeWithId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSerializationHandleMap)

FOUNDATION_EXPORT void JavaIoSerializationHandleMap_init(JavaIoSerializationHandleMap *self);

FOUNDATION_EXPORT JavaIoSerializationHandleMap *new_JavaIoSerializationHandleMap_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSerializationHandleMap)

#endif // _JavaIoSerializationHandleMap_H_
