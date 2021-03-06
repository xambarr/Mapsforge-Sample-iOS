//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/EmptyImmutableList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectEmptyImmutableList_INCLUDE_ALL")
#if ComGoogleCommonCollectEmptyImmutableList_RESTRICT
#define ComGoogleCommonCollectEmptyImmutableList_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectEmptyImmutableList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyImmutableList_RESTRICT

#if !defined (_ComGoogleCommonCollectEmptyImmutableList_) && (ComGoogleCommonCollectEmptyImmutableList_INCLUDE_ALL || ComGoogleCommonCollectEmptyImmutableList_INCLUDE)
#define _ComGoogleCommonCollectEmptyImmutableList_

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSObjectArray;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectEmptyImmutableList : ComGoogleCommonCollectImmutableList

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)targets;

- (jboolean)isEqual:(id)object;

- (id)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)target;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)lastIndexOfWithId:(id)target;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIterator;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIteratorWithInt:(jint)start;

- (ComGoogleCommonCollectImmutableList *)reverse;

- (jint)size;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

#pragma mark Package-Private

- (jboolean)isPartialView;

- (id)readResolve;


@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableList)

FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableList *ComGoogleCommonCollectEmptyImmutableList_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEmptyImmutableList, INSTANCE_, ComGoogleCommonCollectEmptyImmutableList *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableList)

#endif
#pragma pop_macro("ComGoogleCommonCollectEmptyImmutableList_INCLUDE_ALL")
