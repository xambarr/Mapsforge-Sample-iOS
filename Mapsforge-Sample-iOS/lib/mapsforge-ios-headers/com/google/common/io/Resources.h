//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/io/Resources.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoResources_INCLUDE_ALL")
#if ComGoogleCommonIoResources_RESTRICT
#define ComGoogleCommonIoResources_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoResources_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoResources_RESTRICT

#if !defined (_ComGoogleCommonIoResources_) && (ComGoogleCommonIoResources_INCLUDE_ALL || ComGoogleCommonIoResources_INCLUDE)
#define _ComGoogleCommonIoResources_

@class ComGoogleCommonIoByteSource;
@class ComGoogleCommonIoCharSource;
@class IOSByteArray;
@class IOSClass;
@class JavaIoOutputStream;
@class JavaNetURL;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonIoInputSupplier;
@protocol ComGoogleCommonIoLineProcessor;
@protocol JavaUtilList;

@interface ComGoogleCommonIoResources : NSObject

#pragma mark Public

+ (ComGoogleCommonIoByteSource *)asByteSourceWithJavaNetURL:(JavaNetURL *)url;

+ (ComGoogleCommonIoCharSource *)asCharSourceWithJavaNetURL:(JavaNetURL *)url
                                  withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (void)copy__WithJavaNetURL:(JavaNetURL *)from
      withJavaIoOutputStream:(JavaIoOutputStream *)to OBJC_METHOD_FAMILY_NONE;

+ (JavaNetURL *)getResourceWithIOSClass:(IOSClass *)contextClass
                           withNSString:(NSString *)resourceName;

+ (JavaNetURL *)getResourceWithNSString:(NSString *)resourceName;

+ (id<ComGoogleCommonIoInputSupplier>)newInputStreamSupplierWithJavaNetURL:(JavaNetURL *)url OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonIoInputSupplier>)newReaderSupplierWithJavaNetURL:(JavaNetURL *)url
                                            withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilList>)readLinesWithJavaNetURL:(JavaNetURL *)url
                  withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (id)readLinesWithJavaNetURL:(JavaNetURL *)url
    withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
withComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)callback;

+ (IOSByteArray *)toByteArrayWithJavaNetURL:(JavaNetURL *)url;

+ (NSString *)toStringWithJavaNetURL:(JavaNetURL *)url
           withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoResources)

FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoResources_newInputStreamSupplierWithJavaNetURL_(JavaNetURL *url);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoResources_asByteSourceWithJavaNetURL_(JavaNetURL *url);

FOUNDATION_EXPORT id<ComGoogleCommonIoInputSupplier> ComGoogleCommonIoResources_newReaderSupplierWithJavaNetURL_withJavaNioCharsetCharset_(JavaNetURL *url, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoResources_asCharSourceWithJavaNetURL_withJavaNioCharsetCharset_(JavaNetURL *url, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonIoResources_toByteArrayWithJavaNetURL_(JavaNetURL *url);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoResources_toStringWithJavaNetURL_withJavaNioCharsetCharset_(JavaNetURL *url, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT id ComGoogleCommonIoResources_readLinesWithJavaNetURL_withJavaNioCharsetCharset_withComGoogleCommonIoLineProcessor_(JavaNetURL *url, JavaNioCharsetCharset *charset, id<ComGoogleCommonIoLineProcessor> callback);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonIoResources_readLinesWithJavaNetURL_withJavaNioCharsetCharset_(JavaNetURL *url, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT void ComGoogleCommonIoResources_copy__WithJavaNetURL_withJavaIoOutputStream_(JavaNetURL *from, JavaIoOutputStream *to);

FOUNDATION_EXPORT JavaNetURL *ComGoogleCommonIoResources_getResourceWithNSString_(NSString *resourceName);

FOUNDATION_EXPORT JavaNetURL *ComGoogleCommonIoResources_getResourceWithIOSClass_withNSString_(IOSClass *contextClass, NSString *resourceName);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoResources)

#endif

#if !defined (_ComGoogleCommonIoResources_UrlByteSource_) && (ComGoogleCommonIoResources_INCLUDE_ALL || ComGoogleCommonIoResources_UrlByteSource_INCLUDE)
#define _ComGoogleCommonIoResources_UrlByteSource_

#endif
#pragma pop_macro("ComGoogleCommonIoResources_INCLUDE_ALL")
