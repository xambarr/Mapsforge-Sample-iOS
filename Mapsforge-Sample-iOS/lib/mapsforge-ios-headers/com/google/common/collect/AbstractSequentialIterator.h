//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/AbstractSequentialIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractSequentialIterator_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractSequentialIterator_RESTRICT
#define ComGoogleCommonCollectAbstractSequentialIterator_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractSequentialIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractSequentialIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractSequentialIterator_) && (ComGoogleCommonCollectAbstractSequentialIterator_INCLUDE_ALL || ComGoogleCommonCollectAbstractSequentialIterator_INCLUDE)
#define _ComGoogleCommonCollectAbstractSequentialIterator_

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"

@interface ComGoogleCommonCollectAbstractSequentialIterator : ComGoogleCommonCollectUnmodifiableIterator

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

#pragma mark Protected

- (instancetype)initWithId:(id)firstOrNull;

- (id)computeNextWithId:(id)previous;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSequentialIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSequentialIterator_initWithId_(ComGoogleCommonCollectAbstractSequentialIterator *self, id firstOrNull);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSequentialIterator)

#endif
#pragma pop_macro("ComGoogleCommonCollectAbstractSequentialIterator_INCLUDE_ALL")
