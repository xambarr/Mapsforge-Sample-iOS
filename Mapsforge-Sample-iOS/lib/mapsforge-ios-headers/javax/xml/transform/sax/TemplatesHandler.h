//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/sax/TemplatesHandler.java
//

#ifndef _JavaxXmlTransformSaxTemplatesHandler_H_
#define _JavaxXmlTransformSaxTemplatesHandler_H_

#include "J2ObjC_header.h"
#include "org/xml/sax/ContentHandler.h"

@protocol JavaxXmlTransformTemplates;

@protocol JavaxXmlTransformSaxTemplatesHandler < OrgXmlSaxContentHandler, NSObject, JavaObject >

- (id<JavaxXmlTransformTemplates>)getTemplates;

- (void)setSystemIdWithNSString:(NSString *)systemID;

- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxTemplatesHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxTemplatesHandler)

#endif // _JavaxXmlTransformSaxTemplatesHandler_H_
