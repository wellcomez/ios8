/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface PRSFeedback : NSObject <NSCopying>
{
    long long _timestamp;
}

+ (id)JSONDictionaryForFeedbackArray:(id)arg1;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
- (id)plist;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)type;
- (id)initWithTimestamp:(long long)arg1;

@end
