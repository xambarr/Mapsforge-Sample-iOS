//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/util/concurrent/AsyncFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentAsyncFunction_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentAsyncFunction_RESTRICT
#define ComGoogleCommonUtilConcurrentAsyncFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentAsyncFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAsyncFunction_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentAsyncFunction_) && (ComGoogleCommonUtilConcurrentAsyncFunction_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAsyncFunction_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAsyncFunction_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol ComGoogleCommonUtilConcurrentAsyncFunction < NSObject, JavaObject >

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)applyWithId:(id)input;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAsyncFunction)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAsyncFunction)

#endif
#pragma pop_macro("ComGoogleCommonUtilConcurrentAsyncFunction_INCLUDE_ALL")
