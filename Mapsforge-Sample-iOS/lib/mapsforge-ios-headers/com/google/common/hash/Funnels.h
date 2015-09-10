//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/hash/Funnels.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashFunnels_INCLUDE_ALL")
#if ComGoogleCommonHashFunnels_RESTRICT
#define ComGoogleCommonHashFunnels_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashFunnels_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashFunnels_RESTRICT

#if !defined (_ComGoogleCommonHashFunnels_) && (ComGoogleCommonHashFunnels_INCLUDE_ALL || ComGoogleCommonHashFunnels_INCLUDE)
#define _ComGoogleCommonHashFunnels_

@class JavaIoOutputStream;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashPrimitiveSink;

@interface ComGoogleCommonHashFunnels : NSObject

#pragma mark Public

+ (JavaIoOutputStream *)asOutputStreamWithComGoogleCommonHashPrimitiveSink:(id<ComGoogleCommonHashPrimitiveSink>)sink;

+ (id<ComGoogleCommonHashFunnel>)byteArrayFunnel;

+ (id<ComGoogleCommonHashFunnel>)integerFunnel;

+ (id<ComGoogleCommonHashFunnel>)longFunnel;

+ (id<ComGoogleCommonHashFunnel>)stringFunnel;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashFunnels)

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_byteArrayFunnel();

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_stringFunnel();

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_integerFunnel();

FOUNDATION_EXPORT id<ComGoogleCommonHashFunnel> ComGoogleCommonHashFunnels_longFunnel();

FOUNDATION_EXPORT JavaIoOutputStream *ComGoogleCommonHashFunnels_asOutputStreamWithComGoogleCommonHashPrimitiveSink_(id<ComGoogleCommonHashPrimitiveSink> sink);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashFunnels)

#endif

#if !defined (_ComGoogleCommonHashFunnels_ByteArrayFunnelEnum_) && (ComGoogleCommonHashFunnels_INCLUDE_ALL || ComGoogleCommonHashFunnels_ByteArrayFunnelEnum_INCLUDE)
#define _ComGoogleCommonHashFunnels_ByteArrayFunnelEnum_

#endif

#if !defined (_ComGoogleCommonHashFunnels_StringFunnelEnum_) && (ComGoogleCommonHashFunnels_INCLUDE_ALL || ComGoogleCommonHashFunnels_StringFunnelEnum_INCLUDE)
#define _ComGoogleCommonHashFunnels_StringFunnelEnum_

#endif

#if !defined (_ComGoogleCommonHashFunnels_IntegerFunnelEnum_) && (ComGoogleCommonHashFunnels_INCLUDE_ALL || ComGoogleCommonHashFunnels_IntegerFunnelEnum_INCLUDE)
#define _ComGoogleCommonHashFunnels_IntegerFunnelEnum_

#endif

#if !defined (_ComGoogleCommonHashFunnels_LongFunnelEnum_) && (ComGoogleCommonHashFunnels_INCLUDE_ALL || ComGoogleCommonHashFunnels_LongFunnelEnum_INCLUDE)
#define _ComGoogleCommonHashFunnels_LongFunnelEnum_

#endif

#if !defined (_ComGoogleCommonHashFunnels_SinkAsStream_) && (ComGoogleCommonHashFunnels_INCLUDE_ALL || ComGoogleCommonHashFunnels_SinkAsStream_INCLUDE)
#define _ComGoogleCommonHashFunnels_SinkAsStream_

#endif
#pragma pop_macro("ComGoogleCommonHashFunnels_INCLUDE_ALL")
