//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/RealToString.java
//

#ifndef _JavaLangRealToString_H_
#define _JavaLangRealToString_H_

#include "J2ObjC_header.h"

@class JavaLangAbstractStringBuilder;

@interface JavaLangRealToString : NSObject

#pragma mark Public

+ (void)appendDoubleWithJavaLangAbstractStringBuilder:(JavaLangAbstractStringBuilder *)sb
                                           withDouble:(jdouble)d;

+ (void)appendFloatWithJavaLangAbstractStringBuilder:(JavaLangAbstractStringBuilder *)sb
                                           withFloat:(jfloat)f;

+ (NSString *)doubleToStringWithDouble:(jdouble)d;

+ (NSString *)floatToStringWithFloat:(jfloat)f;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRealToString)

FOUNDATION_EXPORT NSString *JavaLangRealToString_doubleToStringWithDouble_(jdouble d);

FOUNDATION_EXPORT void JavaLangRealToString_appendDoubleWithJavaLangAbstractStringBuilder_withDouble_(JavaLangAbstractStringBuilder *sb, jdouble d);

FOUNDATION_EXPORT NSString *JavaLangRealToString_floatToStringWithFloat_(jfloat f);

FOUNDATION_EXPORT void JavaLangRealToString_appendFloatWithJavaLangAbstractStringBuilder_withFloat_(JavaLangAbstractStringBuilder *sb, jfloat f);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRealToString)

#endif // _JavaLangRealToString_H_
