//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/xmlpull/v1/XmlPullParserFactory.java
//

#ifndef _OrgXmlpullV1XmlPullParserFactory_H_
#define _OrgXmlpullV1XmlPullParserFactory_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class JavaUtilArrayList;
@class JavaUtilHashMap;
@protocol OrgXmlpullV1XmlPullParser;
@protocol OrgXmlpullV1XmlSerializer;

@interface OrgXmlpullV1XmlPullParserFactory : NSObject {
 @public
  JavaUtilArrayList *parserClasses_;
  NSString *classNamesLocation_;
  JavaUtilArrayList *serializerClasses_;
  JavaUtilHashMap *features_;
}

#pragma mark Public

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

+ (OrgXmlpullV1XmlPullParserFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

+ (OrgXmlpullV1XmlPullParserFactory *)newInstanceWithNSString:(NSString *)classNames
                                                 withIOSClass:(IOSClass *)context OBJC_METHOD_FAMILY_NONE;

- (id<OrgXmlpullV1XmlPullParser>)newPullParser OBJC_METHOD_FAMILY_NONE;

- (id<OrgXmlpullV1XmlSerializer>)newSerializer OBJC_METHOD_FAMILY_NONE;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)state;

- (void)setNamespaceAwareWithBoolean:(jboolean)awareness;

- (void)setValidatingWithBoolean:(jboolean)validating;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(OrgXmlpullV1XmlPullParserFactory)

J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, parserClasses_, JavaUtilArrayList *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, classNamesLocation_, NSString *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, serializerClasses_, JavaUtilArrayList *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserFactory, features_, JavaUtilHashMap *)

FOUNDATION_EXPORT IOSClass *OrgXmlpullV1XmlPullParserFactory_referenceContextClass_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1XmlPullParserFactory, referenceContextClass_, IOSClass *)

FOUNDATION_EXPORT NSString *OrgXmlpullV1XmlPullParserFactory_PROPERTY_NAME_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1XmlPullParserFactory, PROPERTY_NAME_, NSString *)

FOUNDATION_EXPORT void OrgXmlpullV1XmlPullParserFactory_init(OrgXmlpullV1XmlPullParserFactory *self);

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserFactory *new_OrgXmlpullV1XmlPullParserFactory_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserFactory *OrgXmlpullV1XmlPullParserFactory_newInstance();

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserFactory *OrgXmlpullV1XmlPullParserFactory_newInstanceWithNSString_withIOSClass_(NSString *classNames, IOSClass *context);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlpullV1XmlPullParserFactory)

#endif // _OrgXmlpullV1XmlPullParserFactory_H_
