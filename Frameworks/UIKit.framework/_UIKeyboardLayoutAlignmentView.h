/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

// Not exported
@interface _UIKeyboardLayoutAlignmentView : UIView
{
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_addConstraints;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_updateConstraintsToMatchFrame:(struct CGRect)arg1;
- (struct CGRect)_frameInBoundsForKeyboardFrame:(struct CGRect)arg1;

@end
