/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAutoRotatingWindow.h"

#import "CKDismissViewDelegate-Protocol.h"
#import "CKJoystickHostView-Protocol.h"

@class CKDismissView, CKJoystickView, NSArray;

@interface CKJoystickWindow : UIAutoRotatingWindow <CKDismissViewDelegate, CKJoystickHostView>
{
    CKJoystickView *_joystickView;
    CKDismissView *_dismissView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CKDismissView *dismissView; // @synthesize dismissView=_dismissView;
@property(retain, nonatomic) CKJoystickView *joystickView; // @synthesize joystickView=_joystickView;
- (void)dismissViewWasTapped:(id)arg1;
- (void)joystickGestureRecognized:(id)arg1;
@property(copy, nonatomic) NSArray *passthroughViews;
- (void)dismissJoystickViewAnimated:(_Bool)arg1;
- (void)presentJoystickView:(id)arg1 fromPoint:(struct CGPoint)arg2 inView:(id)arg3 animated:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

