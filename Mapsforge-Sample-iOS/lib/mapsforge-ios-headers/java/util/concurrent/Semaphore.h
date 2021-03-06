//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Semaphore.java
//

#ifndef _JavaUtilConcurrentSemaphore_H_
#define _JavaUtilConcurrentSemaphore_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;

@interface JavaUtilConcurrentSemaphore : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithInt:(jint)permits;

- (instancetype)initWithInt:(jint)permits
                withBoolean:(jboolean)fair;

- (void)acquire;

- (void)acquireWithInt:(jint)permits;

- (void)acquireUninterruptibly;

- (void)acquireUninterruptiblyWithInt:(jint)permits;

- (jint)availablePermits;

- (jint)drainPermits;

- (jint)getQueueLength;

- (jboolean)hasQueuedThreads;

- (jboolean)isFair;

- (void)release__;

- (void)release__WithInt:(jint)permits;

- (NSString *)description;

- (jboolean)tryAcquire;

- (jboolean)tryAcquireWithInt:(jint)permits;

- (jboolean)tryAcquireWithInt:(jint)permits
                     withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)tryAcquireWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

#pragma mark Protected

- (id<JavaUtilCollection>)getQueuedThreads;

- (void)reducePermitsWithInt:(jint)reduction;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSemaphore)

FOUNDATION_EXPORT void JavaUtilConcurrentSemaphore_initWithInt_(JavaUtilConcurrentSemaphore *self, jint permits);

FOUNDATION_EXPORT JavaUtilConcurrentSemaphore *new_JavaUtilConcurrentSemaphore_initWithInt_(jint permits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentSemaphore_initWithInt_withBoolean_(JavaUtilConcurrentSemaphore *self, jint permits, jboolean fair);

FOUNDATION_EXPORT JavaUtilConcurrentSemaphore *new_JavaUtilConcurrentSemaphore_initWithInt_withBoolean_(jint permits, jboolean fair) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSemaphore)

@interface JavaUtilConcurrentSemaphore_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer

#pragma mark Protected

- (jboolean)tryReleaseSharedWithInt:(jint)releases;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)permits;

- (jint)drainPermits;

- (jint)getPermits;

- (jint)nonfairTryAcquireSharedWithInt:(jint)acquires;

- (void)reducePermitsWithInt:(jint)reductions;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSemaphore_Sync)

FOUNDATION_EXPORT void JavaUtilConcurrentSemaphore_Sync_initWithInt_(JavaUtilConcurrentSemaphore_Sync *self, jint permits);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSemaphore_Sync)

@interface JavaUtilConcurrentSemaphore_NonfairSync : JavaUtilConcurrentSemaphore_Sync

#pragma mark Protected

- (jint)tryAcquireSharedWithInt:(jint)acquires;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)permits;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSemaphore_NonfairSync)

FOUNDATION_EXPORT void JavaUtilConcurrentSemaphore_NonfairSync_initWithInt_(JavaUtilConcurrentSemaphore_NonfairSync *self, jint permits);

FOUNDATION_EXPORT JavaUtilConcurrentSemaphore_NonfairSync *new_JavaUtilConcurrentSemaphore_NonfairSync_initWithInt_(jint permits) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSemaphore_NonfairSync)

@interface JavaUtilConcurrentSemaphore_FairSync : JavaUtilConcurrentSemaphore_Sync

#pragma mark Protected

- (jint)tryAcquireSharedWithInt:(jint)acquires;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)permits;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSemaphore_FairSync)

FOUNDATION_EXPORT void JavaUtilConcurrentSemaphore_FairSync_initWithInt_(JavaUtilConcurrentSemaphore_FairSync *self, jint permits);

FOUNDATION_EXPORT JavaUtilConcurrentSemaphore_FairSync *new_JavaUtilConcurrentSemaphore_FairSync_initWithInt_(jint permits) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSemaphore_FairSync)

#endif // _JavaUtilConcurrentSemaphore_H_
