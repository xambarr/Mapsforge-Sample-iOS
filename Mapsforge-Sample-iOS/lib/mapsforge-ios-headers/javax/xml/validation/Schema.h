//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/validation/Schema.java
//

#ifndef _JavaxXmlValidationSchema_H_
#define _JavaxXmlValidationSchema_H_

#include "J2ObjC_header.h"

@class JavaxXmlValidationValidator;
@class JavaxXmlValidationValidatorHandler;

@interface JavaxXmlValidationSchema : NSObject

#pragma mark Public

- (JavaxXmlValidationValidator *)newValidator OBJC_METHOD_FAMILY_NONE;

- (JavaxXmlValidationValidatorHandler *)newValidatorHandler OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlValidationSchema)

FOUNDATION_EXPORT void JavaxXmlValidationSchema_init(JavaxXmlValidationSchema *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlValidationSchema)

#endif // _JavaxXmlValidationSchema_H_
