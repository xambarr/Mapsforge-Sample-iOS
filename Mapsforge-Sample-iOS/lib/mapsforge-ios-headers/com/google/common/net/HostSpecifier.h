//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/net/HostSpecifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonNetHostSpecifier_INCLUDE_ALL")
#if ComGoogleCommonNetHostSpecifier_RESTRICT
#define ComGoogleCommonNetHostSpecifier_INCLUDE_ALL 0
#else
#define ComGoogleCommonNetHostSpecifier_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonNetHostSpecifier_RESTRICT

#if !defined (_ComGoogleCommonNetHostSpecifier_) && (ComGoogleCommonNetHostSpecifier_INCLUDE_ALL || ComGoogleCommonNetHostSpecifier_INCLUDE)
#define _ComGoogleCommonNetHostSpecifier_

@interface ComGoogleCommonNetHostSpecifier : NSObject

#pragma mark Public

- (jboolean)isEqual:(id)other;

+ (ComGoogleCommonNetHostSpecifier *)fromWithNSString:(NSString *)specifier;

+ (ComGoogleCommonNetHostSpecifier *)fromValidWithNSString:(NSString *)specifier;

- (NSUInteger)hash;

+ (jboolean)isValidWithNSString:(NSString *)specifier;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonNetHostSpecifier)

FOUNDATION_EXPORT ComGoogleCommonNetHostSpecifier *ComGoogleCommonNetHostSpecifier_fromValidWithNSString_(NSString *specifier);

FOUNDATION_EXPORT ComGoogleCommonNetHostSpecifier *ComGoogleCommonNetHostSpecifier_fromWithNSString_(NSString *specifier);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetHostSpecifier_isValidWithNSString_(NSString *specifier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetHostSpecifier)

#endif
#pragma pop_macro("ComGoogleCommonNetHostSpecifier_INCLUDE_ALL")
