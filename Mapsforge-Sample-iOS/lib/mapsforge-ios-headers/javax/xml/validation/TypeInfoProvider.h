//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/validation/TypeInfoProvider.java
//

#ifndef _JavaxXmlValidationTypeInfoProvider_H_
#define _JavaxXmlValidationTypeInfoProvider_H_

#include "J2ObjC_header.h"

@protocol OrgW3cDomTypeInfo;

@interface JavaxXmlValidationTypeInfoProvider : NSObject

#pragma mark Public

- (id<OrgW3cDomTypeInfo>)getAttributeTypeInfoWithInt:(jint)index;

- (id<OrgW3cDomTypeInfo>)getElementTypeInfo;

- (jboolean)isIdAttributeWithInt:(jint)index;

- (jboolean)isSpecifiedWithInt:(jint)index;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlValidationTypeInfoProvider)

FOUNDATION_EXPORT void JavaxXmlValidationTypeInfoProvider_init(JavaxXmlValidationTypeInfoProvider *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlValidationTypeInfoProvider)

#endif // _JavaxXmlValidationTypeInfoProvider_H_