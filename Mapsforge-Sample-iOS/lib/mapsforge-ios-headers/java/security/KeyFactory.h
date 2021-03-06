//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyFactory.java
//

#ifndef _JavaSecurityKeyFactory_H_
#define _JavaSecurityKeyFactory_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class JavaSecurityKeyFactorySpi;
@class JavaSecurityProvider;
@protocol JavaSecurityKey;
@protocol JavaSecurityPrivateKey;
@protocol JavaSecurityPublicKey;
@protocol JavaSecuritySpecKeySpec;

@interface JavaSecurityKeyFactory : NSObject

#pragma mark Public

- (id<JavaSecurityPrivateKey>)generatePrivateWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (id<JavaSecurityPublicKey>)generatePublicWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (NSString *)getAlgorithm;

+ (JavaSecurityKeyFactory *)getInstanceWithNSString:(NSString *)algorithm;

+ (JavaSecurityKeyFactory *)getInstanceWithNSString:(NSString *)algorithm
                           withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (JavaSecurityKeyFactory *)getInstanceWithNSString:(NSString *)algorithm
                                       withNSString:(NSString *)provider;

- (id)getKeySpecWithJavaSecurityKey:(id<JavaSecurityKey>)key
                       withIOSClass:(IOSClass *)keySpec;

- (JavaSecurityProvider *)getProvider;

- (id<JavaSecurityKey>)translateKeyWithJavaSecurityKey:(id<JavaSecurityKey>)key;

#pragma mark Protected

- (instancetype)initWithJavaSecurityKeyFactorySpi:(JavaSecurityKeyFactorySpi *)keyFacSpi
                         withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                     withNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaSecurityKeyFactory)

FOUNDATION_EXPORT void JavaSecurityKeyFactory_initWithJavaSecurityKeyFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityKeyFactory *self, JavaSecurityKeyFactorySpi *keyFacSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyFactory *new_JavaSecurityKeyFactory_initWithJavaSecurityKeyFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityKeyFactorySpi *keyFacSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyFactory *JavaSecurityKeyFactory_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyFactory *JavaSecurityKeyFactory_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityKeyFactory *JavaSecurityKeyFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyFactory)

#endif // _JavaSecurityKeyFactory_H_
