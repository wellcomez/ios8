/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface GKObserverTrampoline : NSObject
{
    id _observee;
    NSString *_keyPath;
    id _block;
    int _cancellationPredicate;
    unsigned long long _options;
}

- (void)dealloc;
- (void)cancelObservation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) id token;
- (void)startObserving;
- (id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id)arg4;

@end

