//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Log.java
//

#ifndef _AndroidUtilLog_H_
#define _AndroidUtilLog_H_

#include "J2ObjC_header.h"

@class AndroidUtilLog_TerribleFailure;
@class JavaLangThrowable;
@protocol AndroidUtilLog_TerribleFailureHandler;

#define AndroidUtilLog_VERBOSE 2
#define AndroidUtilLog_DEBUG 3
#define AndroidUtilLog_INFO 4
#define AndroidUtilLog_WARN 5
#define AndroidUtilLog_ERROR 6
#define AndroidUtilLog_ASSERT 7
#define AndroidUtilLog_LOG_ID_MAIN 0
#define AndroidUtilLog_LOG_ID_RADIO 1
#define AndroidUtilLog_LOG_ID_EVENTS 2
#define AndroidUtilLog_LOG_ID_SYSTEM 3

@interface AndroidUtilLog : NSObject

#pragma mark Public

+ (jint)dWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

+ (jint)dWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)eWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

+ (jint)eWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (NSString *)getStackTraceStringWithJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)iWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

+ (jint)iWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jboolean)isLoggableWithNSString:(NSString *)tag
                           withInt:(jint)level;

+ (jint)printlnWithInt:(jint)priority
          withNSString:(NSString *)tag
          withNSString:(NSString *)msg;

+ (jint)println_nativeWithInt:(jint)bufID
                      withInt:(jint)priority
                 withNSString:(NSString *)tag
                 withNSString:(NSString *)msg;

+ (id<AndroidUtilLog_TerribleFailureHandler>)setWtfHandlerWithAndroidUtilLog_TerribleFailureHandler:(id<AndroidUtilLog_TerribleFailureHandler>)handler;

+ (jint)vWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

+ (jint)vWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)wWithNSString:(NSString *)tag
         withNSString:(NSString *)msg;

+ (jint)wWithNSString:(NSString *)tag
         withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)wWithNSString:(NSString *)tag
withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)wtfWithNSString:(NSString *)tag
           withNSString:(NSString *)msg;

+ (jint)wtfWithNSString:(NSString *)tag
           withNSString:(NSString *)msg
  withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)wtfWithNSString:(NSString *)tag
  withJavaLangThrowable:(JavaLangThrowable *)tr;

+ (jint)wtfStackWithNSString:(NSString *)tag
                withNSString:(NSString *)msg;

#pragma mark Package-Private

+ (jint)wtfWithInt:(jint)logId
      withNSString:(NSString *)tag
      withNSString:(NSString *)msg
withJavaLangThrowable:(JavaLangThrowable *)tr
       withBoolean:(jboolean)localStack;

@end

J2OBJC_STATIC_INIT(AndroidUtilLog)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, VERBOSE, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, DEBUG, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, INFO, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, WARN, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, ERROR, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, ASSERT, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, LOG_ID_MAIN, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, LOG_ID_RADIO, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, LOG_ID_EVENTS, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidUtilLog, LOG_ID_SYSTEM, jint)

FOUNDATION_EXPORT jint AndroidUtilLog_vWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_vWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_dWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_dWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_iWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_iWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_wWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jboolean AndroidUtilLog_isLoggableWithNSString_withInt_(NSString *tag, jint level);

FOUNDATION_EXPORT jint AndroidUtilLog_wWithNSString_withJavaLangThrowable_(NSString *tag, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_eWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_eWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfStackWithNSString_withNSString_(NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithNSString_withJavaLangThrowable_(NSString *tag, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithNSString_withNSString_withJavaLangThrowable_(NSString *tag, NSString *msg, JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_wtfWithInt_withNSString_withNSString_withJavaLangThrowable_withBoolean_(jint logId, NSString *tag, NSString *msg, JavaLangThrowable *tr, jboolean localStack);

FOUNDATION_EXPORT id<AndroidUtilLog_TerribleFailureHandler> AndroidUtilLog_setWtfHandlerWithAndroidUtilLog_TerribleFailureHandler_(id<AndroidUtilLog_TerribleFailureHandler> handler);

FOUNDATION_EXPORT NSString *AndroidUtilLog_getStackTraceStringWithJavaLangThrowable_(JavaLangThrowable *tr);

FOUNDATION_EXPORT jint AndroidUtilLog_printlnWithInt_withNSString_withNSString_(jint priority, NSString *tag, NSString *msg);

FOUNDATION_EXPORT jint AndroidUtilLog_println_nativeWithInt_withInt_withNSString_withNSString_(jint bufID, jint priority, NSString *tag, NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilLog)

@protocol AndroidUtilLog_TerribleFailureHandler < NSObject, JavaObject >

- (void)onTerribleFailureWithNSString:(NSString *)tag
   withAndroidUtilLog_TerribleFailure:(AndroidUtilLog_TerribleFailure *)what;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilLog_TerribleFailureHandler)

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilLog_TerribleFailureHandler)

#endif // _AndroidUtilLog_H_
