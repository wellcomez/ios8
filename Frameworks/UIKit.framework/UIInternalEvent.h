/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIEvent.h>

// Not exported
@interface UIInternalEvent : UIEvent
{
    struct __GSEvent *_gsEvent;
    struct __IOHIDEvent *_hidEvent;
}

- (id)_screen;
- (struct __IOHIDEvent *)_hidEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (struct __GSEvent *)_gsEvent;
- (void)_setGSEvent:(struct __GSEvent *)arg1;
- (void)dealloc;

@end
