/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface CalNWideQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;
- (void)executeBlock:(id)arg1;
- (id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2;

@end

