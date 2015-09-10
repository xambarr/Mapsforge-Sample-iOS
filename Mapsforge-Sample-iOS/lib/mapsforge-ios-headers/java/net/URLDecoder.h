//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLDecoder.java
//

#ifndef _JavaNetURLDecoder_H_
#define _JavaNetURLDecoder_H_

#include "J2ObjC_header.h"

@interface JavaNetURLDecoder : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSString *)decodeWithNSString:(NSString *)s;

+ (NSString *)decodeWithNSString:(NSString *)s
                    withNSString:(NSString *)charsetName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLDecoder)

FOUNDATION_EXPORT NSString *JavaNetURLDecoder_decodeWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *JavaNetURLDecoder_decodeWithNSString_withNSString_(NSString *s, NSString *charsetName);

FOUNDATION_EXPORT void JavaNetURLDecoder_init(JavaNetURLDecoder *self);

FOUNDATION_EXPORT JavaNetURLDecoder *new_JavaNetURLDecoder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLDecoder)

#endif // _JavaNetURLDecoder_H_
