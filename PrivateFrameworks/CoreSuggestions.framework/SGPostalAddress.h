/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSuggestions/SGObject.h>

@class NSString;

@interface SGPostalAddress : SGObject
{
    NSString *_cachedAddress;
    long long _cachedAddressDispatchOnceToken;
    NSString *_rawAddress;
    NSString *_label;
}

+ (id)postalAddress:(id)arg1 label:(id)arg2 recordId:(id)arg3 origin:(id)arg4;
+ (id)address:(id)arg1 label:(id)arg2 recordId:(id)arg3 origin:(id)arg4;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToPostalAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *address;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 label:(id)arg2 recordId:(id)arg3 origin:(id)arg4;

@end

