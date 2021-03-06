//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/Matrix.java
//

#ifndef _OrgMapsforgeCoreGraphicsMatrix_H_
#define _OrgMapsforgeCoreGraphicsMatrix_H_

#include "J2ObjC_header.h"

@protocol OrgMapsforgeCoreGraphicsMatrix < NSObject, JavaObject >

- (void)reset;

- (void)rotateWithFloat:(jfloat)theta;

- (void)rotateWithFloat:(jfloat)theta
              withFloat:(jfloat)pivotX
              withFloat:(jfloat)pivotY;

- (void)scale__WithFloat:(jfloat)scaleX
               withFloat:(jfloat)scaleY;

- (void)scale__WithFloat:(jfloat)scaleX
               withFloat:(jfloat)scaleY
               withFloat:(jfloat)pivotX
               withFloat:(jfloat)pivotY;

- (void)translateWithFloat:(jfloat)translateX
                 withFloat:(jfloat)translateY;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsMatrix)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsMatrix)

#endif // _OrgMapsforgeCoreGraphicsMatrix_H_
