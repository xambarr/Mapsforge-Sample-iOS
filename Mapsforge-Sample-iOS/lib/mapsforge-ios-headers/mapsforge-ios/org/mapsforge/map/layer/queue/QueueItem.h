//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/queue/QueueItem.java
//

#ifndef _OrgMapsforgeMapLayerQueueQueueItem_H_
#define _OrgMapsforgeMapLayerQueueQueueItem_H_

#include "J2ObjC_header.h"

@class OrgMapsforgeMapLayerQueueJob;

@interface OrgMapsforgeMapLayerQueueQueueItem : NSObject {
 @public
  OrgMapsforgeMapLayerQueueJob *object_;
}

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)object;

- (jdouble)getPriority;

- (void)setPriorityWithDouble:(jdouble)priority;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerQueueQueueItem)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerQueueQueueItem, object_, id)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerQueueQueueItem_initWithOrgMapsforgeMapLayerQueueJob_(OrgMapsforgeMapLayerQueueQueueItem *self, OrgMapsforgeMapLayerQueueJob *object);

FOUNDATION_EXPORT OrgMapsforgeMapLayerQueueQueueItem *new_OrgMapsforgeMapLayerQueueQueueItem_initWithOrgMapsforgeMapLayerQueueJob_(OrgMapsforgeMapLayerQueueJob *object) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerQueueQueueItem)

#endif // _OrgMapsforgeMapLayerQueueQueueItem_H_
