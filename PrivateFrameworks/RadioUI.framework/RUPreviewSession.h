/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPAVController, MPAVItem, NSArray, NSHashTable;

@interface RUPreviewSession : NSObject
{
    NSArray *_items;
    MPAVController *_player;
    NSHashTable *_sessionObservers;
    double _customTrackPreviewDuration;
}

@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double customTrackPreviewDuration; // @synthesize customTrackPreviewDuration=_customTrackPreviewDuration;
- (void).cxx_destruct;
- (void)_unregisterForPlayerNotifications;
- (void)_registerForPlayerNotifications;
- (void)_didStopWithOptions:(long long)arg1 finalItem:(id)arg2 didFinalItemPlayToCompletion:(_Bool)arg3;
- (void)_didChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)stopWithOptions:(long long)arg1 fadeoutDuration:(double)arg2;
- (void)start;
- (void)removeSessionObserver:(id)arg1;
- (void)addSessionObserver:(id)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double currentItemDuration;
@property(readonly, nonatomic) MPAVItem *currentItem;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

@end

