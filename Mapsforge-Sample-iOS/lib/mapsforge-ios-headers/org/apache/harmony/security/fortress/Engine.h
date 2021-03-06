//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/fortress/Engine.java
//

#ifndef _OrgApacheHarmonySecurityFortressEngine_H_
#define _OrgApacheHarmonySecurityFortressEngine_H_

#include "J2ObjC_header.h"

@class JavaSecurityProvider;
@class JavaSecurityProvider_Service;
@class JavaUtilArrayList;
@class OrgApacheHarmonySecurityFortressEngine_SpiAndProvider;
@protocol OrgApacheHarmonySecurityFortressSecurityAccess;

@interface OrgApacheHarmonySecurityFortressEngine : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)serviceName;

- (OrgApacheHarmonySecurityFortressEngine_SpiAndProvider *)getInstanceWithJavaSecurityProvider_Service:(JavaSecurityProvider_Service *)service
                                                                                          withNSString:(NSString *)param;

- (OrgApacheHarmonySecurityFortressEngine_SpiAndProvider *)getInstanceWithNSString:(NSString *)algorithm
                                                                            withId:(id)param;

- (id)getInstanceWithNSString:(NSString *)algorithm
     withJavaSecurityProvider:(JavaSecurityProvider *)provider
                       withId:(id)param;

- (JavaUtilArrayList *)getServicesWithNSString:(NSString *)algorithm;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityFortressEngine)

FOUNDATION_EXPORT id<OrgApacheHarmonySecurityFortressSecurityAccess> OrgApacheHarmonySecurityFortressEngine_door_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityFortressEngine, door_, id<OrgApacheHarmonySecurityFortressSecurityAccess>)
J2OBJC_STATIC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine, door_, id<OrgApacheHarmonySecurityFortressSecurityAccess>)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityFortressEngine_initWithNSString_(OrgApacheHarmonySecurityFortressEngine *self, NSString *serviceName);

FOUNDATION_EXPORT OrgApacheHarmonySecurityFortressEngine *new_OrgApacheHarmonySecurityFortressEngine_initWithNSString_(NSString *serviceName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityFortressEngine)

@interface OrgApacheHarmonySecurityFortressEngine_SpiAndProvider : NSObject {
 @public
  id spi_;
  JavaSecurityProvider *provider_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider)

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider, spi_, id)
J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider, provider_, JavaSecurityProvider *)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityFortressEngine_SpiAndProvider)

#endif // _OrgApacheHarmonySecurityFortressEngine_H_
