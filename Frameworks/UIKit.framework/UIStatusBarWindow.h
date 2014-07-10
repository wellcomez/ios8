/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWindow.h>

@class UIStatusBar, UIStatusBarCorners;

@interface UIStatusBarWindow : UIWindow
{
    UIStatusBar *_statusBar;
    long long _orientation;
    UIStatusBarCorners *_topCorners;
    double _topCornersOffset;
    UIStatusBarCorners *_bottomCorners;
    _Bool _cornersHidden;
}

+ (struct CGRect)statusBarWindowFrame;
+ (struct CGRect)_defaultStatusBarSceneBounds;
+ (struct CGRect)_defaultStatusBarSceneBoundsForOrientation:(long long)arg1;
+ (struct CGRect)_defaultStatusBarSceneReferenceBounds;
+ (_Bool)isIncludedInClassicJail;
- (struct CGRect)_sceneReferenceBounds;
- (struct CGRect)_sceneBounds;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (_Bool)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;
- (_Bool)_isStatusBarWindow;
- (_Bool)_disableGroupOpacity;
- (_Bool)_disableViewScaling;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTopCornerStyle:(int)arg1 topCornersOffset:(double)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4;
- (void)setCornersHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (long long)orientation;
- (void)_rotate;
- (void)setOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)statusBarWindowFrame;

@end
