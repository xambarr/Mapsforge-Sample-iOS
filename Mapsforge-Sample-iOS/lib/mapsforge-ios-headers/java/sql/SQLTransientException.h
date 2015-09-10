//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLTransientException.java
//

#ifndef _JavaSqlSQLTransientException_H_
#define _JavaSqlSQLTransientException_H_

#include "J2ObjC_header.h"
#include "java/sql/SQLException.h"

@class JavaLangThrowable;

@interface JavaSqlSQLTransientException : JavaSqlSQLException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLTransientException)

FOUNDATION_EXPORT void JavaSqlSQLTransientException_init(JavaSqlSQLTransientException *self);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientException_initWithNSString_(JavaSqlSQLTransientException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientException_initWithNSString_withNSString_(JavaSqlSQLTransientException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientException_initWithNSString_withNSString_withInt_(JavaSqlSQLTransientException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientException_initWithJavaLangThrowable_(JavaSqlSQLTransientException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLTransientException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLTransientException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLTransientException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLTransientException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientException *new_JavaSqlSQLTransientException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLTransientException)

#endif // _JavaSqlSQLTransientException_H_