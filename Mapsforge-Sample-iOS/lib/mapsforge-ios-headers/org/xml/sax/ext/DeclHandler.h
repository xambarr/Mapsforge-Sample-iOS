//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/DeclHandler.java
//

#ifndef _OrgXmlSaxExtDeclHandler_H_
#define _OrgXmlSaxExtDeclHandler_H_

#include "J2ObjC_header.h"

@protocol OrgXmlSaxExtDeclHandler < NSObject, JavaObject >

- (void)elementDeclWithNSString:(NSString *)name
                   withNSString:(NSString *)model;

- (void)attributeDeclWithNSString:(NSString *)eName
                     withNSString:(NSString *)aName
                     withNSString:(NSString *)type
                     withNSString:(NSString *)mode
                     withNSString:(NSString *)value;

- (void)internalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)value;

- (void)externalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtDeclHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtDeclHandler)

#endif // _OrgXmlSaxExtDeclHandler_H_