//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/ChoiceFormat.java
//

#ifndef _JavaTextChoiceFormat_H_
#define _JavaTextChoiceFormat_H_

#include "J2ObjC_header.h"
#include "java/text/NumberFormat.h"

@class IOSDoubleArray;
@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;

@interface JavaTextChoiceFormat : JavaTextNumberFormat

#pragma mark Public

- (instancetype)initWithDoubleArray:(IOSDoubleArray *)limits
                  withNSStringArray:(IOSObjectArray *)formats;

- (instancetype)initWithNSString:(NSString *)template_;

- (void)applyPatternWithNSString:(NSString *)template_;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (JavaLangStringBuffer *)formatWithDouble:(jdouble)value
                  withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                 withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (JavaLangStringBuffer *)formatWithLong:(jlong)value
                withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
               withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (IOSObjectArray *)getFormats;

- (IOSDoubleArray *)getLimits;

- (NSUInteger)hash;

+ (jdouble)nextDoubleWithDouble:(jdouble)value;

+ (jdouble)nextDoubleWithDouble:(jdouble)value
                    withBoolean:(jboolean)increment;

- (NSNumber *)parseWithNSString:(NSString *)string
      withJavaTextParsePosition:(JavaTextParsePosition *)position;

+ (jdouble)previousDoubleWithDouble:(jdouble)value;

- (void)setChoicesWithDoubleArray:(IOSDoubleArray *)limits
                withNSStringArray:(IOSObjectArray *)formats;

- (NSString *)toPattern;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextChoiceFormat)

FOUNDATION_EXPORT void JavaTextChoiceFormat_initWithDoubleArray_withNSStringArray_(JavaTextChoiceFormat *self, IOSDoubleArray *limits, IOSObjectArray *formats);

FOUNDATION_EXPORT JavaTextChoiceFormat *new_JavaTextChoiceFormat_initWithDoubleArray_withNSStringArray_(IOSDoubleArray *limits, IOSObjectArray *formats) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaTextChoiceFormat_initWithNSString_(JavaTextChoiceFormat *self, NSString *template_);

FOUNDATION_EXPORT JavaTextChoiceFormat *new_JavaTextChoiceFormat_initWithNSString_(NSString *template_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jdouble JavaTextChoiceFormat_nextDoubleWithDouble_(jdouble value);

FOUNDATION_EXPORT jdouble JavaTextChoiceFormat_nextDoubleWithDouble_withBoolean_(jdouble value, jboolean increment);

FOUNDATION_EXPORT jdouble JavaTextChoiceFormat_previousDoubleWithDouble_(jdouble value);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextChoiceFormat)

#endif // _JavaTextChoiceFormat_H_