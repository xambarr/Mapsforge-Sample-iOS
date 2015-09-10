//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/math/BigIntegerMath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonMathBigIntegerMath_INCLUDE_ALL")
#if ComGoogleCommonMathBigIntegerMath_RESTRICT
#define ComGoogleCommonMathBigIntegerMath_INCLUDE_ALL 0
#else
#define ComGoogleCommonMathBigIntegerMath_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonMathBigIntegerMath_RESTRICT

#if !defined (_ComGoogleCommonMathBigIntegerMath_) && (ComGoogleCommonMathBigIntegerMath_INCLUDE_ALL || ComGoogleCommonMathBigIntegerMath_INCLUDE)
#define _ComGoogleCommonMathBigIntegerMath_

@class JavaMathBigInteger;
@class JavaMathRoundingModeEnum;
@protocol JavaUtilList;

#define ComGoogleCommonMathBigIntegerMath_SQRT2_PRECOMPUTE_THRESHOLD 256

@interface ComGoogleCommonMathBigIntegerMath : NSObject

#pragma mark Public

+ (JavaMathBigInteger *)binomialWithInt:(jint)n
                                withInt:(jint)k;

+ (JavaMathBigInteger *)divideWithJavaMathBigInteger:(JavaMathBigInteger *)p
                              withJavaMathBigInteger:(JavaMathBigInteger *)q
                        withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (JavaMathBigInteger *)factorialWithInt:(jint)n;

+ (jboolean)isPowerOfTwoWithJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (jint)log10WithJavaMathBigInteger:(JavaMathBigInteger *)x
       withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jint)log2WithJavaMathBigInteger:(JavaMathBigInteger *)x
      withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (JavaMathBigInteger *)sqrtWithJavaMathBigInteger:(JavaMathBigInteger *)x
                      withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

#pragma mark Package-Private

+ (jboolean)fitsInLongWithJavaMathBigInteger:(JavaMathBigInteger *)x;

+ (JavaMathBigInteger *)listProductWithJavaUtilList:(id<JavaUtilList>)nums;

+ (JavaMathBigInteger *)listProductWithJavaUtilList:(id<JavaUtilList>)nums
                                            withInt:(jint)start
                                            withInt:(jint)end;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathBigIntegerMath)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathBigIntegerMath, SQRT2_PRECOMPUTE_THRESHOLD, jint)

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathBigIntegerMath_SQRT2_PRECOMPUTED_BITS_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathBigIntegerMath, SQRT2_PRECOMPUTED_BITS_, JavaMathBigInteger *)

FOUNDATION_EXPORT jboolean ComGoogleCommonMathBigIntegerMath_isPowerOfTwoWithJavaMathBigInteger_(JavaMathBigInteger *x);

FOUNDATION_EXPORT jint ComGoogleCommonMathBigIntegerMath_log2WithJavaMathBigInteger_withJavaMathRoundingModeEnum_(JavaMathBigInteger *x, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathBigIntegerMath_log10WithJavaMathBigInteger_withJavaMathRoundingModeEnum_(JavaMathBigInteger *x, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathBigIntegerMath_sqrtWithJavaMathBigInteger_withJavaMathRoundingModeEnum_(JavaMathBigInteger *x, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathBigIntegerMath_divideWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathRoundingModeEnum_(JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathRoundingModeEnum *mode);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathBigIntegerMath_factorialWithInt_(jint n);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathBigIntegerMath_listProductWithJavaUtilList_(id<JavaUtilList> nums);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathBigIntegerMath_listProductWithJavaUtilList_withInt_withInt_(id<JavaUtilList> nums, jint start, jint end);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathBigIntegerMath_binomialWithInt_withInt_(jint n, jint k);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathBigIntegerMath_fitsInLongWithJavaMathBigInteger_(JavaMathBigInteger *x);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathBigIntegerMath)

#endif
#pragma pop_macro("ComGoogleCommonMathBigIntegerMath_INCLUDE_ALL")
