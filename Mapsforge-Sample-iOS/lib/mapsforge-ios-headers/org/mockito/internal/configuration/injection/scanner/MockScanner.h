//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/scanner/MockScanner.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionScannerMockScanner_H_
#define _OrgMockitoInternalConfigurationInjectionScannerMockScanner_H_

#include "J2ObjC_header.h"

@class IOSClass;
@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationInjectionScannerMockScanner : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)instance
              withIOSClass:(IOSClass *)clazz;

- (void)addPreparedMocksWithJavaUtilSet:(id<JavaUtilSet>)mocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionScannerMockScanner)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionScannerMockScanner_initWithId_withIOSClass_(OrgMockitoInternalConfigurationInjectionScannerMockScanner *self, id instance, IOSClass *clazz);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionScannerMockScanner *new_OrgMockitoInternalConfigurationInjectionScannerMockScanner_initWithId_withIOSClass_(id instance, IOSClass *clazz) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionScannerMockScanner)

#endif // _OrgMockitoInternalConfigurationInjectionScannerMockScanner_H_
