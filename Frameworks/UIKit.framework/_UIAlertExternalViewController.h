/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIAlertView, UILabel;

// Not exported
@interface _UIAlertExternalViewController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSMutableArray *_buttons;
    UIAlertView *_representedAlert;
}

@property(nonatomic) UIAlertView *representedAlert; // @synthesize representedAlert=_representedAlert;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_dismissIfCapable;
- (void)_buttonTapped:(id)arg1;
- (id)_buttonWithTitle:(id)arg1 index:(long long)arg2;
- (id)_messageAttributedStringSmallText;
- (id)_messageAttributesSmallText;
- (id)_messageAttributedString;
- (id)_messageAttributes;
- (id)_titleAttributedString;
- (id)_titleAttributes;
- (id)_textAttributes;
- (void)dealloc;
- (id)init;

@end

