/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABContactCell.h>

@class ABTransportButton, NSDictionary, UILabel;

@interface ABStarkFaceTimeCell : ABContactCell
{
    id <ABPropertyCellDelegate> _delegate;
    NSDictionary *_labelTextAttributes;
    UILabel *_faceTimeLabel;
    ABTransportButton *_transportIcon;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) ABTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transportButtonClicked:(id)arg1;
- (void)performDefaultAction;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
