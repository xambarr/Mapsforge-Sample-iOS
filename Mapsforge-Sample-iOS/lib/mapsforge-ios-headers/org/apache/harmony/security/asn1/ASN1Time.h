//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Time.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Time_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Time_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1StringType.h"

@class OrgApacheHarmonySecurityAsn1BerInputStream;

@interface OrgApacheHarmonySecurityAsn1ASN1Time : OrgApacheHarmonySecurityAsn1ASN1StringType

#pragma mark Public

- (instancetype)initWithInt:(jint)tagNumber;

- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Time)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1Time_initWithInt_(OrgApacheHarmonySecurityAsn1ASN1Time *self, jint tagNumber);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Time)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Time_H_