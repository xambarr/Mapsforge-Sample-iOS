//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IllegalFormatConversionException.java
//

#ifndef _JavaUtilIllegalFormatConversionException_H_
#define _JavaUtilIllegalFormatConversionException_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/IllegalFormatException.h"

@class IOSClass;

@interface JavaUtilIllegalFormatConversionException : JavaUtilIllegalFormatException < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithChar:(jchar)c
                withIOSClass:(IOSClass *)arg;

- (IOSClass *)getArgumentClass;

- (jchar)getConversion;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatConversionException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatConversionException_initWithChar_withIOSClass_(JavaUtilIllegalFormatConversionException *self, jchar c, IOSClass *arg);

FOUNDATION_EXPORT JavaUtilIllegalFormatConversionException *new_JavaUtilIllegalFormatConversionException_initWithChar_withIOSClass_(jchar c, IOSClass *arg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatConversionException)

#endif // _JavaUtilIllegalFormatConversionException_H_
