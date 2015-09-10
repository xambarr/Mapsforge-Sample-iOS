//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/SingletonImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSingletonImmutableTable_INCLUDE_ALL")
#if ComGoogleCommonCollectSingletonImmutableTable_RESTRICT
#define ComGoogleCommonCollectSingletonImmutableTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSingletonImmutableTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSingletonImmutableTable_RESTRICT

#if !defined (_ComGoogleCommonCollectSingletonImmutableTable_) && (ComGoogleCommonCollectSingletonImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectSingletonImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectSingletonImmutableTable_

#define ComGoogleCommonCollectImmutableTable_RESTRICT 1
#define ComGoogleCommonCollectImmutableTable_INCLUDE 1
#include "com/google/common/collect/ImmutableTable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@protocol ComGoogleCommonCollectTable_Cell;

@interface ComGoogleCommonCollectSingletonImmutableTable : ComGoogleCommonCollectImmutableTable

#pragma mark Public

- (ComGoogleCommonCollectImmutableSet *)cellSet;

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)isEqual:(id)obj;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jint)size;

- (NSString *)description;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectTable_Cell:(id<ComGoogleCommonCollectTable_Cell>)cell;

- (instancetype)initWithId:(id)rowKey
                    withId:(id)columnKey
                    withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableTable_initWithId_withId_withId_(ComGoogleCommonCollectSingletonImmutableTable *self, id rowKey, id columnKey, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableTable *new_ComGoogleCommonCollectSingletonImmutableTable_initWithId_withId_withId_(id rowKey, id columnKey, id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableTable_initWithComGoogleCommonCollectTable_Cell_(ComGoogleCommonCollectSingletonImmutableTable *self, id<ComGoogleCommonCollectTable_Cell> cell);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableTable *new_ComGoogleCommonCollectSingletonImmutableTable_initWithComGoogleCommonCollectTable_Cell_(id<ComGoogleCommonCollectTable_Cell> cell) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableTable)

#endif
#pragma pop_macro("ComGoogleCommonCollectSingletonImmutableTable_INCLUDE_ALL")
