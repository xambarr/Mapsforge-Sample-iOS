//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/scalebar/MetricUnitAdapter.java
//

#ifndef _OrgMapsforgeMapScalebarMetricUnitAdapter_H_
#define _OrgMapsforgeMapScalebarMetricUnitAdapter_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/scalebar/DistanceUnitAdapter.h"

@class IOSIntArray;

@interface OrgMapsforgeMapScalebarMetricUnitAdapter : NSObject < OrgMapsforgeMapScalebarDistanceUnitAdapter >

#pragma mark Public

- (jdouble)getMeterRatio;

- (IOSIntArray *)getScaleBarValues;

- (NSString *)getScaleTextWithInt:(jint)mapScaleValue;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapScalebarMetricUnitAdapter)

FOUNDATION_EXPORT OrgMapsforgeMapScalebarMetricUnitAdapter *OrgMapsforgeMapScalebarMetricUnitAdapter_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapScalebarMetricUnitAdapter, INSTANCE_, OrgMapsforgeMapScalebarMetricUnitAdapter *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapScalebarMetricUnitAdapter)

#endif // _OrgMapsforgeMapScalebarMetricUnitAdapter_H_
