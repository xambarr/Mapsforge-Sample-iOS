//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/LinkedHashMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectLinkedHashMultimap_RESTRICT
#define ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectLinkedHashMultimap_RESTRICT
#if ComGoogleCommonCollectLinkedHashMultimap_ValueSet_INCLUDE
#define ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_INCLUDE 1
#endif
#if ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_INCLUDE
#define ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_

#define ComGoogleCommonCollectAbstractSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractSetMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractSetMultimap.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectLinkedHashMultimap_VALUE_SET_LOAD_FACTOR 1.0

@interface ComGoogleCommonCollectLinkedHashMultimap : ComGoogleCommonCollectAbstractSetMultimap {
 @public
  jint valueSetCapacity_;
}

#pragma mark Public

- (void)clear;

+ (ComGoogleCommonCollectLinkedHashMultimap *)create;

+ (ComGoogleCommonCollectLinkedHashMultimap *)createWithInt:(jint)expectedKeys
                                                    withInt:(jint)expectedValuesPerKey;

+ (ComGoogleCommonCollectLinkedHashMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilSet>)entries;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (id<JavaUtilSet>)createCollection;

- (id<JavaUtilCollection>)createCollectionWithId:(id)key;

- (id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedHashMultimap)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLinkedHashMultimap, VALUE_SET_LOAD_FACTOR, jdouble)

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap *ComGoogleCommonCollectLinkedHashMultimap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap *ComGoogleCommonCollectLinkedHashMultimap_createWithInt_withInt_(jint expectedKeys, jint expectedValuesPerKey);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap *ComGoogleCommonCollectLinkedHashMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedHashMultimap)

#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink_

@protocol ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink < NSObject, JavaObject >

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getPredecessorInValueSet;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getSuccessorInValueSet;

- (void)setPredecessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (void)setSuccessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink)

#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"

@protocol ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink;

@interface ComGoogleCommonCollectLinkedHashMultimap_ValueEntry : ComGoogleCommonCollectAbstractMapEntry < ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink > {
 @public
  id key_;
  id value_;
  jint valueHash_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *nextInValueSetHashRow_;
  id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink> predecessorInValueSet_;
  id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink> successorInValueSet_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *predecessorInMultimap_;
  ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *successorInMultimap_;
}

#pragma mark Public

- (id)getKey;

- (ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)getPredecessorInMultimap;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getPredecessorInValueSet;

- (ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)getSuccessorInMultimap;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getSuccessorInValueSet;

- (id)getValue;

- (void)setPredecessorInMultimapWithComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)multimapPredecessor;

- (void)setPredecessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (void)setSuccessorInMultimapWithComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)multimapSuccessor;

- (void)setSuccessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

#pragma mark Package-Private

- (instancetype)initWithId:(id)key
                    withId:(id)value
                   withInt:(jint)valueHash
withComGoogleCommonCollectLinkedHashMultimap_ValueEntry:(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)nextInValueSetHashRow;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, value_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, nextInValueSetHashRow_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, predecessorInValueSet_, id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, successorInValueSet_, id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, predecessorInMultimap_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry, successorInMultimap_, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *)

FOUNDATION_EXPORT void ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_initWithId_withId_withInt_withComGoogleCommonCollectLinkedHashMultimap_ValueEntry_(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *self, id key, id value, jint valueHash, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *nextInValueSetHashRow);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *new_ComGoogleCommonCollectLinkedHashMultimap_ValueEntry_initWithId_withId_withInt_withComGoogleCommonCollectLinkedHashMultimap_ValueEntry_(id key, id value, jint valueHash, ComGoogleCommonCollectLinkedHashMultimap_ValueEntry *nextInValueSetHashRow) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedHashMultimap_ValueEntry)

#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueSet_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueSet_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueSet_

#define ComGoogleCommonCollectSets_RESTRICT 1
#define ComGoogleCommonCollectSets_ImprovedAbstractSet_INCLUDE 1
#include "com/google/common/collect/Sets.h"

@class ComGoogleCommonCollectLinkedHashMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectLinkedHashMultimap_ValueSet : ComGoogleCommonCollectSets_ImprovedAbstractSet < ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink > {
 @public
  IOSObjectArray *hashTable_;
}

#pragma mark Public

- (jboolean)addWithId:(id)value;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getPredecessorInValueSet;

- (id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)getSuccessorInValueSet;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (void)setPredecessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (void)setSuccessorInValueSetWithComGoogleCommonCollectLinkedHashMultimap_ValueSetLink:(id<ComGoogleCommonCollectLinkedHashMultimap_ValueSetLink>)entry_;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectLinkedHashMultimap:(ComGoogleCommonCollectLinkedHashMultimap *)outer$
                                                          withId:(id)key
                                                         withInt:(jint)expectedValues;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedHashMultimap_ValueSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLinkedHashMultimap_ValueSet, hashTable_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectLinkedHashMultimap_ValueSet_initWithComGoogleCommonCollectLinkedHashMultimap_withId_withInt_(ComGoogleCommonCollectLinkedHashMultimap_ValueSet *self, ComGoogleCommonCollectLinkedHashMultimap *outer$, id key, jint expectedValues);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultimap_ValueSet *new_ComGoogleCommonCollectLinkedHashMultimap_ValueSet_initWithComGoogleCommonCollectLinkedHashMultimap_withId_withInt_(ComGoogleCommonCollectLinkedHashMultimap *outer$, id key, jint expectedValues) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedHashMultimap_ValueSet)

#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_ValueSet_$1_

#endif

#if !defined (_ComGoogleCommonCollectLinkedHashMultimap_$1_) && (ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultimap_$1_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultimap_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectLinkedHashMultimap_INCLUDE_ALL")
