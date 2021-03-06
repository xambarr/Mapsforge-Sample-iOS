//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Logger.java
//

#ifndef _JavaUtilLoggingLogger_H_
#define _JavaUtilLoggingLogger_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaLangThrowable;
@class JavaUtilLoggingHandler;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogManager;
@class JavaUtilLoggingLogRecord;
@class JavaUtilResourceBundle;
@protocol JavaUtilList;
@protocol JavaUtilLoggingFilter;

@interface JavaUtilLoggingLogger : NSObject {
 @public
  __weak JavaUtilLoggingLogger *parent_;
  JavaUtilLoggingLevel *levelObjVal_;
  jint levelIntVal_;
  id<JavaUtilList> children_;
}

#pragma mark Public

- (void)addHandlerWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)handler;

- (void)configWithNSString:(NSString *)msg;

- (void)enteringWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod;

- (void)enteringWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod
                      withId:(id)param;

- (void)enteringWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod
           withNSObjectArray:(IOSObjectArray *)params;

- (void)exitingWithNSString:(NSString *)sourceClass
               withNSString:(NSString *)sourceMethod;

- (void)exitingWithNSString:(NSString *)sourceClass
               withNSString:(NSString *)sourceMethod
                     withId:(id)result;

- (void)fineWithNSString:(NSString *)msg;

- (void)finerWithNSString:(NSString *)msg;

- (void)finestWithNSString:(NSString *)msg;

+ (JavaUtilLoggingLogger *)getAnonymousLogger;

+ (JavaUtilLoggingLogger *)getAnonymousLoggerWithNSString:(NSString *)resourceBundleName;

- (id<JavaUtilLoggingFilter>)getFilter;

+ (JavaUtilLoggingLogger *)getGlobal;

- (IOSObjectArray *)getHandlers;

- (JavaUtilLoggingLevel *)getLevel;

+ (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name;

+ (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name
                                    withNSString:(NSString *)resourceBundleName;

- (NSString *)getName;

- (JavaUtilLoggingLogger *)getParent;

- (JavaUtilResourceBundle *)getResourceBundle;

- (NSString *)getResourceBundleName;

- (jboolean)getUseParentHandlers;

- (void)infoWithNSString:(NSString *)msg;

- (jboolean)isLoggableWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)l;

- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg;

- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg
                             withId:(id)param;

- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg
                  withNSObjectArray:(IOSObjectArray *)params;

- (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                       withNSString:(NSString *)msg
              withJavaLangThrowable:(JavaLangThrowable *)thrown;

- (void)logWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg;

- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg
                              withId:(id)param;

- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg
                   withNSObjectArray:(IOSObjectArray *)params;

- (void)logpWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                        withNSString:(NSString *)sourceClass
                        withNSString:(NSString *)sourceMethod
                        withNSString:(NSString *)msg
               withJavaLangThrowable:(JavaLangThrowable *)thrown;

- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg;

- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg
                               withId:(id)param;

- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg
                    withNSObjectArray:(IOSObjectArray *)params;

- (void)logrbWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)logLevel
                         withNSString:(NSString *)sourceClass
                         withNSString:(NSString *)sourceMethod
                         withNSString:(NSString *)bundleName
                         withNSString:(NSString *)msg
                withJavaLangThrowable:(JavaLangThrowable *)thrown;

- (void)removeHandlerWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)handler;

- (void)setFilterWithJavaUtilLoggingFilter:(id<JavaUtilLoggingFilter>)newFilter;

- (void)setLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;

- (void)setParentWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)parent;

- (void)setUseParentHandlersWithBoolean:(jboolean)notifyParentHandlers;

- (void)severeWithNSString:(NSString *)msg;

- (void)throwingWithNSString:(NSString *)sourceClass
                withNSString:(NSString *)sourceMethod
       withJavaLangThrowable:(JavaLangThrowable *)thrown;

- (void)warningWithNSString:(NSString *)msg;

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)resourceBundleName;

#pragma mark Package-Private

+ (JavaUtilResourceBundle *)loadResourceBundleWithNSString:(NSString *)resourceBundleName;

- (void)reset;

- (void)setManagerWithJavaUtilLoggingLogManager:(JavaUtilLoggingLogManager *)manager;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLogger)

J2OBJC_FIELD_SETTER(JavaUtilLoggingLogger, levelObjVal_, JavaUtilLoggingLevel *)
J2OBJC_FIELD_SETTER(JavaUtilLoggingLogger, children_, id<JavaUtilList>)

FOUNDATION_EXPORT NSString *JavaUtilLoggingLogger_GLOBAL_LOGGER_NAME_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogger, GLOBAL_LOGGER_NAME_, NSString *)

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_global_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogger, global_, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT void JavaUtilLoggingLogger_initWithNSString_withNSString_(JavaUtilLoggingLogger *self, NSString *name, NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *new_JavaUtilLoggingLogger_initWithNSString_withNSString_(NSString *name, NSString *resourceBundleName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilResourceBundle *JavaUtilLoggingLogger_loadResourceBundleWithNSString_(NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getAnonymousLogger();

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getAnonymousLoggerWithNSString_(NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getLoggerWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getLoggerWithNSString_withNSString_(NSString *name, NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLogger *JavaUtilLoggingLogger_getGlobal();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogger)

#endif // _JavaUtilLoggingLogger_H_
