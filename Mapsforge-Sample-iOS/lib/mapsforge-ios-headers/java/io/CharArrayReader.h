//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/CharArrayReader.java
//

#ifndef _JavaIoCharArrayReader_H_
#define _JavaIoCharArrayReader_H_

#include "J2ObjC_header.h"
#include "java/io/Reader.h"

@class IOSCharArray;

@interface JavaIoCharArrayReader : JavaIoReader {
 @public
  IOSCharArray *buf_;
  jint pos_;
  jint markedPos_;
  jint count_;
}

#pragma mark Public

- (instancetype)initWithCharArray:(IOSCharArray *)buf;

- (instancetype)initWithCharArray:(IOSCharArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)length;

- (void)close;

- (void)markWithInt:(jint)readLimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

- (jboolean)ready;

- (void)reset;

- (jlong)skipWithLong:(jlong)charCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoCharArrayReader)

J2OBJC_FIELD_SETTER(JavaIoCharArrayReader, buf_, IOSCharArray *)

FOUNDATION_EXPORT void JavaIoCharArrayReader_initWithCharArray_(JavaIoCharArrayReader *self, IOSCharArray *buf);

FOUNDATION_EXPORT JavaIoCharArrayReader *new_JavaIoCharArrayReader_initWithCharArray_(IOSCharArray *buf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(JavaIoCharArrayReader *self, IOSCharArray *buf, jint offset, jint length);

FOUNDATION_EXPORT JavaIoCharArrayReader *new_JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(IOSCharArray *buf, jint offset, jint length) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoCharArrayReader)

#endif // _JavaIoCharArrayReader_H_
