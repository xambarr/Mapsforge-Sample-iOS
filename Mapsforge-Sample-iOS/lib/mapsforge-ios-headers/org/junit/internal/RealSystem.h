//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/junit/build_result/java/org/junit/internal/RealSystem.java
//

#ifndef _OrgJunitInternalRealSystem_H_
#define _OrgJunitInternalRealSystem_H_

#include "J2ObjC_header.h"
#include "org/junit/internal/JUnitSystem.h"

@class JavaIoPrintStream;

@interface OrgJunitInternalRealSystem : NSObject < OrgJunitInternalJUnitSystem >

#pragma mark Public

- (instancetype)init;

- (void)exitWithInt:(jint)code;

- (JavaIoPrintStream *)out;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRealSystem)

FOUNDATION_EXPORT void OrgJunitInternalRealSystem_init(OrgJunitInternalRealSystem *self);

FOUNDATION_EXPORT OrgJunitInternalRealSystem *new_OrgJunitInternalRealSystem_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRealSystem)

#endif // _OrgJunitInternalRealSystem_H_
