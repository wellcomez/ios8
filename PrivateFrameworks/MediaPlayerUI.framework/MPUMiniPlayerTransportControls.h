/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPTransportControls.h"

@class MPUProspectivePlaybackInformation;

@interface MPUMiniPlayerTransportControls : MPTransportControls
{
    id <MPUMiniPlayerTransportControlsDelegate> _delegate;
    MPUProspectivePlaybackInformation *_prospectivePlaybackInformation;
}

+ (_Bool)buttonImagesUseBackgroundImage;
+ (long long)buttonType;
+ (Class)buttonClass;
@property(retain, nonatomic) MPUProspectivePlaybackInformation *prospectivePlaybackInformation; // @synthesize prospectivePlaybackInformation=_prospectivePlaybackInformation;
@property(nonatomic) __weak id <MPUMiniPlayerTransportControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_prospectivePlaybackInformationDidChangeAnimated:(_Bool)arg1;
- (void)setProspectivePlaybackInformation:(id)arg1 animated:(_Bool)arg2;
- (_Bool)usesTintColorForControls;
- (id)tintColorForPart:(unsigned long long)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(_Bool)arg3;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end
