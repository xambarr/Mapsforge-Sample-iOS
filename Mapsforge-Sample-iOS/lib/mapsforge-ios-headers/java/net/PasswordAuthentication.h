//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PasswordAuthentication.java
//

#ifndef _JavaNetPasswordAuthentication_H_
#define _JavaNetPasswordAuthentication_H_

#include "J2ObjC_header.h"

@class IOSCharArray;

@interface JavaNetPasswordAuthentication : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)userName
                   withCharArray:(IOSCharArray *)password;

- (IOSCharArray *)getPassword;

- (NSString *)getUserName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPasswordAuthentication)

FOUNDATION_EXPORT void JavaNetPasswordAuthentication_initWithNSString_withCharArray_(JavaNetPasswordAuthentication *self, NSString *userName, IOSCharArray *password);

FOUNDATION_EXPORT JavaNetPasswordAuthentication *new_JavaNetPasswordAuthentication_initWithNSString_withCharArray_(NSString *userName, IOSCharArray *password) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPasswordAuthentication)

#endif // _JavaNetPasswordAuthentication_H_
