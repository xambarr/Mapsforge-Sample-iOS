//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/BufferedOutputStream.java
//

#ifndef _JavaIoBufferedOutputStream_H_
#define _JavaIoBufferedOutputStream_H_

#include "J2ObjC_header.h"
#include "java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;

@interface JavaIoBufferedOutputStream : JavaIoFilterOutputStream {
 @public
  IOSByteArray *buf_;
  jint count_;
}

#pragma mark Public

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                   withInt:(jint)size;

- (void)close;

- (void)flush;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)length;

- (void)writeWithInt:(jint)oneByte;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoBufferedOutputStream)

J2OBJC_FIELD_SETTER(JavaIoBufferedOutputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoBufferedOutputStream_initWithJavaIoOutputStream_(JavaIoBufferedOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoBufferedOutputStream *new_JavaIoBufferedOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoBufferedOutputStream_initWithJavaIoOutputStream_withInt_(JavaIoBufferedOutputStream *self, JavaIoOutputStream *outArg, jint size);

FOUNDATION_EXPORT JavaIoBufferedOutputStream *new_JavaIoBufferedOutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *outArg, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoBufferedOutputStream)

#endif // _JavaIoBufferedOutputStream_H_
