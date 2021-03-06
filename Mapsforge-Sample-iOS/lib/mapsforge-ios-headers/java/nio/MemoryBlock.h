//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/MemoryBlock.java
//

#ifndef _JavaNioMemoryBlock_H_
#define _JavaNioMemoryBlock_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;
@class JavaIoFileDescriptor;
@class JavaNioByteOrder;
@class JavaNioChannelsFileChannel_MapMode;

@interface JavaNioMemoryBlock : NSObject {
 @public
  jlong address_;
  jlong size_;
}

#pragma mark Public

+ (JavaNioMemoryBlock *)allocateWithInt:(jint)byteCount OBJC_METHOD_FAMILY_NONE;

- (IOSByteArray *)array;

- (void)free;

- (jlong)getSize;

+ (JavaNioMemoryBlock *)mmapWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                            withLong:(jlong)offset
                                            withLong:(jlong)size
              withJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mapMode;

- (jbyte)peekByteWithInt:(jint)offset;

- (void)peekByteArrayWithInt:(jint)offset
               withByteArray:(IOSByteArray *)dst
                     withInt:(jint)dstOffset
                     withInt:(jint)byteCount;

- (void)peekCharArrayWithInt:(jint)offset
               withCharArray:(IOSCharArray *)dst
                     withInt:(jint)dstOffset
                     withInt:(jint)charCount
                 withBoolean:(jboolean)swap;

- (void)peekDoubleArrayWithInt:(jint)offset
               withDoubleArray:(IOSDoubleArray *)dst
                       withInt:(jint)dstOffset
                       withInt:(jint)doubleCount
                   withBoolean:(jboolean)swap;

- (void)peekFloatArrayWithInt:(jint)offset
               withFloatArray:(IOSFloatArray *)dst
                      withInt:(jint)dstOffset
                      withInt:(jint)floatCount
                  withBoolean:(jboolean)swap;

- (jint)peekIntWithInt:(jint)offset
  withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)peekIntArrayWithInt:(jint)offset
               withIntArray:(IOSIntArray *)dst
                    withInt:(jint)dstOffset
                    withInt:(jint)intCount
                withBoolean:(jboolean)swap;

- (jlong)peekLongWithInt:(jint)offset
    withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)peekLongArrayWithInt:(jint)offset
               withLongArray:(IOSLongArray *)dst
                     withInt:(jint)dstOffset
                     withInt:(jint)longCount
                 withBoolean:(jboolean)swap;

- (jshort)peekShortWithInt:(jint)offset
      withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)peekShortArrayWithInt:(jint)offset
               withShortArray:(IOSShortArray *)dst
                      withInt:(jint)dstOffset
                      withInt:(jint)shortCount
                  withBoolean:(jboolean)swap;

- (void)pokeByteWithInt:(jint)offset
               withByte:(jbyte)value;

- (void)pokeByteArrayWithInt:(jint)offset
               withByteArray:(IOSByteArray *)src
                     withInt:(jint)srcOffset
                     withInt:(jint)byteCount;

- (void)pokeCharArrayWithInt:(jint)offset
               withCharArray:(IOSCharArray *)src
                     withInt:(jint)srcOffset
                     withInt:(jint)charCount
                 withBoolean:(jboolean)swap;

- (void)pokeDoubleArrayWithInt:(jint)offset
               withDoubleArray:(IOSDoubleArray *)src
                       withInt:(jint)srcOffset
                       withInt:(jint)doubleCount
                   withBoolean:(jboolean)swap;

- (void)pokeFloatArrayWithInt:(jint)offset
               withFloatArray:(IOSFloatArray *)src
                      withInt:(jint)srcOffset
                      withInt:(jint)floatCount
                  withBoolean:(jboolean)swap;

- (void)pokeIntWithInt:(jint)offset
               withInt:(jint)value
  withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)pokeIntArrayWithInt:(jint)offset
               withIntArray:(IOSIntArray *)src
                    withInt:(jint)srcOffset
                    withInt:(jint)intCount
                withBoolean:(jboolean)swap;

- (void)pokeLongWithInt:(jint)offset
               withLong:(jlong)value
   withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)pokeLongArrayWithInt:(jint)offset
               withLongArray:(IOSLongArray *)src
                     withInt:(jint)srcOffset
                     withInt:(jint)longCount
                 withBoolean:(jboolean)swap;

- (void)pokeShortWithInt:(jint)offset
               withShort:(jshort)value
    withJavaNioByteOrder:(JavaNioByteOrder *)order;

- (void)pokeShortArrayWithInt:(jint)offset
               withShortArray:(IOSShortArray *)src
                      withInt:(jint)srcOffset
                      withInt:(jint)shortCount
                  withBoolean:(jboolean)swap;

- (jlong)toLong;

- (NSString *)description;

+ (JavaNioMemoryBlock *)wrapFromJniWithLong:(jlong)address
                                   withLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioMemoryBlock)

FOUNDATION_EXPORT JavaNioMemoryBlock *JavaNioMemoryBlock_mmapWithJavaIoFileDescriptor_withLong_withLong_withJavaNioChannelsFileChannel_MapMode_(JavaIoFileDescriptor *fd, jlong offset, jlong size, JavaNioChannelsFileChannel_MapMode *mapMode);

FOUNDATION_EXPORT JavaNioMemoryBlock *JavaNioMemoryBlock_allocateWithInt_(jint byteCount);

FOUNDATION_EXPORT JavaNioMemoryBlock *JavaNioMemoryBlock_wrapFromJniWithLong_withLong_(jlong address, jlong byteCount);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioMemoryBlock)

#endif // _JavaNioMemoryBlock_H_
