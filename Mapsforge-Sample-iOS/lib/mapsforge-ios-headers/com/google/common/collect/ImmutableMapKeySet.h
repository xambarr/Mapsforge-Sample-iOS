//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ImmutableMapKeySet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableMapKeySet_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableMapKeySet_RESTRICT
#define ComGoogleCommonCollectImmutableMapKeySet_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableMapKeySet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMapKeySet_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableMapKeySet_) && (ComGoogleCommonCollectImmutableMapKeySet_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapKeySet_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapKeySet_

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

@interface ComGoogleCommonCollectImmutableMapKeySet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (jboolean)isPartialView;

- (id)writeReplace;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMapKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapKeySet_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMapKeySet *self, ComGoogleCommonCollectImmutableMap *map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMapKeySet *new_ComGoogleCommonCollectImmutableMapKeySet_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *map) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMapKeySet)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMapKeySet_KeySetSerializedForm_) && (ComGoogleCommonCollectImmutableMapKeySet_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapKeySet_KeySetSerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapKeySet_KeySetSerializedForm_

#endif

#if !defined (_ComGoogleCommonCollectImmutableMapKeySet_$1_) && (ComGoogleCommonCollectImmutableMapKeySet_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapKeySet_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapKeySet_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectImmutableMapKeySet_INCLUDE_ALL")
