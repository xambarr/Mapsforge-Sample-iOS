//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/LocatorImpl.java
//

#ifndef _OrgXmlSaxHelpersLocatorImpl_H_
#define _OrgXmlSaxHelpersLocatorImpl_H_

#include "J2ObjC_header.h"
#include "org/xml/sax/Locator.h"

@interface OrgXmlSaxHelpersLocatorImpl : NSObject < OrgXmlSaxLocator >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

- (jint)getColumnNumber;

- (jint)getLineNumber;

- (NSString *)getPublicId;

- (NSString *)getSystemId;

- (void)setColumnNumberWithInt:(jint)columnNumber;

- (void)setLineNumberWithInt:(jint)lineNumber;

- (void)setPublicIdWithNSString:(NSString *)publicId;

- (void)setSystemIdWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersLocatorImpl)

FOUNDATION_EXPORT void OrgXmlSaxHelpersLocatorImpl_init(OrgXmlSaxHelpersLocatorImpl *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersLocatorImpl *new_OrgXmlSaxHelpersLocatorImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlSaxHelpersLocatorImpl_initWithOrgXmlSaxLocator_(OrgXmlSaxHelpersLocatorImpl *self, id<OrgXmlSaxLocator> locator);

FOUNDATION_EXPORT OrgXmlSaxHelpersLocatorImpl *new_OrgXmlSaxHelpersLocatorImpl_initWithOrgXmlSaxLocator_(id<OrgXmlSaxLocator> locator) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersLocatorImpl)

#endif // _OrgXmlSaxHelpersLocatorImpl_H_
