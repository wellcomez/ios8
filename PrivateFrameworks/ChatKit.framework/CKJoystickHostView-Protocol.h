/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class CKJoystickView, NSArray;

@protocol CKJoystickHostView
+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *passthroughViews;
@property(readonly, retain, nonatomic) CKJoystickView *joystickView;
- (void)dismissJoystickViewAnimated:(_Bool)arg1;
- (void)presentJoystickView:(id)arg1 fromPoint:(struct CGPoint)arg2 inView:(id)arg3 animated:(_Bool)arg4;
@end
