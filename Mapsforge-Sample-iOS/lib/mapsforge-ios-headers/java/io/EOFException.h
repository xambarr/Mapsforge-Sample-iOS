//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/EOFException.java
//

#ifndef _JavaIoEOFException_H_
#define _JavaIoEOFException_H_

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

@interface JavaIoEOFException : JavaIoIOException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoEOFException)

FOUNDATION_EXPORT void JavaIoEOFException_init(JavaIoEOFException *self);

FOUNDATION_EXPORT JavaIoEOFException *new_JavaIoEOFException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoEOFException_initWithNSString_(JavaIoEOFException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoEOFException *new_JavaIoEOFException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoEOFException)

#endif // _JavaIoEOFException_H_
