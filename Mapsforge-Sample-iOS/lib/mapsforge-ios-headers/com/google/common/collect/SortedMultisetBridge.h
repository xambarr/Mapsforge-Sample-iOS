//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/SortedMultisetBridge.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSortedMultisetBridge_INCLUDE_ALL")
#if ComGoogleCommonCollectSortedMultisetBridge_RESTRICT
#define ComGoogleCommonCollectSortedMultisetBridge_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSortedMultisetBridge_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSortedMultisetBridge_RESTRICT

#if !defined (_ComGoogleCommonCollectSortedMultisetBridge_) && (ComGoogleCommonCollectSortedMultisetBridge_INCLUDE_ALL || ComGoogleCommonCollectSortedMultisetBridge_INCLUDE)
#define _ComGoogleCommonCollectSortedMultisetBridge_

#define ComGoogleCommonCollectMultiset_RESTRICT 1
#define ComGoogleCommonCollectMultiset_INCLUDE 1
#include "com/google/common/collect/Multiset.h"

@protocol JavaUtilSortedSet;

@protocol ComGoogleCommonCollectSortedMultisetBridge < ComGoogleCommonCollectMultiset, NSObject, JavaObject >

- (id<JavaUtilSortedSet>)elementSet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedMultisetBridge)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedMultisetBridge)

#endif
#pragma pop_macro("ComGoogleCommonCollectSortedMultisetBridge_INCLUDE_ALL")
