/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SBUIRemoteAlertHostInterface
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;
- (void)setShouldDismissOnUILock:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setDesiredStatusBarStyleOverrides:(int)arg1;
- (void)setDismissalAnimationStyle:(long long)arg1;
- (void)setAllowsAlertStacking:(_Bool)arg1;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)setAllowsMenuButtonDismissal:(_Bool)arg1;
- (void)setDesiredHardwareButtonEvents:(long long)arg1;
- (void)dismiss;
- (void)setAllowsBanners:(_Bool)arg1;
@end

