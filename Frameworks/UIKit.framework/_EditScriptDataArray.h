/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_EditScriptData-Protocol.h"

@class NSArray, NSString;

// Not exported
@interface _EditScriptDataArray : NSObject <_EditScriptData>
{
    NSArray *_data;
    NSString *_cachedStringValue;
}

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
@property(retain, nonatomic) NSString *cachedStringValue; // @synthesize cachedStringValue=_cachedStringValue;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(_Bool)arg2;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)lengthOfItem:(long long)arg1;
- (id)stringValue;
- (id)stringAtIndex:(long long)arg1;
- (long long)length;
- (id)description;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;
- (void)dealloc;

@end

