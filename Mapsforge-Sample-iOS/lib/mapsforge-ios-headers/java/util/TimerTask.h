//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/TimerTask.java
//

#ifndef _JavaUtilTimerTask_H_
#define _JavaUtilTimerTask_H_

#include "J2ObjC_header.h"
#include "java/lang/Runnable.h"

@interface JavaUtilTimerTask : NSObject < JavaLangRunnable > {
 @public
  id lock_;
  jboolean cancelled_;
  jlong when_;
  jlong period_;
  jboolean fixedRate_;
}

#pragma mark Public

- (jboolean)cancel;

- (void)run;

- (jlong)scheduledExecutionTime;

#pragma mark Protected

- (instancetype)init;

#pragma mark Package-Private

- (jlong)getWhen;

- (jboolean)isScheduled;

- (void)setScheduledTimeWithLong:(jlong)time;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTimerTask)

J2OBJC_FIELD_SETTER(JavaUtilTimerTask, lock_, id)

FOUNDATION_EXPORT void JavaUtilTimerTask_init(JavaUtilTimerTask *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimerTask)

#endif // _JavaUtilTimerTask_H_
