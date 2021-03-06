//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FilterInputStream.java
//

#ifndef _JavaIoFilterInputStream_H_
#define _JavaIoFilterInputStream_H_

#include "J2ObjC_header.h"
#include "java/io/InputStream.h"

@class IOSByteArray;

@interface JavaIoFilterInputStream : JavaIoInputStream {
 @public
  JavaIoInputStream *in_;
}

#pragma mark Public

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (void)reset;

- (jlong)skipWithLong:(jlong)byteCount;

#pragma mark Protected

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilterInputStream)

J2OBJC_FIELD_SETTER(JavaIoFilterInputStream, in_, JavaIoInputStream *)

FOUNDATION_EXPORT void JavaIoFilterInputStream_initWithJavaIoInputStream_(JavaIoFilterInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoFilterInputStream *new_JavaIoFilterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilterInputStream)

#endif // _JavaIoFilterInputStream_H_
