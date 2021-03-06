//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/RegularImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularImmutableTable_RESTRICT
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableTable_RESTRICT
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_CellSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_CellSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_

#define ComGoogleCommonCollectImmutableTable_RESTRICT 1
#define ComGoogleCommonCollectImmutableTable_INCLUDE 1
#include "com/google/common/collect/ImmutableTable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableSet;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectRegularImmutableTable : ComGoogleCommonCollectImmutableTable

#pragma mark Public

- (ComGoogleCommonCollectImmutableSet *)cellSet;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)isEmpty;

- (jint)size;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

+ (ComGoogleCommonCollectRegularImmutableTable *)forCellsWithJavaLangIterable:(id<JavaLangIterable>)cells;

+ (ComGoogleCommonCollectRegularImmutableTable *)forCellsWithJavaUtilList:(id<JavaUtilList>)cells
                                                   withJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                                                   withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable)

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable *ComGoogleCommonCollectRegularImmutableTable_forCellsWithJavaUtilList_withJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilList> cells, id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable *ComGoogleCommonCollectRegularImmutableTable_forCellsWithJavaLangIterable_(id<JavaLangIterable> cells);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_CellSet_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_CellSet_

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectRegularImmutableTable;

@interface ComGoogleCommonCollectRegularImmutableTable_CellSet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable:(ComGoogleCommonCollectRegularImmutableTable *)outer$;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_CellSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableTable_CellSet_initWithComGoogleCommonCollectRegularImmutableTable_(ComGoogleCommonCollectRegularImmutableTable_CellSet *self, ComGoogleCommonCollectRegularImmutableTable *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_CellSet)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;

@interface ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable : ComGoogleCommonCollectRegularImmutableTable

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)cellList
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)rowSpace
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)columnSpace;

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable *self, ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable *new_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_1SparseImmutableTableValues_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_1SparseImmutableTableValues_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_1SparseImmutableTableValues_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable;
@class ComGoogleCommonCollectUnmodifiableIterator;

@interface ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet : ComGoogleCommonCollectRegularImmutableTable_CellSet

#pragma mark Public

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable *)outer$;

- (ComGoogleCommonCollectImmutableList *)createAsList;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_initWithComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet *self, ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet *new_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_initWithComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetFull_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetFull_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetFull_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetFull_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetFull_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetFull_$1_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetNotFull_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetNotFull_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetNotFull_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetNotFull_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetNotFull_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_1ImmutableArrayMapEntrySetNotFull_$1_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;

@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable : ComGoogleCommonCollectRegularImmutableTable

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)cellList
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)rowSpace
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)columnSpace;

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *self, ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *new_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_1DenseImmutableTableValues_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_1DenseImmutableTableValues_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_1DenseImmutableTableValues_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable;
@class ComGoogleCommonCollectUnmodifiableIterator;

@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet : ComGoogleCommonCollectRegularImmutableTable_CellSet

#pragma mark Public

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *)outer$;

- (ComGoogleCommonCollectImmutableList *)createAsList;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet *self, ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet *new_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet)

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1_

#endif

#if !defined (_ComGoogleCommonCollectRegularImmutableTable_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL")
