/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

#import <MPUFoundation/MPUTransportButton-Protocol.h>

@class MPUTransportButtonEventHandler;

@interface MPUTransportButton : UIButton <MPUTransportButton>
{
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
- (_Bool)shouldTrack;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)isEnabled;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

