//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/Retention.java
//

#ifndef _JavaLangAnnotationRetention_H_
#define _JavaLangAnnotationRetention_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@class JavaLangAnnotationRetentionPolicyEnum;

@protocol JavaLangAnnotationRetention < JavaLangAnnotationAnnotation >

@property (readonly) JavaLangAnnotationRetentionPolicyEnum *value;

@end

@interface JavaLangAnnotationRetention : NSObject < JavaLangAnnotationRetention > {
 @private
  JavaLangAnnotationRetentionPolicyEnum *value_;
}

- (instancetype)initWithValue:(JavaLangAnnotationRetentionPolicyEnum *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationRetention)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationRetention)

#endif // _JavaLangAnnotationRetention_H_
