//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/primitives/UnsignedInts.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL")
#if ComGoogleCommonPrimitivesUnsignedInts_RESTRICT
#define ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL 0
#else
#define ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesUnsignedInts_RESTRICT

#if !defined (_ComGoogleCommonPrimitivesUnsignedInts_) && (ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedInts_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedInts_

@class IOSIntArray;
@protocol JavaUtilComparator;

#define ComGoogleCommonPrimitivesUnsignedInts_INT_MASK 4294967295LL

@interface ComGoogleCommonPrimitivesUnsignedInts : NSObject

#pragma mark Public

+ (jint)compareWithInt:(jint)a
               withInt:(jint)b;

+ (jint)decodeWithNSString:(NSString *)stringValue;

+ (jint)divideWithInt:(jint)dividend
              withInt:(jint)divisor;

+ (NSString *)joinWithNSString:(NSString *)separator
                  withIntArray:(IOSIntArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jint)maxWithIntArray:(IOSIntArray *)array;

+ (jint)minWithIntArray:(IOSIntArray *)array;

+ (jint)parseUnsignedIntWithNSString:(NSString *)s;

+ (jint)parseUnsignedIntWithNSString:(NSString *)string
                             withInt:(jint)radix;

+ (jint)remainderWithInt:(jint)dividend
                 withInt:(jint)divisor;

+ (jlong)toLongWithInt:(jint)value;

+ (NSString *)toStringWithInt:(jint)x;

+ (NSString *)toStringWithInt:(jint)x
                      withInt:(jint)radix;

#pragma mark Package-Private

+ (jint)flipWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedInts)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedInts, INT_MASK, jlong)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_flipWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_compareWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedInts_toLongWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_minWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_maxWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_joinWithNSString_withIntArray_(NSString *separator, IOSIntArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedInts_lexicographicalComparator();

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_divideWithInt_withInt_(jint dividend, jint divisor);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_remainderWithInt_withInt_(jint dividend, jint divisor);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_decodeWithNSString_(NSString *stringValue);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_parseUnsignedIntWithNSString_(NSString *s);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_parseUnsignedIntWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_toStringWithInt_(jint x);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_toStringWithInt_withInt_(jint x, jint radix);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedInts)

#endif

#if !defined (_ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_) && (ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"

@class IOSIntArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator) {
  ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum : JavaLangEnum < NSCopying, JavaUtilComparator >

#pragma mark Public

- (jint)compareWithId:(IOSIntArray *)left
               withId:(IOSIntArray *)right;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_values();

+ (ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_values_[];

#define ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_INSTANCE ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum_values_[ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum, INSTANCE)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparatorEnum)

#endif
#pragma pop_macro("ComGoogleCommonPrimitivesUnsignedInts_INCLUDE_ALL")
