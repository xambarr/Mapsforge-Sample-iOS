//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/UnknownFormatConversionException.java
//

#ifndef _JavaUtilUnknownFormatConversionException_H_
#define _JavaUtilUnknownFormatConversionException_H_

#include "J2ObjC_header.h"
#include "java/util/IllegalFormatException.h"

@interface JavaUtilUnknownFormatConversionException : JavaUtilIllegalFormatException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)s;

- (NSString *)getConversion;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUnknownFormatConversionException)

FOUNDATION_EXPORT void JavaUtilUnknownFormatConversionException_initWithNSString_(JavaUtilUnknownFormatConversionException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilUnknownFormatConversionException *new_JavaUtilUnknownFormatConversionException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUnknownFormatConversionException)

#endif // _JavaUtilUnknownFormatConversionException_H_
