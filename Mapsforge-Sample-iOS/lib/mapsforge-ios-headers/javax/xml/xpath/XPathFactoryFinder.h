//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathFactoryFinder.java
//

#ifndef _JavaxXmlXpathXPathFactoryFinder_H_
#define _JavaxXmlXpathXPathFactoryFinder_H_

#include "J2ObjC_header.h"

@class JavaLangClassLoader;
@class JavaxXmlXpathXPathFactory;

@interface JavaxXmlXpathXPathFactoryFinder : NSObject

#pragma mark Public

- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

- (JavaxXmlXpathXPathFactory *)newFactoryWithNSString:(NSString *)uri OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (JavaxXmlXpathXPathFactory *)createInstanceWithNSString:(NSString *)className_;

@end

J2OBJC_STATIC_INIT(JavaxXmlXpathXPathFactoryFinder)

FOUNDATION_EXPORT void JavaxXmlXpathXPathFactoryFinder_initWithJavaLangClassLoader_(JavaxXmlXpathXPathFactoryFinder *self, JavaLangClassLoader *loader);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactoryFinder *new_JavaxXmlXpathXPathFactoryFinder_initWithJavaLangClassLoader_(JavaLangClassLoader *loader) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathFactoryFinder)

#endif // _JavaxXmlXpathXPathFactoryFinder_H_
