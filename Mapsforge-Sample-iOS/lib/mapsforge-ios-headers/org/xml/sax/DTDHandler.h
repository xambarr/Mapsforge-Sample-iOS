//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/DTDHandler.java
//

#ifndef _OrgXmlSaxDTDHandler_H_
#define _OrgXmlSaxDTDHandler_H_

#include "J2ObjC_header.h"

@protocol OrgXmlSaxDTDHandler < NSObject, JavaObject >

- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxDTDHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxDTDHandler)

#endif // _OrgXmlSaxDTDHandler_H_
