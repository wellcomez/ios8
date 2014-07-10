/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class UIResponder, UIWindow;

@protocol _UIResponderForwardable <NSObject>
@property(readonly, retain, nonatomic) UIWindow *window;
@property(retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property(nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
- (id)_mutableForwardingRecord;
- (void)_abandonForwardingRecord;
- (_Bool)_isAbandoningForwardingRecord;
- (id)gestureRecognizers;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (id)_forwardingRecord;
- (_Bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
@end
