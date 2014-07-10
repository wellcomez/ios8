/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIStatusBarItemView.h>

@class UIView;

// Not exported
@interface UIStatusBarBatteryItemView : UIStatusBarItemView
{
    int _capacity;
    int _state;
    UIView *_accessoryView;
}

- (double)legibilityStrength;
- (void)_updateAccessoryImage;
- (double)extraRightPadding;
- (id)contentsImage;
- (id)_accessoryImage;
- (_Bool)_needsAccessoryImage;
- (double)_batteryYOffsetWithBackground:(id)arg1;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)dealloc;

@end
