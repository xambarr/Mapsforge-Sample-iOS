//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/PhantomReference.java
//

#ifndef _JavaLangRefPhantomReference_H_
#define _JavaLangRefPhantomReference_H_

#include "J2ObjC_header.h"
#include "java/lang/ref/Reference.h"

@class JavaLangRefReferenceQueue;

@interface JavaLangRefPhantomReference : JavaLangRefReference

#pragma mark Public

- (instancetype)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefPhantomReference)

FOUNDATION_EXPORT void JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefPhantomReference *self, id r, JavaLangRefReferenceQueue *q);

FOUNDATION_EXPORT JavaLangRefPhantomReference *new_JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(id r, JavaLangRefReferenceQueue *q) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefPhantomReference)

#endif // _JavaLangRefPhantomReference_H_
