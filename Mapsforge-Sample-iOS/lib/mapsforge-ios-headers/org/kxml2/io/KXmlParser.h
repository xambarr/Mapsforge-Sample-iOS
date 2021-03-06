//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/kxml2/io/KXmlParser.java
//

#ifndef _OrgKxml2IoKXmlParser_H_
#define _OrgKxml2IoKXmlParser_H_

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/lang/Enum.h"
#include "org/xmlpull/v1/XmlPullParser.h"

@class IOSCharArray;
@class IOSIntArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class LibcoreInternalStringPool;

@interface OrgKxml2IoKXmlParser : NSObject < OrgXmlpullV1XmlPullParser, JavaIoCloseable > {
 @public
  LibcoreInternalStringPool *stringPool_;
}

#pragma mark Public

- (instancetype)init;

- (void)close;

- (void)defineEntityReplacementTextWithNSString:(NSString *)entity
                                   withNSString:(NSString *)value;

- (jint)getAttributeCount;

- (NSString *)getAttributeNameWithInt:(jint)index;

- (NSString *)getAttributeNamespaceWithInt:(jint)index;

- (NSString *)getAttributePrefixWithInt:(jint)index;

- (NSString *)getAttributeTypeWithInt:(jint)index;

- (NSString *)getAttributeValueWithInt:(jint)index;

- (NSString *)getAttributeValueWithNSString:(NSString *)namespace_
                               withNSString:(NSString *)name;

- (jint)getColumnNumber;

- (jint)getDepth;

- (jint)getEventType;

- (jboolean)getFeatureWithNSString:(NSString *)feature;

- (NSString *)getInputEncoding;

- (jint)getLineNumber;

- (NSString *)getName;

- (NSString *)getNamespace;

- (NSString *)getNamespaceWithNSString:(NSString *)prefix;

- (jint)getNamespaceCountWithInt:(jint)depth;

- (NSString *)getNamespacePrefixWithInt:(jint)pos;

- (NSString *)getNamespaceUriWithInt:(jint)pos;

- (NSString *)getPositionDescription;

- (NSString *)getPrefix;

- (id)getPropertyWithNSString:(NSString *)property;

- (NSString *)getPublicId;

- (NSString *)getRootElementName;

- (NSString *)getSystemId;

- (NSString *)getText;

- (IOSCharArray *)getTextCharactersWithIntArray:(IOSIntArray *)poslen;

- (jboolean)isAttributeDefaultWithInt:(jint)index;

- (jboolean)isEmptyElementTag;

- (jboolean)isWhitespace;

- (void)keepNamespaceAttributes;

- (jint)next;

- (jint)nextTag;

- (NSString *)nextText;

- (jint)nextToken;

- (void)requireWithInt:(jint)type
          withNSString:(NSString *)namespace_
          withNSString:(NSString *)name;

- (void)setFeatureWithNSString:(NSString *)feature
                   withBoolean:(jboolean)value;

- (void)setInputWithJavaIoInputStream:(JavaIoInputStream *)is
                         withNSString:(NSString *)charset;

- (void)setInputWithJavaIoReader:(JavaIoReader *)reader;

- (void)setPropertyWithNSString:(NSString *)property
                         withId:(id)value;

@end

J2OBJC_STATIC_INIT(OrgKxml2IoKXmlParser)

J2OBJC_FIELD_SETTER(OrgKxml2IoKXmlParser, stringPool_, LibcoreInternalStringPool *)

FOUNDATION_EXPORT void OrgKxml2IoKXmlParser_init(OrgKxml2IoKXmlParser *self);

FOUNDATION_EXPORT OrgKxml2IoKXmlParser *new_OrgKxml2IoKXmlParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgKxml2IoKXmlParser)

typedef NS_ENUM(NSUInteger, OrgKxml2IoKXmlParser_ValueContext) {
  OrgKxml2IoKXmlParser_ValueContext_ATTRIBUTE = 0,
  OrgKxml2IoKXmlParser_ValueContext_TEXT = 1,
  OrgKxml2IoKXmlParser_ValueContext_ENTITY_DECLARATION = 2,
};

@interface OrgKxml2IoKXmlParser_ValueContextEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *OrgKxml2IoKXmlParser_ValueContextEnum_values();

+ (OrgKxml2IoKXmlParser_ValueContextEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT OrgKxml2IoKXmlParser_ValueContextEnum *OrgKxml2IoKXmlParser_ValueContextEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgKxml2IoKXmlParser_ValueContextEnum)

FOUNDATION_EXPORT OrgKxml2IoKXmlParser_ValueContextEnum *OrgKxml2IoKXmlParser_ValueContextEnum_values_[];

#define OrgKxml2IoKXmlParser_ValueContextEnum_ATTRIBUTE OrgKxml2IoKXmlParser_ValueContextEnum_values_[OrgKxml2IoKXmlParser_ValueContext_ATTRIBUTE]
J2OBJC_ENUM_CONSTANT_GETTER(OrgKxml2IoKXmlParser_ValueContextEnum, ATTRIBUTE)

#define OrgKxml2IoKXmlParser_ValueContextEnum_TEXT OrgKxml2IoKXmlParser_ValueContextEnum_values_[OrgKxml2IoKXmlParser_ValueContext_TEXT]
J2OBJC_ENUM_CONSTANT_GETTER(OrgKxml2IoKXmlParser_ValueContextEnum, TEXT)

#define OrgKxml2IoKXmlParser_ValueContextEnum_ENTITY_DECLARATION OrgKxml2IoKXmlParser_ValueContextEnum_values_[OrgKxml2IoKXmlParser_ValueContext_ENTITY_DECLARATION]
J2OBJC_ENUM_CONSTANT_GETTER(OrgKxml2IoKXmlParser_ValueContextEnum, ENTITY_DECLARATION)

J2OBJC_TYPE_LITERAL_HEADER(OrgKxml2IoKXmlParser_ValueContextEnum)

@interface OrgKxml2IoKXmlParser_ContentSource : NSObject

#pragma mark Package-Private

- (instancetype)initWithOrgKxml2IoKXmlParser_ContentSource:(OrgKxml2IoKXmlParser_ContentSource *)next
                                             withCharArray:(IOSCharArray *)buffer
                                                   withInt:(jint)position
                                                   withInt:(jint)limit;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgKxml2IoKXmlParser_ContentSource)

FOUNDATION_EXPORT void OrgKxml2IoKXmlParser_ContentSource_initWithOrgKxml2IoKXmlParser_ContentSource_withCharArray_withInt_withInt_(OrgKxml2IoKXmlParser_ContentSource *self, OrgKxml2IoKXmlParser_ContentSource *next, IOSCharArray *buffer, jint position, jint limit);

FOUNDATION_EXPORT OrgKxml2IoKXmlParser_ContentSource *new_OrgKxml2IoKXmlParser_ContentSource_initWithOrgKxml2IoKXmlParser_ContentSource_withCharArray_withInt_withInt_(OrgKxml2IoKXmlParser_ContentSource *next, IOSCharArray *buffer, jint position, jint limit) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgKxml2IoKXmlParser_ContentSource)

#endif // _OrgKxml2IoKXmlParser_H_
