//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/CaptorAnnotationProcessor.java
//

#ifndef _OrgMockitoInternalConfigurationCaptorAnnotationProcessor_H_
#define _OrgMockitoInternalConfigurationCaptorAnnotationProcessor_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@class JavaLangReflectField;
@protocol OrgMockitoCaptor;

@interface OrgMockitoInternalConfigurationCaptorAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor >

#pragma mark Public

- (instancetype)init;

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoCaptor>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationCaptorAnnotationProcessor)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationCaptorAnnotationProcessor_init(OrgMockitoInternalConfigurationCaptorAnnotationProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationCaptorAnnotationProcessor *new_OrgMockitoInternalConfigurationCaptorAnnotationProcessor_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationCaptorAnnotationProcessor)

#endif // _OrgMockitoInternalConfigurationCaptorAnnotationProcessor_H_
