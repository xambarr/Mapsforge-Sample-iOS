//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLOutput.java
//

#ifndef _JavaSqlSQLOutput_H_
#define _JavaSqlSQLOutput_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class JavaMathBigDecimal;
@class JavaNetURL;
@class JavaSqlDate;
@class JavaSqlTime;
@class JavaSqlTimestamp;
@protocol JavaSqlArray;
@protocol JavaSqlBlob;
@protocol JavaSqlClob;
@protocol JavaSqlNClob;
@protocol JavaSqlRef;
@protocol JavaSqlRowId;
@protocol JavaSqlSQLData;
@protocol JavaSqlSQLXML;
@protocol JavaSqlStruct;

@protocol JavaSqlSQLOutput < NSObject, JavaObject >

- (void)writeStringWithNSString:(NSString *)theString;

- (void)writeBooleanWithBoolean:(jboolean)theFlag;

- (void)writeByteWithByte:(jbyte)theByte;

- (void)writeShortWithShort:(jshort)theShort;

- (void)writeIntWithInt:(jint)theInt;

- (void)writeLongWithLong:(jlong)theLong;

- (void)writeFloatWithFloat:(jfloat)theFloat;

- (void)writeDoubleWithDouble:(jdouble)theDouble;

- (void)writeBigDecimalWithJavaMathBigDecimal:(JavaMathBigDecimal *)theBigDecimal;

- (void)writeBytesWithByteArray:(IOSByteArray *)theBytes;

- (void)writeDateWithJavaSqlDate:(JavaSqlDate *)theDate;

- (void)writeTimeWithJavaSqlTime:(JavaSqlTime *)theTime;

- (void)writeTimestampWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

- (void)writeCharacterStreamWithJavaIoReader:(JavaIoReader *)theStream;

- (void)writeAsciiStreamWithJavaIoInputStream:(JavaIoInputStream *)theStream;

- (void)writeBinaryStreamWithJavaIoInputStream:(JavaIoInputStream *)theStream;

- (void)writeObjectWithJavaSqlSQLData:(id<JavaSqlSQLData>)theObject;

- (void)writeRefWithJavaSqlRef:(id<JavaSqlRef>)theRef;

- (void)writeBlobWithJavaSqlBlob:(id<JavaSqlBlob>)theBlob;

- (void)writeClobWithJavaSqlClob:(id<JavaSqlClob>)theClob;

- (void)writeStructWithJavaSqlStruct:(id<JavaSqlStruct>)theStruct;

- (void)writeArrayWithJavaSqlArray:(id<JavaSqlArray>)theArray;

- (void)writeURLWithJavaNetURL:(JavaNetURL *)theURL;

- (void)writeNStringWithNSString:(NSString *)theString;

- (void)writeNClobWithJavaSqlNClob:(id<JavaSqlNClob>)theNClob;

- (void)writeRowIdWithJavaSqlRowId:(id<JavaSqlRowId>)theRowId;

- (void)writeSQLXMLWithJavaSqlSQLXML:(id<JavaSqlSQLXML>)theXml;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLOutput)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLOutput)

#endif // _JavaSqlSQLOutput_H_
