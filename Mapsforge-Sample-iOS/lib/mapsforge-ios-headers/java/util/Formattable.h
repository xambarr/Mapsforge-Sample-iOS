//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Formattable.java
//

#ifndef _JavaUtilFormattable_H_
#define _JavaUtilFormattable_H_

#include "J2ObjC_header.h"

@class JavaUtilFormatter;

@protocol JavaUtilFormattable < NSObject, JavaObject >

- (void)formatToWithJavaUtilFormatter:(JavaUtilFormatter *)formatter
                              withInt:(jint)flags
                              withInt:(jint)width
                              withInt:(jint)precision;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormattable)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormattable)

#endif // _JavaUtilFormattable_H_
