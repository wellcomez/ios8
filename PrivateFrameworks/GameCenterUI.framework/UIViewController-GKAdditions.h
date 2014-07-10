/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "GKContentRefresh-Protocol.h"
#import "GKURLHandling-Protocol.h"

@class UIPopoverController;

@interface UIViewController (GKAdditions) <GKContentRefresh, GKURLHandling>
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(id)arg3;
- (void)_gkPresentActivityViewController:(id)arg1 fromView:(id)arg2;
- (void)_gkDismissActivityViewControllerAnimated:(_Bool)arg1;
@property(nonatomic) UIPopoverController *gkPopoverController;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
@end
