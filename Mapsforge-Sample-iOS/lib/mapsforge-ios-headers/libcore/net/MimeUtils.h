//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/net/MimeUtils.java
//

#ifndef _LibcoreNetMimeUtils_H_
#define _LibcoreNetMimeUtils_H_

#include "J2ObjC_header.h"

@interface LibcoreNetMimeUtils : NSObject

#pragma mark Public

+ (NSString *)guessExtensionFromMimeTypeWithNSString:(NSString *)mimeType;

+ (NSString *)guessMimeTypeFromExtensionWithNSString:(NSString *)extension;

+ (jboolean)hasExtensionWithNSString:(NSString *)extension;

+ (jboolean)hasMimeTypeWithNSString:(NSString *)mimeType;

@end

J2OBJC_STATIC_INIT(LibcoreNetMimeUtils)

FOUNDATION_EXPORT jboolean LibcoreNetMimeUtils_hasMimeTypeWithNSString_(NSString *mimeType);

FOUNDATION_EXPORT NSString *LibcoreNetMimeUtils_guessMimeTypeFromExtensionWithNSString_(NSString *extension);

FOUNDATION_EXPORT jboolean LibcoreNetMimeUtils_hasExtensionWithNSString_(NSString *extension);

FOUNDATION_EXPORT NSString *LibcoreNetMimeUtils_guessExtensionFromMimeTypeWithNSString_(NSString *mimeType);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreNetMimeUtils)

#endif // _LibcoreNetMimeUtils_H_
