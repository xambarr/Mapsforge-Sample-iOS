//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/DeleteOnExit.java
//

#ifndef _LibcoreIoDeleteOnExit_H_
#define _LibcoreIoDeleteOnExit_H_

#include "J2ObjC_header.h"
#include "java/lang/Thread.h"

@interface LibcoreIoDeleteOnExit : JavaLangThread

#pragma mark Public

- (void)addFileWithNSString:(NSString *)filename;

+ (LibcoreIoDeleteOnExit *)getInstance;

- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoDeleteOnExit)

FOUNDATION_EXPORT LibcoreIoDeleteOnExit *LibcoreIoDeleteOnExit_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoDeleteOnExit)

#endif // _LibcoreIoDeleteOnExit_H_
