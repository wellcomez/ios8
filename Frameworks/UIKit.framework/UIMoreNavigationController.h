/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UINavigationController.h>

@class NSArray, UIMoreListController, UIViewController;

@interface UIMoreNavigationController : UINavigationController
{
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

+ (Class)_moreListControllerClass;
@property(readonly, retain, nonatomic) UIViewController *moreListController; // @synthesize moreListController=_moreListController;
@property(nonatomic) _Bool moreViewControllersChanged;
@property(nonatomic) _Bool allowsCustomizing;
@property(retain, nonatomic) NSArray *moreViewControllers;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_redisplayMoreTableView;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_ensureChildrenHaveParentViewController;
- (id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long *)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) UIViewController *displayedViewController;
- (void)_restoreOriginalNavigationController;
- (void)restoreOriginalNavigationController:(id)arg1;
- (id)_preparedViewController:(id)arg1;
- (void)dealloc;
- (id)init;

@end
