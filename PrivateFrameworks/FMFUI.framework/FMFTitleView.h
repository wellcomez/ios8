/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

// Not exported
@interface FMFTitleView : UIView
{
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

+ (void)updateLocation:(id)arg1;
+ (id)viewForLocation:(id)arg1;
+ (id)sharedTitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (void).cxx_destruct;
- (void)_updateLabels:(id)arg1;

@end
