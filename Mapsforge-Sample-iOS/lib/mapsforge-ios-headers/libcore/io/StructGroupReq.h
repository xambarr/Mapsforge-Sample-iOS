//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructGroupReq.java
//

#ifndef _LibcoreIoStructGroupReq_H_
#define _LibcoreIoStructGroupReq_H_

#include "J2ObjC_header.h"

@class JavaNetInetAddress;

@interface LibcoreIoStructGroupReq : NSObject {
 @public
  jint gr_interface_;
  JavaNetInetAddress *gr_group_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)gr_interface
     withJavaNetInetAddress:(JavaNetInetAddress *)gr_group;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoStructGroupReq)

J2OBJC_FIELD_SETTER(LibcoreIoStructGroupReq, gr_group_, JavaNetInetAddress *)

FOUNDATION_EXPORT void LibcoreIoStructGroupReq_initWithInt_withJavaNetInetAddress_(LibcoreIoStructGroupReq *self, jint gr_interface, JavaNetInetAddress *gr_group);

FOUNDATION_EXPORT LibcoreIoStructGroupReq *new_LibcoreIoStructGroupReq_initWithInt_withJavaNetInetAddress_(jint gr_interface, JavaNetInetAddress *gr_group) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoStructGroupReq)

#endif // _LibcoreIoStructGroupReq_H_