//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/io/CharStreams.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoCharStreams_INCLUDE_ALL")
#if ComGoogleCommonIoCharStreams_RESTRICT
#define ComGoogleCommonIoCharStreams_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoCharStreams_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCharStreams_RESTRICT

#if !defined (_ComGoogleCommonIoCharStreams_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_INCLUDE)
#define _ComGoogleCommonIoCharStreams_

@class ComGoogleCommonIoCharSink;
@class ComGoogleCommonIoCharSource;
@class IOSObjectArray;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonIoInputSupplier;
@protocol ComGoogleCommonIoLineProcessor;
@protocol ComGoogleCommonIoOutputSupplier;
@protocol JavaIoCloseable;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaLangReadable;
@protocol JavaUtilList;

@interface ComGoogleCommonIoCharStreams : NSObject

#pragma mark Public

+ (ComGoogleCommonIoCharSource *)asCharSourceWithNSString:(NSString *)string;

+ (JavaIoWriter *)asWriterWithJavaLangAppendable:(id<JavaLangAppendable>)target;

+ (jlong)copy__WithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)from
                           withJavaLangAppendable:(id<JavaLangAppendable>)to OBJC_METHOD_FAMILY_NONE;

+ (jlong)copy__WithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)from
              withComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)to OBJC_METHOD_FAMILY_NONE;

+ (jlong)copy__WithJavaLangReadable:(id<JavaLangReadable>)from
             withJavaLangAppendable:(id<JavaLangAppendable>)to OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonIoInputSupplier>)joinWithComGoogleCommonIoInputSupplierArray:(IOSObjectArray *)suppliers;

+ (id<ComGoogleCommonIoInputSupplier>)joinWithJavaLangIterable:(id<JavaLangIterable>)suppliers;

+ (id<ComGoogleCommonIoInputSupplier>)newReaderSupplierWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)inArg
                                                                withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonIoInputSupplier>)newReaderSupplierWithNSString:(NSString *)value OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonIoOutputSupplier>)newWriterSupplierWithComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)outArg
                                                                  withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset OBJC_METHOD_FAMILY_NONE;

+ (NSString *)readFirstLineWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (id<JavaUtilList>)readLinesWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (id)readLinesWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier
               withComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)callback;

+ (id<JavaUtilList>)readLinesWithJavaLangReadable:(id<JavaLangReadable>)r;

+ (id)readLinesWithJavaLangReadable:(id<JavaLangReadable>)readable
 withComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)processor;

+ (void)skipFullyWithJavaIoReader:(JavaIoReader *)reader
                         withLong:(jlong)n;

+ (NSString *)toStringWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (NSString *)toStringWithJavaLangReadable:(id<JavaLangReadable>)r;

+ (void)writeWithJavaLangCharSequence:(id<JavaLangCharSequence>)from
  withComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)to;

#pragma mark Package-Private

+ (ComGoogleCommonIoCharSink *)asCharSinkWithComGoogleCommonIoOutputSupplier:(id<ComGoogleCommonIoOutputSupplier>)supplier;

+ (ComGoogleCommonIoCharSource *)asCharSourceWithComGoogleCommonIoInputSupplier:(id<ComGoogleCommonIoInputSupplier>)supplier;

+ (id<ComGoogleCommonIoInputSupplier>)asInputSupplierWithComGoogleCommonIoCharSource:(ComGoogleCommonIoCharSource *)source;

+ (id<ComGoogleCommonIoOutputSupplier>)asOutputSupplierWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)sink;

+ (JavaIoReader *)asReaderWithJavaLangReadable:(id<JavaLangReadable, JavaIoCloseable>)readable;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharStreams)

FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_newReaderSupplierWithNSString_(NSString *value);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharStreams_asCharSourceWithNSString_(NSString *string);

FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_newReaderSupplierWithComGoogleCommonIoInputSupplier_withJavaNioCharsetCharset_(id<ComGoogleCommonIoInputSupplier> inArg, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT id<ComGoogleCommonIoOutputSupplier> ComGoogleCommonIoCharStreams_newWriterSupplierWithComGoogleCommonIoOutputSupplier_withJavaNioCharsetCharset_(id<ComGoogleCommonIoOutputSupplier> outArg, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT void ComGoogleCommonIoCharStreams_writeWithJavaLangCharSequence_withComGoogleCommonIoOutputSupplier_(id<JavaLangCharSequence> from, id<ComGoogleCommonIoOutputSupplier> to);

FOUNDATION_EXPORT jlong ComGoogleCommonIoCharStreams_copy__WithComGoogleCommonIoInputSupplier_withComGoogleCommonIoOutputSupplier_(id<ComGoogleCommonIoInputSupplier> from, id<ComGoogleCommonIoOutputSupplier> to);

FOUNDATION_EXPORT jlong ComGoogleCommonIoCharStreams_copy__WithComGoogleCommonIoInputSupplier_withJavaLangAppendable_(id<ComGoogleCommonIoInputSupplier> from, id<JavaLangAppendable> to);

FOUNDATION_EXPORT jlong ComGoogleCommonIoCharStreams_copy__WithJavaLangReadable_withJavaLangAppendable_(id<JavaLangReadable> from, id<JavaLangAppendable> to);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoCharStreams_toStringWithJavaLangReadable_(id<JavaLangReadable> r);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoCharStreams_toStringWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoCharStreams_readFirstLineWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonIoCharStreams_readLinesWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonIoCharStreams_readLinesWithJavaLangReadable_(id<JavaLangReadable> r);

FOUNDATION_EXPORT id ComGoogleCommonIoCharStreams_readLinesWithJavaLangReadable_withComGoogleCommonIoLineProcessor_(id<JavaLangReadable> readable, id<ComGoogleCommonIoLineProcessor> processor);

FOUNDATION_EXPORT id ComGoogleCommonIoCharStreams_readLinesWithComGoogleCommonIoInputSupplier_withComGoogleCommonIoLineProcessor_(id<ComGoogleCommonIoInputSupplier> supplier, id<ComGoogleCommonIoLineProcessor> callback);

FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_joinWithJavaLangIterable_(id<JavaLangIterable> suppliers);

FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_joinWithComGoogleCommonIoInputSupplierArray_(IOSObjectArray *suppliers);

FOUNDATION_EXPORT void ComGoogleCommonIoCharStreams_skipFullyWithJavaIoReader_withLong_(JavaIoReader *reader, jlong n);

FOUNDATION_EXPORT JavaIoWriter *ComGoogleCommonIoCharStreams_asWriterWithJavaLangAppendable_(id<JavaLangAppendable> target);

FOUNDATION_EXPORT JavaIoReader *ComGoogleCommonIoCharStreams_asReaderWithJavaLangReadable_(id<JavaLangReadable, JavaIoCloseable> readable);

FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoCharStreams_asInputSupplierWithComGoogleCommonIoCharSource_(ComGoogleCommonIoCharSource *source);

FOUNDATION_EXPORT id<ComGoogleCommonIoOutputSupplier> ComGoogleCommonIoCharStreams_asOutputSupplierWithComGoogleCommonIoCharSink_(ComGoogleCommonIoCharSink *sink);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharStreams_asCharSourceWithComGoogleCommonIoInputSupplier_(id<ComGoogleCommonIoInputSupplier> supplier);

FOUNDATION_EXPORT ComGoogleCommonIoCharSink *ComGoogleCommonIoCharStreams_asCharSinkWithComGoogleCommonIoOutputSupplier_(id<ComGoogleCommonIoOutputSupplier> supplier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharStreams)

#endif

#if !defined (_ComGoogleCommonIoCharStreams_StringCharSource_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_StringCharSource_INCLUDE)
#define _ComGoogleCommonIoCharStreams_StringCharSource_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_StringCharSource_$1_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_StringCharSource_$1_INCLUDE)
#define _ComGoogleCommonIoCharStreams_StringCharSource_$1_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_StringCharSource_$1_$1_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_StringCharSource_$1_$1_INCLUDE)
#define _ComGoogleCommonIoCharStreams_StringCharSource_$1_$1_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_$1_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$1_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$1_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_$2_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$2_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$2_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_$3_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$3_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$3_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_$4_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$4_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$4_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_$5_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$5_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$5_

#endif

#if !defined (_ComGoogleCommonIoCharStreams_$6_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_$6_INCLUDE)
#define _ComGoogleCommonIoCharStreams_$6_

#endif
#pragma pop_macro("ComGoogleCommonIoCharStreams_INCLUDE_ALL")
