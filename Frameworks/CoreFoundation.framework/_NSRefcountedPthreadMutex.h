/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface _NSRefcountedPthreadMutex : NSObject
{
    struct _opaque_pthread_mutex_t lock;
}

- (void)finalize;
- (void)dealloc;
- (void)unlock;
- (void)lock;
- (id)init;

@end

