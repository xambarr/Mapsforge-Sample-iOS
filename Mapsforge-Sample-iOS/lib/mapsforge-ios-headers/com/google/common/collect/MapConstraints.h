//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/MapConstraints.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectMapConstraints_INCLUDE_ALL")
#if ComGoogleCommonCollectMapConstraints_RESTRICT
#define ComGoogleCommonCollectMapConstraints_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectMapConstraints_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMapConstraints_RESTRICT
#if ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet_INCLUDE
#define ComGoogleCommonCollectMapConstraints_ConstrainedEntries_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_

@protocol ComGoogleCommonCollectBiMap;
@protocol ComGoogleCommonCollectListMultimap;
@protocol ComGoogleCommonCollectMapConstraint;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSetMultimap;
@protocol ComGoogleCommonCollectSortedSetMultimap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMapConstraints : NSObject

#pragma mark Public

+ (id<ComGoogleCommonCollectBiMap>)constrainedBiMapWithComGoogleCommonCollectBiMap:(id<ComGoogleCommonCollectBiMap>)map
                                           withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;

+ (id<ComGoogleCommonCollectListMultimap>)constrainedListMultimapWithComGoogleCommonCollectListMultimap:(id<ComGoogleCommonCollectListMultimap>)multimap
                                                                withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;

+ (id<JavaUtilMap>)constrainedMapWithJavaUtilMap:(id<JavaUtilMap>)map
         withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;

+ (id<ComGoogleCommonCollectMultimap>)constrainedMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap
                                                    withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;

+ (id<ComGoogleCommonCollectSetMultimap>)constrainedSetMultimapWithComGoogleCommonCollectSetMultimap:(id<ComGoogleCommonCollectSetMultimap>)multimap
                                                             withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;

+ (id<ComGoogleCommonCollectSortedSetMultimap>)constrainedSortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap:(id<ComGoogleCommonCollectSortedSetMultimap>)multimap
                                                                               withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;

+ (id<ComGoogleCommonCollectMapConstraint>)notNull;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapConstraints)

FOUNDATION_EXPORT id<ComGoogleCommonCollectMapConstraint> ComGoogleCommonCollectMapConstraints_notNull();

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonCollectMapConstraints_constrainedMapWithJavaUtilMap_withComGoogleCommonCollectMapConstraint_(id<JavaUtilMap> map, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT id<ComGoogleCommonCollectMultimap> ComGoogleCommonCollectMapConstraints_constrainedMultimapWithComGoogleCommonCollectMultimap_withComGoogleCommonCollectMapConstraint_(id<ComGoogleCommonCollectMultimap> multimap, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT id<ComGoogleCommonCollectListMultimap> ComGoogleCommonCollectMapConstraints_constrainedListMultimapWithComGoogleCommonCollectListMultimap_withComGoogleCommonCollectMapConstraint_(id<ComGoogleCommonCollectListMultimap> multimap, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSetMultimap> ComGoogleCommonCollectMapConstraints_constrainedSetMultimapWithComGoogleCommonCollectSetMultimap_withComGoogleCommonCollectMapConstraint_(id<ComGoogleCommonCollectSetMultimap> multimap, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT id<ComGoogleCommonCollectSortedSetMultimap> ComGoogleCommonCollectMapConstraints_constrainedSortedSetMultimapWithComGoogleCommonCollectSortedSetMultimap_withComGoogleCommonCollectMapConstraint_(id<ComGoogleCommonCollectSortedSetMultimap> multimap, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT id<ComGoogleCommonCollectBiMap> ComGoogleCommonCollectMapConstraints_constrainedBiMapWithComGoogleCommonCollectBiMap_withComGoogleCommonCollectMapConstraint_(id<ComGoogleCommonCollectBiMap> map, id<ComGoogleCommonCollectMapConstraint> constraint);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapConstraints)

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_NotNullMapConstraintEnum_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_NotNullMapConstraintEnum_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_NotNullMapConstraintEnum_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedMap_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedMap_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedMap_

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

@protocol ComGoogleCommonCollectMapConstraint;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectMapConstraints_ConstrainedMap : ComGoogleCommonCollectForwardingMap {
 @public
  id<ComGoogleCommonCollectMapConstraint> constraint_;
}

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)delegate
withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapConstraints_ConstrainedMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapConstraints_ConstrainedMap, constraint_, id<ComGoogleCommonCollectMapConstraint>)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapConstraints_ConstrainedMap_initWithJavaUtilMap_withComGoogleCommonCollectMapConstraint_(ComGoogleCommonCollectMapConstraints_ConstrainedMap *self, id<JavaUtilMap> delegate, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT ComGoogleCommonCollectMapConstraints_ConstrainedMap *new_ComGoogleCommonCollectMapConstraints_ConstrainedMap_initWithJavaUtilMap_withComGoogleCommonCollectMapConstraint_(id<JavaUtilMap> delegate, id<ComGoogleCommonCollectMapConstraint> constraint) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapConstraints_ConstrainedMap)

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedBiMap_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedBiMap_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedBiMap_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_InverseConstraint_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_InverseConstraint_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_InverseConstraint_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_1ConstrainedMultimapAsMap_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_1ConstrainedMultimapAsMap_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_1ConstrainedMultimapAsMap_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_$1_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_$1_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedMultimap_$1_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedAsMapValues_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedAsMapValues_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedAsMapValues_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedAsMapValues_$1_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedAsMapValues_$1_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedAsMapValues_$1_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedEntries_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedEntries_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedEntries_

#define ComGoogleCommonCollectForwardingCollection_RESTRICT 1
#define ComGoogleCommonCollectForwardingCollection_INCLUDE 1
#include "com/google/common/collect/ForwardingCollection.h"

@interface ComGoogleCommonCollectMapConstraints_ConstrainedEntries : ComGoogleCommonCollectForwardingCollection

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapConstraints_ConstrainedEntries)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapConstraints_ConstrainedEntries)

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedEntries_$1_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedEntries_$1_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedEntries_$1_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet_

