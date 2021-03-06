//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/regex/PatternSyntaxException.java
//

#ifndef _JavaUtilRegexPatternSyntaxException_H_
#define _JavaUtilRegexPatternSyntaxException_H_

#include "J2ObjC_header.h"
#include "java/lang/IllegalArgumentException.h"

@interface JavaUtilRegexPatternSyntaxException : JavaLangIllegalArgumentException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)description_
                    withNSString:(NSString *)pattern
                         withInt:(jint)index;

- (NSString *)getDescription;

- (jint)getIndex;

- (NSString *)getMessage;

- (NSString *)getPattern;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexPatternSyntaxException)

FOUNDATION_EXPORT void JavaUtilRegexPatternSyntaxException_initWithNSString_withNSString_withInt_(JavaUtilRegexPatternSyntaxException *self, NSString *description_, NSString *pattern, jint index);

FOUNDATION_EXPORT JavaUtilRegexPatternSyntaxException *new_JavaUtilRegexPatternSyntaxException_initWithNSString_withNSString_withInt_(NSString *description_, NSString *pattern, jint index) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexPatternSyntaxException)

#endif // _JavaUtilRegexPatternSyntaxException_H_
