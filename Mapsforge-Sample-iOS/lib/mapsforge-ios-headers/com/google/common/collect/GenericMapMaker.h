//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/GenericMapMaker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL")
#if ComGoogleCommonCollectGenericMapMaker_RESTRICT
#define ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectGenericMapMaker_RESTRICT

#if !defined (_ComGoogleCommonCollectGenericMapMaker_) && (ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL || ComGoogleCommonCollectGenericMapMaker_INCLUDE)
#define _ComGoogleCommonCollectGenericMapMaker_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonCollectMapMakerInternalMap;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCollectGenericMapMaker : NSObject {
 @public
  id<ComGoogleCommonCollectMapMaker_RemovalListener> removalListener_;
}

#pragma mark Public

- (ComGoogleCommonCollectGenericMapMaker *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCollectGenericMapMaker *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilConcurrentConcurrentMap>)makeComputingMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (id<JavaUtilConcurrentConcurrentMap>)makeMap;

- (ComGoogleCommonCollectGenericMapMaker *)softValues;

- (ComGoogleCommonCollectGenericMapMaker *)weakKeys;

- (ComGoogleCommonCollectGenericMapMaker *)weakValues;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectGenericMapMaker *)expireAfterAccessWithLong:(jlong)duration
                                  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (ComGoogleCommonCollectGenericMapMaker *)expireAfterWriteWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id<ComGoogleCommonCollectMapMaker_RemovalListener>)getRemovalListener;

- (ComGoogleCommonCollectGenericMapMaker *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (ComGoogleCommonCollectMapMakerInternalMap *)makeCustomMap;

- (ComGoogleCommonCollectGenericMapMaker *)maximumSizeWithInt:(jint)maximumSize;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectGenericMapMaker)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectGenericMapMaker, removalListener_, id<ComGoogleCommonCollectMapMaker_RemovalListener>)

FOUNDATION_EXPORT void ComGoogleCommonCollectGenericMapMaker_init(ComGoogleCommonCollectGenericMapMaker *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectGenericMapMaker)

#endif

#if !defined (_ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_) && (ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL || ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_INCLUDE)
#define _ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonCollectMapMaker_RESTRICT 1
#define ComGoogleCommonCollectMapMaker_RemovalListener_INCLUDE 1
#include "com/google/common/collect/MapMaker.h"

@class ComGoogleCommonCollectMapMaker_RemovalNotification;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectGenericMapMaker_NullListener) {
  ComGoogleCommonCollectGenericMapMaker_NullListener_INSTANCE = 0,
};

@interface ComGoogleCommonCollectGenericMapMaker_NullListenerEnum : JavaLangEnum < NSCopying, ComGoogleCommonCollectMapMaker_RemovalListener >

#pragma mark Public

- (void)onRemovalWithComGoogleCommonCollectMapMaker_RemovalNotification:(ComGoogleCommonCollectMapMaker_RemovalNotification *)notification;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_values();

+ (ComGoogleCommonCollectGenericMapMaker_NullListenerEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonCollectGenericMapMaker_NullListenerEnum *ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectGenericMapMaker_NullListenerEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectGenericMapMaker_NullListenerEnum *ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_values_[];

#define ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_INSTANCE ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_values_[ComGoogleCommonCollectGenericMapMaker_NullListener_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectGenericMapMaker_NullListenerEnum, INSTANCE)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectGenericMapMaker_NullListenerEnum)

#endif
#pragma pop_macro("ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL")
