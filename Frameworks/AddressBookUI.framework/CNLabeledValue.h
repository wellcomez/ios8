/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface CNLabeledValue : NSObject <NSCopying>
{
    int _multiValueIdentifier;
    NSString *_label;
    id _value;
}

+ (id)builtinLabelsForProperty:(id)arg1;
+ (void)deleteCustomLabel:(id)arg1;
+ (id)allCustomLabels;
+ (id)allLabels;
+ (id)defaultLabels;
+ (void *)addressBook;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)labeledValueWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3;
@property(readonly, copy) id value; // @synthesize value=_value;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *localizedLabel;
- (void)setMultiValueIdentifier:(int)arg1;
@property(readonly) int multiValueIdentifier;
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqualToLabelledValue:(id)arg1 includeIdentifiers:(_Bool)arg2;
- (_Bool)isEqualToLabelledValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)labeledValueBySettingValue:(id)arg1;
- (id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMultiValueIdentifier:(int)arg1 label:(id)arg2 value:(id)arg3;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end

