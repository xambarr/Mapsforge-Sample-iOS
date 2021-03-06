//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Grego.java
//

#ifndef _JavaUtilGrego_H_
#define _JavaUtilGrego_H_

#include "J2ObjC_header.h"

@class IOSIntArray;

#define JavaUtilGrego_MIN_MILLIS -184303902528000000LL
#define JavaUtilGrego_MAX_MILLIS 183882168921600000LL
#define JavaUtilGrego_MILLIS_PER_SECOND 1000
#define JavaUtilGrego_MILLIS_PER_MINUTE 60000
#define JavaUtilGrego_MILLIS_PER_HOUR 3600000
#define JavaUtilGrego_MILLIS_PER_DAY 86400000

@interface JavaUtilGrego : NSObject

#pragma mark Public

+ (jint)dayOfWeekWithLong:(jlong)day;

+ (IOSIntArray *)dayToFieldsWithLong:(jlong)day
                        withIntArray:(IOSIntArray *)fields;

+ (jlong)fieldsToDayWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)dom;

+ (jlong)floorDivideWithLong:(jlong)numerator
                    withLong:(jlong)denominator;

+ (jint)getDayOfWeekInMonthWithInt:(jint)year
                           withInt:(jint)month
                           withInt:(jint)dayOfMonth;

+ (jboolean)isLeapYearWithInt:(jint)year;

+ (jint)monthLengthWithInt:(jint)year
                   withInt:(jint)month;

+ (jint)previousMonthLengthWithInt:(jint)year
                           withInt:(jint)month;

+ (IOSIntArray *)timeToFieldsWithLong:(jlong)time
                         withIntArray:(IOSIntArray *)fields;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(JavaUtilGrego)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilGrego, MIN_MILLIS, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilGrego, MAX_MILLIS, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilGrego, MILLIS_PER_SECOND, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilGrego, MILLIS_PER_MINUTE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilGrego, MILLIS_PER_HOUR, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilGrego, MILLIS_PER_DAY, jint)

FOUNDATION_EXPORT jboolean JavaUtilGrego_isLeapYearWithInt_(jint year);

FOUNDATION_EXPORT jint JavaUtilGrego_monthLengthWithInt_withInt_(jint year, jint month);

FOUNDATION_EXPORT jint JavaUtilGrego_previousMonthLengthWithInt_withInt_(jint year, jint month);

FOUNDATION_EXPORT jlong JavaUtilGrego_fieldsToDayWithInt_withInt_withInt_(jint year, jint month, jint dom);

FOUNDATION_EXPORT jint JavaUtilGrego_dayOfWeekWithLong_(jlong day);

FOUNDATION_EXPORT IOSIntArray *JavaUtilGrego_dayToFieldsWithLong_withIntArray_(jlong day, IOSIntArray *fields);

FOUNDATION_EXPORT IOSIntArray *JavaUtilGrego_timeToFieldsWithLong_withIntArray_(jlong time, IOSIntArray *fields);

FOUNDATION_EXPORT jlong JavaUtilGrego_floorDivideWithLong_withLong_(jlong numerator, jlong denominator);

FOUNDATION_EXPORT jint JavaUtilGrego_getDayOfWeekInMonthWithInt_withInt_withInt_(jint year, jint month, jint dayOfMonth);

FOUNDATION_EXPORT void JavaUtilGrego_init(JavaUtilGrego *self);

FOUNDATION_EXPORT JavaUtilGrego *new_JavaUtilGrego_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilGrego)

#endif // _JavaUtilGrego_H_
