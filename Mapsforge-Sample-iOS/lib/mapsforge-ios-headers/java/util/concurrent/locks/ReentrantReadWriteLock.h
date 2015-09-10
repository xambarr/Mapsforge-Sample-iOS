//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/locks/ReentrantReadWriteLock.java
//

#ifndef _JavaUtilConcurrentLocksReentrantReadWriteLock_H_
#define _JavaUtilConcurrentLocksReentrantReadWriteLock_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/ThreadLocal.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/util/concurrent/locks/Lock.h"
#include "java/util/concurrent/locks/ReadWriteLock.h"

@class JavaLangThread;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_Sync;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentLocksCondition;

@interface JavaUtilConcurrentLocksReentrantReadWriteLock : NSObject < JavaUtilConcurrentLocksReadWriteLock, JavaIoSerializable > {
 @public
  JavaUtilConcurrentLocksReentrantReadWriteLock_Sync *sync_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)fair;

- (jint)getQueueLength;

- (jint)getReadHoldCount;

- (jint)getReadLockCount;

- (jint)getWaitQueueLengthWithJavaUtilConcurrentLocksCondition:(id<JavaUtilConcurrentLocksCondition>)condition;

- (jint)getWriteHoldCount;

- (jboolean)hasQueuedThreadWithJavaLangThread:(JavaLangThread *)thread;

- (jboolean)hasQueuedThreads;

- (jboolean)hasWaitersWithJavaUtilConcurrentLocksCondition:(id<JavaUtilConcurrentLocksCondition>)condition;

- (jboolean)isFair;

- (jboolean)isWriteLocked;

- (jboolean)isWriteLockedByCurrentThread;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock *)readLock;

- (NSString *)description;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock *)writeLock;

#pragma mark Protected

- (JavaLangThread *)getOwner;

- (id<JavaUtilCollection>)getQueuedReaderThreads;

- (id<JavaUtilCollection>)getQueuedThreads;

- (id<JavaUtilCollection>)getQueuedWriterThreads;

- (id<JavaUtilCollection>)getWaitingThreadsWithJavaUtilConcurrentLocksCondition:(id<JavaUtilConcurrentLocksCondition>)condition;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentLocksReentrantReadWriteLock, sync_, JavaUtilConcurrentLocksReentrantReadWriteLock_Sync *)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_init(JavaUtilConcurrentLocksReentrantReadWriteLock *self);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock *new_JavaUtilConcurrentLocksReentrantReadWriteLock_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_initWithBoolean_(JavaUtilConcurrentLocksReentrantReadWriteLock *self, jboolean fair);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock *new_JavaUtilConcurrentLocksReentrantReadWriteLock_initWithBoolean_(jboolean fair) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock)

#define JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_SHARED_SHIFT 16
#define JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_SHARED_UNIT 65536
#define JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_MAX_COUNT 65535
#define JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_EXCLUSIVE_MASK 65535

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer

#pragma mark Protected

- (jboolean)isHeldExclusively;

- (jboolean)tryAcquireWithInt:(jint)acquires;

- (jint)tryAcquireSharedWithInt:(jint)unused;

- (jboolean)tryReleaseWithInt:(jint)releases;

- (jboolean)tryReleaseSharedWithInt:(jint)unused;

#pragma mark Package-Private

- (instancetype)init;

+ (jint)exclusiveCountWithInt:(jint)c;

- (jint)fullTryAcquireSharedWithJavaLangThread:(JavaLangThread *)current;

- (jint)getCount;

- (JavaLangThread *)getOwner;

- (jint)getReadHoldCount;

- (jint)getReadLockCount;

- (jint)getWriteHoldCount;

- (jboolean)isWriteLocked;

- (JavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject *)newCondition OBJC_METHOD_FAMILY_NONE;

- (jboolean)readerShouldBlock;

+ (jint)sharedCountWithInt:(jint)c;

- (jboolean)tryReadLock;

- (jboolean)tryWriteLock;

- (jboolean)writerShouldBlock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync, SHARED_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync, SHARED_UNIT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync, MAX_COUNT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync, EXCLUSIVE_MASK, jint)

FOUNDATION_EXPORT jint JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_sharedCountWithInt_(jint c);

FOUNDATION_EXPORT jint JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_exclusiveCountWithInt_(jint c);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_init(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync)

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter : NSObject {
 @public
  jint count_;
  jlong tid_;
}

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter_init(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter *self);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter *new_JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter)

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_ThreadLocalHoldCounter : JavaLangThreadLocal

#pragma mark Public

- (JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_HoldCounter *)initialValue OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_ThreadLocalHoldCounter)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_ThreadLocalHoldCounter_init(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_ThreadLocalHoldCounter *self);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_ThreadLocalHoldCounter *new_JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_ThreadLocalHoldCounter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock_Sync_ThreadLocalHoldCounter)

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_NonfairSync : JavaUtilConcurrentLocksReentrantReadWriteLock_Sync

#pragma mark Package-Private

- (instancetype)init;

- (jboolean)readerShouldBlock;

- (jboolean)writerShouldBlock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock_NonfairSync)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_NonfairSync_init(JavaUtilConcurrentLocksReentrantReadWriteLock_NonfairSync *self);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock_NonfairSync *new_JavaUtilConcurrentLocksReentrantReadWriteLock_NonfairSync_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock_NonfairSync)

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_FairSync : JavaUtilConcurrentLocksReentrantReadWriteLock_Sync

#pragma mark Package-Private

- (instancetype)init;

- (jboolean)readerShouldBlock;

- (jboolean)writerShouldBlock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock_FairSync)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_FairSync_init(JavaUtilConcurrentLocksReentrantReadWriteLock_FairSync *self);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock_FairSync *new_JavaUtilConcurrentLocksReentrantReadWriteLock_FairSync_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock_FairSync)

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock : NSObject < JavaUtilConcurrentLocksLock, JavaIoSerializable >

#pragma mark Public

- (void)lock;

- (void)lockInterruptibly;

- (id<JavaUtilConcurrentLocksCondition>)newCondition OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

#pragma mark Protected

- (instancetype)initWithJavaUtilConcurrentLocksReentrantReadWriteLock:(JavaUtilConcurrentLocksReentrantReadWriteLock *)lock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock_initWithJavaUtilConcurrentLocksReentrantReadWriteLock_(JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock *self, JavaUtilConcurrentLocksReentrantReadWriteLock *lock);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock *new_JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock_initWithJavaUtilConcurrentLocksReentrantReadWriteLock_(JavaUtilConcurrentLocksReentrantReadWriteLock *lock) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock)

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock : NSObject < JavaUtilConcurrentLocksLock, JavaIoSerializable >

#pragma mark Public

- (jint)getHoldCount;

- (jboolean)isHeldByCurrentThread;

- (void)lock;

- (void)lockInterruptibly;

- (id<JavaUtilConcurrentLocksCondition>)newCondition OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

#pragma mark Protected

- (instancetype)initWithJavaUtilConcurrentLocksReentrantReadWriteLock:(JavaUtilConcurrentLocksReentrantReadWriteLock *)lock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock_initWithJavaUtilConcurrentLocksReentrantReadWriteLock_(JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock *self, JavaUtilConcurrentLocksReentrantReadWriteLock *lock);

FOUNDATION_EXPORT JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock *new_JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock_initWithJavaUtilConcurrentLocksReentrantReadWriteLock_(JavaUtilConcurrentLocksReentrantReadWriteLock *lock) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock)

#endif // _JavaUtilConcurrentLocksReentrantReadWriteLock_H_