#define JavaUtilSet_RESTRICT 1
#define JavaUtilSet_INCLUDE 1
#include "java/util/Set.h"

@protocol ComGoogleCommonCollectMapConstraint;

@interface ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet : ComGoogleCommonCollectMapConstraints_ConstrainedEntries < JavaUtilSet >

#pragma mark Public

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)entries
withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet_initWithJavaUtilSet_withComGoogleCommonCollectMapConstraint_(ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet *self, id<JavaUtilSet> entries, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet *new_ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet_initWithJavaUtilSet_withComGoogleCommonCollectMapConstraint_(id<JavaUtilSet> entries, id<ComGoogleCommonCollectMapConstraint> constraint) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapConstraints_ConstrainedEntrySet)

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSet.h"

@class IOSObjectArray;
@protocol ComGoogleCommonCollectMapConstraint;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries : ComGoogleCommonCollectForwardingSet

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Protected

- (id<JavaUtilSet>)delegate;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)entries
withComGoogleCommonCollectMapConstraint:(id<ComGoogleCommonCollectMapConstraint>)constraint;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_initWithJavaUtilSet_withComGoogleCommonCollectMapConstraint_(ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries *self, id<JavaUtilSet> entries, id<ComGoogleCommonCollectMapConstraint> constraint);

FOUNDATION_EXPORT ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries *new_ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_initWithJavaUtilSet_withComGoogleCommonCollectMapConstraint_(id<JavaUtilSet> entries, id<ComGoogleCommonCollectMapConstraint> constraint) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries)

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_$1_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_$1_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedAsMapEntries_$1_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedListMultimap_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedListMultimap_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedListMultimap_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedSetMultimap_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedSetMultimap_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_ConstrainedSortedSetMultimap_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_ConstrainedSortedSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_ConstrainedSortedSetMultimap_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_$1_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_$1_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_$1_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_$2_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_$2_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_$2_

#endif

#if !defined (_ComGoogleCommonCollectMapConstraints_$2_$1_) && (ComGoogleCommonCollectMapConstraints_INCLUDE_ALL || ComGoogleCommonCollectMapConstraints_$2_$1_INCLUDE)
#define _ComGoogleCommonCollectMapConstraints_$2_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectMapConstraints_INCLUDE_ALL")
