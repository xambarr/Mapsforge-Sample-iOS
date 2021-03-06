//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/parsers/DocumentBuilderFactory.java
//

#ifndef _JavaxXmlParsersDocumentBuilderFactory_H_
#define _JavaxXmlParsersDocumentBuilderFactory_H_

#include "J2ObjC_header.h"

@class JavaLangClassLoader;
@class JavaxXmlParsersDocumentBuilder;
@class JavaxXmlValidationSchema;

@interface JavaxXmlParsersDocumentBuilderFactory : NSObject

#pragma mark Public

- (id)getAttributeWithNSString:(NSString *)name;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (JavaxXmlValidationSchema *)getSchema;

- (jboolean)isCoalescing;

- (jboolean)isExpandEntityReferences;

- (jboolean)isIgnoringComments;

- (jboolean)isIgnoringElementContentWhitespace;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (jboolean)isXIncludeAware;

- (JavaxXmlParsersDocumentBuilder *)newDocumentBuilder OBJC_METHOD_FAMILY_NONE;

+ (JavaxXmlParsersDocumentBuilderFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

+ (JavaxXmlParsersDocumentBuilderFactory *)newInstanceWithNSString:(NSString *)factoryClassName
                                           withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

- (void)setAttributeWithNSString:(NSString *)name
                          withId:(id)value;

- (void)setCoalescingWithBoolean:(jboolean)coalescing;

- (void)setExpandEntityReferencesWithBoolean:(jboolean)expandEntityRef;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (void)setIgnoringCommentsWithBoolean:(jboolean)ignoreComments;

- (void)setIgnoringElementContentWhitespaceWithBoolean:(jboolean)whitespace;

- (void)setNamespaceAwareWithBoolean:(jboolean)awareness;

- (void)setSchemaWithJavaxXmlValidationSchema:(JavaxXmlValidationSchema *)schema;

- (void)setValidatingWithBoolean:(jboolean)validating;

- (void)setXIncludeAwareWithBoolean:(jboolean)state;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersDocumentBuilderFactory)

FOUNDATION_EXPORT void JavaxXmlParsersDocumentBuilderFactory_init(JavaxXmlParsersDocumentBuilderFactory *self);

FOUNDATION_EXPORT JavaxXmlParsersDocumentBuilderFactory *JavaxXmlParsersDocumentBuilderFactory_newInstance();

FOUNDATION_EXPORT JavaxXmlParsersDocumentBuilderFactory *JavaxXmlParsersDocumentBuilderFactory_newInstanceWithNSString_withJavaLangClassLoader_(NSString *factoryClassName, JavaLangClassLoader *classLoader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersDocumentBuilderFactory)

#endif // _JavaxXmlParsersDocumentBuilderFactory_H_
