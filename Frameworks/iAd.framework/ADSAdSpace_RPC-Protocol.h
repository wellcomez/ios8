/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ADSAdSpace_RPC
- (void)_priv_loadAd:(id)arg1;
- (void)_priv_adSpaceDidDisappear;
- (void)_priv_adSpaceDidAppear;
- (void)_remote_playbackFailedForURL:(id)arg1;
- (void)_remote_playbackFinishedForContentHash:(id)arg1;
- (void)_remote_playbackResumed;
- (void)_remote_playbackPaused;
- (void)_remote_playbackStartedForImpressionSource:(int)arg1;
- (void)_remote_reportPreRollDidStop;
- (void)_remote_reportPreRollDidStart;
- (void)_remote_interstitialRemovedFromSuperview;
- (void)_remote_bannerCancelAction;
- (void)_remote_bannerRefuseAction;
- (void)_remote_bannerBeginActionFromFrame:(id)arg1 tapLocation:(id)arg2 completionHandler:(id)arg3;
- (void)_remote_setShouldNotCycle:(_Bool)arg1;
- (void)_remote_setFrame:(id)arg1;
- (void)_remote_setVisibility:(long long)arg1;
- (void)_remote_setAuthenticationUserName:(id)arg1;
- (void)_remote_setSection:(id)arg1;
- (void)_priv_cycleImpressionImmediately;
- (void)_priv_setServerURL:(id)arg1;
- (void)_remote_setIdentifier:(id)arg1;
- (void)_remote_close;
- (void)_remote_setupComplete;
@end

