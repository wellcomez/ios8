/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface SKWeakReference : NSObject
{
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;
@property(readonly, nonatomic) id object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

