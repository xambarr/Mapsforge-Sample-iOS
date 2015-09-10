//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/WeakReference.java
//

#ifndef _JavaLangRefWeakReference_H_
#define _JavaLangRefWeakReference_H_

#include "J2ObjC_header.h"
#include "java/lang/ref/Reference.h"

@class JavaLangRefReferenceQueue;

@interface JavaLangRefWeakReference : JavaLangRefReference

#pragma mark Public

- (instancetype)initWithId:(id)r;

- (instancetype)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefWeakReference)

FOUNDATION_EXPORT void JavaLangRefWeakReference_initWithId_(JavaLangRefWeakReference *self, id r);

FOUNDATION_EXPORT JavaLangRefWeakReference *new_JavaLangRefWeakReference_initWithId_(id r) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangRefWeakReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefWeakReference *self, id r, JavaLangRefReferenceQueue *q);

FOUNDATION_EXPORT JavaLangRefWeakReference *new_JavaLangRefWeakReference_initWithId_withJavaLangRefReferenceQueue_(id r, JavaLangRefReferenceQueue *q) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefWeakReference)

#endif // _JavaLangRefWeakReference_H_
