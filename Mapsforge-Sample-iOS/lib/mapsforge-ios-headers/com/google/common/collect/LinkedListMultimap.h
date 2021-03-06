//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/LinkedListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectLinkedListMultimap_RESTRICT
#define ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectLinkedListMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_

#define ComGoogleCommonCollectListMultimap_RESTRICT 1
#define ComGoogleCommonCollectListMultimap_INCLUDE 1
#include "com/google/common/collect/ListMultimap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectLinkedListMultimap : NSObject < ComGoogleCommonCollectListMultimap, JavaIoSerializable >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (void)clear;

- (jboolean)containsEntryWithId:(id)key
                         withId:(id)value;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectLinkedListMultimap *)create;

+ (ComGoogleCommonCollectLinkedListMultimap *)createWithInt:(jint)expectedKeys;

+ (ComGoogleCommonCollectLinkedListMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilList>)entries;

- (jboolean)isEqual:(id)other;

- (id<JavaUtilList>)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<ComGoogleCommonCollectMultiset>)keys;

- (id<JavaUtilSet>)keySet;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id<JavaUtilList>)removeAllWithId:(id)key;

- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

- (jint)size;

- (NSString *)description;

- (id<JavaUtilList>)values;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedListMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_createWithInt_(jint expectedKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT void ComGoogleCommonCollectLinkedListMultimap_init(ComGoogleCommonCollectLinkedListMultimap *self);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *new_ComGoogleCommonCollectLinkedListMultimap_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedListMultimap)

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_Node_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_Node_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_Node_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_KeyList_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_KeyList_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_KeyList_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_NodeIterator_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_NodeIterator_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_NodeIterator_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_DistinctKeyIterator_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_DistinctKeyIterator_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_DistinctKeyIterator_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_ValueForKeyIterator_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_ValueForKeyIterator_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_ValueForKeyIterator_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapList_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapList_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapList_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapKeySet_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapKeySet_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapKeySet_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_MultisetView_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_MultisetView_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_MultisetView_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_MultisetView_$1_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_MultisetView_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_MultisetView_$1_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_MultisetView_$1_$1_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_MultisetView_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_MultisetView_$1_$1_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_MultisetView_$2_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_MultisetView_$2_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_MultisetView_$2_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapValues_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapValues_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapValues_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapValues_$1_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapValues_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapValues_$1_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapEntries_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapEntries_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapEntries_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapEntries_$1_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapEntries_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapEntries_$1_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_$1_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_$1_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_$1_$1_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_1LinkedListMultimapAsMap_$1_$1_

#endif

#if !defined (_ComGoogleCommonCollectLinkedListMultimap_$1_) && (ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedListMultimap_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedListMultimap_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectLinkedListMultimap_INCLUDE_ALL")
