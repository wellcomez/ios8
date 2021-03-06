/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

#import "GKPlayerPhotoContainer-Protocol.h"

@class GKPlayer, UIImage;

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer>
{
    GKPlayer *_player;
    UIImage *_actualImage;
    long long _onAdaptiveBackground;
}

+ (void)initialize;
@property(nonatomic, getter=isOnAdaptiveBackground) long long onAdaptiveBackground; // @synthesize onAdaptiveBackground=_onAdaptiveBackground;
@property(retain, nonatomic) UIImage *actualImage; // @synthesize actualImage=_actualImage;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)invalidateIntrinsicContentSize;
- (void)refreshPhotoWithCompletionHandler:(id)arg1;
- (void)refreshPhoto;
- (void)dealloc;

@end

