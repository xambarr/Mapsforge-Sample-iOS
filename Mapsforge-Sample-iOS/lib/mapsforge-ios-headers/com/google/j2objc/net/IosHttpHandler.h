//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/net/IosHttpHandler.java
//

#ifndef _ComGoogleJ2objcNetIosHttpHandler_H_
#define _ComGoogleJ2objcNetIosHttpHandler_H_

#include "J2ObjC_header.h"
#include "java/net/URLStreamHandler.h"

@class JavaNetURL;
@class JavaNetURLConnection;

@interface ComGoogleJ2objcNetIosHttpHandler : JavaNetURLStreamHandler

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (jint)getDefaultPort;

- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)url;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcNetIosHttpHandler)

FOUNDATION_EXPORT void ComGoogleJ2objcNetIosHttpHandler_init(ComGoogleJ2objcNetIosHttpHandler *self);

FOUNDATION_EXPORT ComGoogleJ2objcNetIosHttpHandler *new_ComGoogleJ2objcNetIosHttpHandler_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcNetIosHttpHandler)

#endif // _ComGoogleJ2objcNetIosHttpHandler_H_
