//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/MessageFormat.java
//

#ifndef _JavaTextMessageFormat_H_
#define _JavaTextMessageFormat_H_

#include "J2ObjC_header.h"
#include "java/text/Format.h"

@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilLocale;
@protocol JavaTextAttributedCharacterIterator;

@interface JavaTextMessageFormat : JavaTextFormat

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)template_;

- (instancetype)initWithNSString:(NSString *)template_
              withJavaUtilLocale:(JavaUtilLocale *)locale;

- (void)applyPatternWithNSString:(NSString *)template_;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (JavaLangStringBuffer *)formatWithId:(id)object
              withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
             withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (JavaLangStringBuffer *)formatWithNSObjectArray:(IOSObjectArray *)objects
                         withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                        withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

+ (NSString *)formatWithNSString:(NSString *)format
               withNSObjectArray:(IOSObjectArray *)args;

- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)object;

- (IOSObjectArray *)getFormats;

- (IOSObjectArray *)getFormatsByArgumentIndex;

- (JavaUtilLocale *)getLocale;

- (NSUInteger)hash;

- (IOSObjectArray *)parseWithNSString:(NSString *)string;

- (IOSObjectArray *)parseWithNSString:(NSString *)string
            withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (id)parseObjectWithNSString:(NSString *)string
    withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (void)setFormatWithInt:(jint)offset
      withJavaTextFormat:(JavaTextFormat *)format;

- (void)setFormatByArgumentIndexWithInt:(jint)argIndex
                     withJavaTextFormat:(JavaTextFormat *)format;

- (void)setFormatsWithJavaTextFormatArray:(IOSObjectArray *)formats;

- (void)setFormatsByArgumentIndexWithJavaTextFormatArray:(IOSObjectArray *)formats;

- (void)setLocaleWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)toPattern;

@end

J2OBJC_STATIC_INIT(JavaTextMessageFormat)

FOUNDATION_EXPORT void JavaTextMessageFormat_initWithNSString_withJavaUtilLocale_(JavaTextMessageFormat *self, NSString *template_, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextMessageFormat *new_JavaTextMessageFormat_initWithNSString_withJavaUtilLocale_(NSString *template_, JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaTextMessageFormat_initWithNSString_(JavaTextMessageFormat *self, NSString *template_);

FOUNDATION_EXPORT JavaTextMessageFormat *new_JavaTextMessageFormat_initWithNSString_(NSString *template_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *JavaTextMessageFormat_formatWithNSString_withNSObjectArray_(NSString *format, IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextMessageFormat)

@interface JavaTextMessageFormat_Field : JavaTextFormat_Field

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)fieldName;

@end

J2OBJC_STATIC_INIT(JavaTextMessageFormat_Field)

FOUNDATION_EXPORT JavaTextMessageFormat_Field *JavaTextMessageFormat_Field_ARGUMENT_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextMessageFormat_Field, ARGUMENT_, JavaTextMessageFormat_Field *)

FOUNDATION_EXPORT void JavaTextMessageFormat_Field_initWithNSString_(JavaTextMessageFormat_Field *self, NSString *fieldName);

FOUNDATION_EXPORT JavaTextMessageFormat_Field *new_JavaTextMessageFormat_Field_initWithNSString_(NSString *fieldName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaTextMessageFormat_Field)

#endif // _JavaTextMessageFormat_H_
