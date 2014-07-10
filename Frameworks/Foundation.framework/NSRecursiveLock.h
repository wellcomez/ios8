/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSLocking-Protocol.h"

@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (_Bool)isLocking;
@property(copy) NSString *name;
- (id)description;
- (void)unlock;
- (_Bool)tryLock;
- (_Bool)lockBeforeDate:(id)arg1;
- (void)lock;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
