/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UIViewServiceDeputy-Protocol.h"
#import "_UIViewServiceDeputyRotationDelegate-Protocol.h"
#import "_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface-Protocol.h"

@class NSArray, UIWindow, _UIAsyncInvocation;

// Not exported
@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate>
{
    id _remoteViewControllerProxy;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIWindow *_hostedWindow;
    struct CGPoint _windowOffset;
    _Bool _canRestoreInputViews;
    _Bool _isRestoringInputViews;
    _Bool _didResignForDisappear;
    _Bool _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(_Bool)arg2;
- (void)forceSyncToStatusBarOrientation;
- (id)invalidate;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__hostViewWillDisappear:(_Bool)arg1;
- (void)__hostViewWillAppear:(_Bool)arg1;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (void)__hostWillEnterForeground;
- (void)_restoreInputViews;
- (void)__hostDidEnterBackground;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setWindowOffset:(struct CGPoint)arg1;
- (void)__createHostedTextEffectsWithReplyHandler:(id)arg1;
- (void)_sendNotification:(id)arg1;
- (void)windowDidGainFirstResponder:(id)arg1;
- (void)dealloc;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (id)_queue;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

