//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/RegularImmutableMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularImmutableMultiset_RESTRICT
#define ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularImmutableMultiset_) && (ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMultiset_

#define ComGoogleCommonCollectImmutableMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;

@interface ComGoogleCommonCollectRegularImmutableMultiset : ComGoogleCommonCollectImmutableMultiset

#pragma mark Public

- (jboolean)containsWithId:(id)element;

- (jint)countWithId:(id)element;

- (ComGoogleCommonCollectImmutableSet *)elementSet;

- (NSUInteger)hash;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                                   withInt:(jint)size;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableMultiset_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectRegularImmutableMultiset *self, ComGoogleCommonCollectImmutableMap *map, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMultiset *new_ComGoogleCommonCollectRegularImmutableMultiset_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectImmutableMap *map, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableMultiset)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableMultiset_EntrySet_) && (ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMultiset_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMultiset_EntrySet_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableMultiset_EntrySet_$1_) && (ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableMultiset_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableMultiset_EntrySet_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectRegularImmutableMultiset_INCLUDE_ALL")
