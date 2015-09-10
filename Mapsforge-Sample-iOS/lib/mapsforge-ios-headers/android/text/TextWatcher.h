//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/TextWatcher.java
//

#ifndef _AndroidTextTextWatcher_H_
#define _AndroidTextTextWatcher_H_

#include "J2ObjC_header.h"
#include "android/text/NoCopySpan.h"

@protocol AndroidTextEditable;
@protocol JavaLangCharSequence;

@protocol AndroidTextTextWatcher < AndroidTextNoCopySpan, NSObject, JavaObject >

- (void)beforeTextChangedWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                          withInt:(jint)start
                                          withInt:(jint)count
                                          withInt:(jint)after;

- (void)onTextChangedWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                      withInt:(jint)start
                                      withInt:(jint)before
                                      withInt:(jint)count;

- (void)afterTextChangedWithAndroidTextEditable:(id<AndroidTextEditable>)s;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextTextWatcher)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextTextWatcher)

#endif // _AndroidTextTextWatcher_H_
