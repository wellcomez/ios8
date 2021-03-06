/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIPresentationController.h>

#import "_UISearchControllerPresenting-Protocol.h"

@class NSMapTable, UIPresentationController<_UISearchControllerPresenting>, UIView, _UISearchPresentationAssistant;

// Not exported
@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    struct CGRect _finalFrameForContainerView;
    struct {
        unsigned int searchBarWasTableHeaderView:1;
        unsigned int excisedSearchBarDuringPresentation:1;
        unsigned int searchBarWantedAutolayoutBeforeExcision:1;
    } _controllerFlags;
}

+ (_Bool)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;
@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView=_finalFrameForContainerView;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForSizeClassPair:(CDStruct_d58201db)arg1;
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_d58201db)arg1;
- (long long)adaptivePresentationStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (_Bool)shouldRemovePresentersView;
- (double)_visibleRefreshControlHeightForTableView:(id)arg1;
- (void)_placeSearchBarBackIntoOriginalContext;
- (void)_exciseSearchBarFromCurrentContext;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2;

@end

