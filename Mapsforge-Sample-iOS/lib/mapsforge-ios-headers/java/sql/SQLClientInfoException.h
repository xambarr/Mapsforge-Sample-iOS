//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLClientInfoException.java
//

#ifndef _JavaSqlSQLClientInfoException_H_
#define _JavaSqlSQLClientInfoException_H_

#include "J2ObjC_header.h"
#include "java/sql/SQLException.h"

@class JavaLangThrowable;
@protocol JavaUtilMap;

@interface JavaSqlSQLClientInfoException : JavaSqlSQLException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)failedProperties;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)failedProperties
              withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

- (instancetype)initWithNSString:(NSString *)reason
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (id<JavaUtilMap>)getFailedProperties;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLClientInfoException)

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_init(JavaSqlSQLClientInfoException *self);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithJavaUtilMap_(JavaSqlSQLClientInfoException *self, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithJavaUtilMap_(id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithJavaUtilMap_withJavaLangThrowable_(id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(NSString *reason, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, NSString *reason, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withJavaLangThrowable_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withJavaLangThrowable_(NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLClientInfoException)

#endif // _JavaSqlSQLClientInfoException_H_
