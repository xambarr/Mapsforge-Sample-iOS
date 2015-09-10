//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/DataOutputStream.java
//

#ifndef _JavaIoDataOutputStream_H_
#define _JavaIoDataOutputStream_H_

#include "J2ObjC_header.h"
#include "java/io/DataOutput.h"
#include "java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;

@interface JavaIoDataOutputStream : JavaIoFilterOutputStream < JavaIoDataOutput > {
 @public
  jint written_;
}

#pragma mark Public

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)flush;

- (jint)size;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

- (void)writeWithInt:(jint)oneByte;

- (void)writeBooleanWithBoolean:(jboolean)val;

- (void)writeByteWithInt:(jint)val;

- (void)writeBytesWithNSString:(NSString *)str;

- (void)writeCharWithInt:(jint)val;

- (void)writeCharsWithNSString:(NSString *)str;

- (void)writeDoubleWithDouble:(jdouble)val;

- (void)writeFloatWithFloat:(jfloat)val;

- (void)writeIntWithInt:(jint)val;

- (void)writeLongWithLong:(jlong)val;

- (void)writeShortWithInt:(jint)val;

- (void)writeUTFWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoDataOutputStream)

FOUNDATION_EXPORT void JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoDataOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoDataOutputStream *new_JavaIoDataOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoDataOutputStream)

#endif // _JavaIoDataOutputStream_H_
