//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/NullsFirstOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectNullsFirstOrdering_INCLUDE_ALL")
#if ComGoogleCommonCollectNullsFirstOrdering_RESTRICT
#define ComGoogleCommonCollectNullsFirstOrdering_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectNullsFirstOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectNullsFirstOrdering_RESTRICT

#if !defined (_ComGoogleCommonCollectNullsFirstOrdering_) && (ComGoogleCommonCollectNullsFirstOrdering_INCLUDE_ALL || ComGoogleCommonCollectNullsFirstOrdering_INCLUDE)
#define _ComGoogleCommonCollectNullsFirstOrdering_

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectNullsFirstOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectOrdering *ordering_;
}

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (ComGoogleCommonCollectOrdering *)nullsFirst;

- (ComGoogleCommonCollectOrdering *)nullsLast;

- (ComGoogleCommonCollectOrdering *)reverse;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectNullsFirstOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectNullsFirstOrdering, ordering_, ComGoogleCommonCollectOrdering *)

FOUNDATION_EXPORT void ComGoogleCommonCollectNullsFirstOrdering_initWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectNullsFirstOrdering *self, ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectNullsFirstOrdering *new_ComGoogleCommonCollectNullsFirstOrdering_initWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectNullsFirstOrdering)

#endif
#pragma pop_macro("ComGoogleCommonCollectNullsFirstOrdering_INCLUDE_ALL")
