//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/AbstractIndexedListIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractIndexedListIterator_RESTRICT
#define ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractIndexedListIterator_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractIndexedListIterator_) && (ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE_ALL || ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE)
#define _ComGoogleCommonCollectAbstractIndexedListIterator_

#define ComGoogleCommonCollectUnmodifiableListIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableListIterator.h"

@interface ComGoogleCommonCollectAbstractIndexedListIterator : ComGoogleCommonCollectUnmodifiableListIterator

#pragma mark Public

- (jboolean)hasNext;

- (jboolean)hasPrevious;

- (id)next;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

#pragma mark Protected

- (instancetype)initWithInt:(jint)size;

- (instancetype)initWithInt:(jint)size
                    withInt:(jint)position;

- (id)getWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractIndexedListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractIndexedListIterator_initWithInt_(ComGoogleCommonCollectAbstractIndexedListIterator *self, jint size);

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractIndexedListIterator_initWithInt_withInt_(ComGoogleCommonCollectAbstractIndexedListIterator *self, jint size, jint position);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractIndexedListIterator)

#endif
#pragma pop_macro("ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE_ALL")