/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, RUAudioPreviewView, SKUICircleProgressIndicator, UIButton, UILabel, UIView;

@interface RUStationTreeTableViewCell : UITableViewCell
{
    SKUICircleProgressIndicator *_activityIndicator;
    UIButton *_addButton;
    RUAudioPreviewView *_audioPreviewView;
    UILabel *_nowPlayingTextLabel;
    UIView *_rightAccessoryView;
    UILabel *_titleLabel;
    _Bool _playing;
    _Bool _showsActivityIndicator;
    long long _cellDisplayStyle;
}

+ (id)_titleLabelFontWithEmphasis:(_Bool)arg1;
+ (id)_nowPlayingTextLabelFont;
+ (struct CGSize)_audioPreviewViewSize;
+ (_Bool)_audioPreviewViewShowsFaceWhenNotPlaying;
+ (double)defaultHeightForTraitCollection:(id)arg1 includingNowPlayingText:(_Bool)arg2;
@property(nonatomic) _Bool showsActivityIndicator; // @synthesize showsActivityIndicator=_showsActivityIndicator;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) long long cellDisplayStyle; // @synthesize cellDisplayStyle=_cellDisplayStyle;
- (void).cxx_destruct;
- (void)_showChangeToPlaying:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_layoutSubviewsForcingTitleLabelCentered:(_Bool)arg1 alignLabelsHorizontallyForPlaying:(_Bool)arg2;
- (void)_applyAttributesForChangedCellStyleAnimated:(_Bool)arg1;
- (id)_audioPreviewAnimationForShowing:(_Bool)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (double)_textLabelMinXWhenPlaying:(_Bool)arg1;
- (double)_audioPreviewViewMinX;
@property(copy, nonatomic) NSString *title;
- (void)setPlaying:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNowPlayingText:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *nowPlayingText;
@property(readonly, nonatomic) RUAudioPreviewView *audioPreviewView;
@property(readonly, nonatomic) UIButton *addButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

