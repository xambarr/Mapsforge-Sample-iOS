//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/IncompleteAnnotationException.java
//

#ifndef _JavaLangAnnotationIncompleteAnnotationException_H_
#define _JavaLangAnnotationIncompleteAnnotationException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class IOSClass;

@interface JavaLangAnnotationIncompleteAnnotationException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)annotationType
                    withNSString:(NSString *)elementName;

- (IOSClass *)annotationType;

- (NSString *)elementName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationIncompleteAnnotationException)

FOUNDATION_EXPORT void JavaLangAnnotationIncompleteAnnotationException_initWithIOSClass_withNSString_(JavaLangAnnotationIncompleteAnnotationException *self, IOSClass *annotationType, NSString *elementName);

FOUNDATION_EXPORT JavaLangAnnotationIncompleteAnnotationException *new_JavaLangAnnotationIncompleteAnnotationException_initWithIOSClass_withNSString_(IOSClass *annotationType, NSString *elementName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationIncompleteAnnotationException)

#endif // _JavaLangAnnotationIncompleteAnnotationException_H_
