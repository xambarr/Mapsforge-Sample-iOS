//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/cache/ForwardingLoadingCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheForwardingLoadingCache_INCLUDE_ALL")
#if ComGoogleCommonCacheForwardingLoadingCache_RESTRICT
#define ComGoogleCommonCacheForwardingLoadingCache_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheForwardingLoadingCache_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheForwardingLoadingCache_RESTRICT
#if ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_INCLUDE
#define ComGoogleCommonCacheForwardingLoadingCache_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCacheForwardingLoadingCache_) && (ComGoogleCommonCacheForwardingLoadingCache_INCLUDE_ALL || ComGoogleCommonCacheForwardingLoadingCache_INCLUDE)
#define _ComGoogleCommonCacheForwardingLoadingCache_

#define ComGoogleCommonCacheForwardingCache_RESTRICT 1
#define ComGoogleCommonCacheForwardingCache_INCLUDE 1
#include "com/google/common/cache/ForwardingCache.h"

#define ComGoogleCommonCacheLoadingCache_RESTRICT 1
#define ComGoogleCommonCacheLoadingCache_INCLUDE 1
#include "com/google/common/cache/LoadingCache.h"

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;

@interface ComGoogleCommonCacheForwardingLoadingCache : ComGoogleCommonCacheForwardingCache < ComGoogleCommonCacheLoadingCache >

#pragma mark Public

- (id)applyWithId:(id)key;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableMap *)getAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)getUncheckedWithId:(id)key;

- (void)refreshWithId:(id)key;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonCacheLoadingCache>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheForwardingLoadingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheForwardingLoadingCache_init(ComGoogleCommonCacheForwardingLoadingCache *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheForwardingLoadingCache)

#endif

#if !defined (_ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_) && (ComGoogleCommonCacheForwardingLoadingCache_INCLUDE_ALL || ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_INCLUDE)
#define _ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_

@protocol ComGoogleCommonCacheLoadingCache;

@interface ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache : ComGoogleCommonCacheForwardingLoadingCache

#pragma mark Protected

- (instancetype)initWithComGoogleCommonCacheLoadingCache:(id<ComGoogleCommonCacheLoadingCache>)delegate;

- (id<ComGoogleCommonCacheLoadingCache>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache_initWithComGoogleCommonCacheLoadingCache_(ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache *self, id<ComGoogleCommonCacheLoadingCache> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheForwardingLoadingCache_SimpleForwardingLoadingCache)

#endif
#pragma pop_macro("ComGoogleCommonCacheForwardingLoadingCache_INCLUDE_ALL")