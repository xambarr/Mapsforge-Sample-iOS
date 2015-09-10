//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/UncheckedExecutionException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentUncheckedExecutionException_RESTRICT
#define ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentUncheckedExecutionException_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentUncheckedExecutionException_) && (ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE_ALL || ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE)
#define _ComGoogleCommonUtilConcurrentUncheckedExecutionException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentUncheckedExecutionException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Protected

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUncheckedExecutionException)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_init(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_withJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedExecutionException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedExecutionException *new_ComGoogleCommonUtilConcurrentUncheckedExecutionException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncheckedExecutionException)

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE_ALL")
