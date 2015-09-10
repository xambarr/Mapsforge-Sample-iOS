//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ForwardingQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingQueue_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingQueue_RESTRICT
#define ComGoogleCommonCollectForwardingQueue_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingQueue_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingQueue_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingQueue_) && (ComGoogleCommonCollectForwardingQueue_INCLUDE_ALL || ComGoogleCommonCollectForwardingQueue_INCLUDE)
#define _ComGoogleCommonCollectForwardingQueue_

#define ComGoogleCommonCollectForwardingCollection_RESTRICT 1
#define ComGoogleCommonCollectForwardingCollection_INCLUDE 1
#include "com/google/common/collect/ForwardingCollection.h"

#define JavaUtilQueue_RESTRICT 1
#define JavaUtilQueue_INCLUDE 1
#include "java/util/Queue.h"

@interface ComGoogleCommonCollectForwardingQueue : ComGoogleCommonCollectForwardingCollection < JavaUtilQueue >

#pragma mark Public

- (id)element;

- (jboolean)offerWithId:(id)o;

- (id)peek;

- (id)poll;

- (id)remove;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilQueue>)delegate;

- (jboolean)standardOfferWithId:(id)e;

- (id)standardPeek;

- (id)standardPoll;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingQueue)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingQueue_init(ComGoogleCommonCollectForwardingQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingQueue)

#endif
#pragma pop_macro("ComGoogleCommonCollectForwardingQueue_INCLUDE_ALL")
