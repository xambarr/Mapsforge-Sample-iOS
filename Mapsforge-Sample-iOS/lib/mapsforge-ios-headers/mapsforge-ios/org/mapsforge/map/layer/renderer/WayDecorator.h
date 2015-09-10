//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/renderer/WayDecorator.java
//

#ifndef _OrgMapsforgeMapLayerRendererWayDecorator_H_
#define _OrgMapsforgeMapLayerRendererWayDecorator_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class OrgMapsforgeCoreGraphicsDisplayEnum;
@class OrgMapsforgeCoreModelTile;
@protocol JavaUtilList;
@protocol OrgMapsforgeCoreGraphicsBitmap;
@protocol OrgMapsforgeCoreGraphicsPaint;

@interface OrgMapsforgeMapLayerRendererWayDecorator : NSObject

#pragma mark Package-Private

+ (void)renderSymbolWithOrgMapsforgeCoreGraphicsBitmap:(id<OrgMapsforgeCoreGraphicsBitmap>)symbolBitmap
               withOrgMapsforgeCoreGraphicsDisplayEnum:(OrgMapsforgeCoreGraphicsDisplayEnum *)display
                                               withInt:(jint)priority
                                             withFloat:(jfloat)dy
                                           withBoolean:(jboolean)alignCenter
                                           withBoolean:(jboolean)repeatSymbol
                                             withFloat:(jfloat)repeatGap
                                             withFloat:(jfloat)repeatStart
                                           withBoolean:(jboolean)rotate
                  withOrgMapsforgeCoreModelPointArray2:(IOSObjectArray *)coordinates
                                      withJavaUtilList:(id<JavaUtilList>)currentItems;

+ (void)renderTextWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile
                                   withNSString:(NSString *)text
        withOrgMapsforgeCoreGraphicsDisplayEnum:(OrgMapsforgeCoreGraphicsDisplayEnum *)display
                                        withInt:(jint)priority
                                      withFloat:(jfloat)dy
              withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)fill
              withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)stroke
           withOrgMapsforgeCoreModelPointArray2:(IOSObjectArray *)coordinates
                               withJavaUtilList:(id<JavaUtilList>)currentLabels;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerRendererWayDecorator)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerRendererWayDecorator_renderSymbolWithOrgMapsforgeCoreGraphicsBitmap_withOrgMapsforgeCoreGraphicsDisplayEnum_withInt_withFloat_withBoolean_withBoolean_withFloat_withFloat_withBoolean_withOrgMapsforgeCoreModelPointArray2_withJavaUtilList_(id<OrgMapsforgeCoreGraphicsBitmap> symbolBitmap, OrgMapsforgeCoreGraphicsDisplayEnum *display, jint priority, jfloat dy, jboolean alignCenter, jboolean repeatSymbol, jfloat repeatGap, jfloat repeatStart, jboolean rotate, IOSObjectArray *coordinates, id<JavaUtilList> currentItems);

FOUNDATION_EXPORT void OrgMapsforgeMapLayerRendererWayDecorator_renderTextWithOrgMapsforgeCoreModelTile_withNSString_withOrgMapsforgeCoreGraphicsDisplayEnum_withInt_withFloat_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreModelPointArray2_withJavaUtilList_(OrgMapsforgeCoreModelTile *tile, NSString *text, OrgMapsforgeCoreGraphicsDisplayEnum *display, jint priority, jfloat dy, id<OrgMapsforgeCoreGraphicsPaint> fill, id<OrgMapsforgeCoreGraphicsPaint> stroke, IOSObjectArray *coordinates, id<JavaUtilList> currentLabels);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerRendererWayDecorator)

#endif // _OrgMapsforgeMapLayerRendererWayDecorator_H_
