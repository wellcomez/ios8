/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAudioSessionMediaPlayerOnly, AVPixelBufferAttributeMediator, AVPlayerItem, AVPropertyStorage, AVWeakKeyValueObserverProxy, AVWeakReference, NSArray, NSDictionary, NSError, NSHashTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface AVPlayerInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakKeyValueObserverProxy *KVOProxy;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVPlayerItem *currentItem;
    struct OpaqueFigPlayer *figPlayer;
    struct OpaqueCMClock *figMasterClock;
    AVPropertyStorage *propertyStorage;
    NSMutableDictionary *pendingFigPlayerProperties;
    NSArray *expectedAssetTypes;
    AVPlayerItem *lastItem;
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;
    NSMutableSet *items;
    NSObject<OS_dispatch_queue> *layersQ;
    NSMutableSet *videoLayers;
    NSMutableSet *subtitleLayers;
    NSMutableSet *closedCaptionLayers;
    struct CGSize cachedDisplaySize;
    NSHashTable *avPlayerLayers;
    NSString *externalPlaybackVideoGravity;
    long long status;
    NSError *error;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSArray *displaysUsedForPlayback;
    _Bool needsToCreateFigPlayer;
    _Bool logPerformanceData;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    struct OpaqueCMTimebase *proxyTimebase;
    _Bool reevaluateBackgroundPlayback;
    _Bool hostApplicationInForeground;
    _Bool hadAssociatedOnscreenPlayerLayerWhenSuspended;
    _Bool iapdExtendedModeIsActive;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    NSDictionary *vibrationPattern;
    struct OpaqueFigSimpleMutex *prerollIDMutex;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    id prerollCompletionHandler;
    _Bool autoSwitchStreamVariants;
    _Bool preparesItemsForPlaybackAsynchronously;
    _Bool allowsOutOfBandTextTrackRendering;
}

@end
