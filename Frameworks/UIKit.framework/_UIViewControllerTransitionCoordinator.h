/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIViewControllerTransitionCoordinator-Protocol.h"

@class NSMutableArray, _UIViewControllerTransitionContext;

// Not exported
@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>
{
    _UIViewControllerTransitionContext *__mainContext;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
}

@property(retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers; // @synthesize _interactiveChangeHandlers=__interactiveChangeHandlers;
@property(retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions; // @synthesize _alongsideCompletions=__alongsideCompletions;
@property(retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews; // @synthesize _alongsideAnimationViews=__alongsideAnimationViews;
@property(retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations; // @synthesize _alongsideAnimations=__alongsideAnimations;
@property(nonatomic, setter=_setMainContext:) _UIViewControllerTransitionContext *_mainContext; // @synthesize _mainContext=__mainContext;
- (void)handlerToInvokeOnInteractivityChanges:(id)arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;
- (_Bool)animateAlongsideTransition:(id)arg1 completion:(void)arg2;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(void)arg3;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;
- (id)_alongsideCompletions:(_Bool)arg1;
- (id)_alongsideAnimations:(_Bool)arg1;
- (id)_interactiveChangeHandlers:(_Bool)arg1;
- (struct CGAffineTransform)targetTransform;
- (struct CGAffineTransform)affineTransform;
- (_Bool)isRotating;
- (id)containerView;
- (id)viewControllerForKey:(id)arg1;
- (double)transitionDuration;
- (long long)completionCurve;
- (double)completionVelocity;
- (double)percentComplete;
- (_Bool)isCompleting;
- (_Bool)isCancelled;
- (_Bool)isInteractive;
- (_Bool)initiallyInteractive;
- (long long)presentationStyle;
- (_Bool)isAnimated;
- (void)dealloc;
- (id)initWithMainContext:(id)arg1;

@end

