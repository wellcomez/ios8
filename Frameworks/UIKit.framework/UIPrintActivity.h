/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIActivity.h>

@class UIViewController;

@interface UIPrintActivity : UIActivity
{
    UIViewController *_wrapperViewController;
}

@property(retain) UIViewController *wrapperViewController; // @synthesize wrapperViewController=_wrapperViewController;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (id)printInteractionController;
- (void)cancelPrintOptions;
- (void)performActivity;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;
- (void)dealloc;

@end
