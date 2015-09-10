//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/junit/build_result/java/org/hamcrest/BaseDescription.java
//

#ifndef _OrgHamcrestBaseDescription_H_
#define _OrgHamcrestBaseDescription_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/Description.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestSelfDescribing;

@interface OrgHamcrestBaseDescription : NSObject < OrgHamcrestDescription >

#pragma mark Public

- (instancetype)init;

- (id<OrgHamcrestDescription>)appendDescriptionOfWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)value;

- (id<OrgHamcrestDescription>)appendListWithNSString:(NSString *)start
                                        withNSString:(NSString *)separator
                                        withNSString:(NSString *)end
                                withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendTextWithNSString:(NSString *)text;

- (id<OrgHamcrestDescription>)appendValueWithId:(id)value;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                     withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                        withNSObjectArray:(IOSObjectArray *)values;

#pragma mark Protected

- (void)appendWithChar:(jchar)c;

- (void)appendWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestBaseDescription)

FOUNDATION_EXPORT void OrgHamcrestBaseDescription_init(OrgHamcrestBaseDescription *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestBaseDescription)

#endif // _OrgHamcrestBaseDescription_H_
