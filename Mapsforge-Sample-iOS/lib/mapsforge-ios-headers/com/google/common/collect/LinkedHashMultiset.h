//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/LinkedHashMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectLinkedHashMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectLinkedHashMultiset_RESTRICT
#define ComGoogleCommonCollectLinkedHashMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectLinkedHashMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectLinkedHashMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectLinkedHashMultiset_) && (ComGoogleCommonCollectLinkedHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectLinkedHashMultiset_INCLUDE)
#define _ComGoogleCommonCollectLinkedHashMultiset_

#define ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultiset.h"

@protocol JavaLangIterable;

@interface ComGoogleCommonCollectLinkedHashMultiset : ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma mark Public

+ (ComGoogleCommonCollectLinkedHashMultiset *)create;

+ (ComGoogleCommonCollectLinkedHashMultiset *)createWithInt:(jint)distinctElements;

+ (ComGoogleCommonCollectLinkedHashMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedHashMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultiset *ComGoogleCommonCollectLinkedHashMultiset_create();

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultiset *ComGoogleCommonCollectLinkedHashMultiset_createWithInt_(jint distinctElements);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultiset *ComGoogleCommonCollectLinkedHashMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedHashMultiset)

#endif
#pragma pop_macro("ComGoogleCommonCollectLinkedHashMultiset_INCLUDE_ALL")
