//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ListIterator.java
//

#ifndef _JavaUtilListIterator_H_
#define _JavaUtilListIterator_H_

#include "J2ObjC_header.h"
#include "java/util/Iterator.h"

@protocol JavaUtilListIterator < JavaUtilIterator, NSObject, JavaObject >

- (void)addWithId:(id)object;

- (jboolean)hasNext;

- (jboolean)hasPrevious;

- (id)next;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)remove;

- (void)setWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilListIterator)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilListIterator)

#endif // _JavaUtilListIterator_H_
