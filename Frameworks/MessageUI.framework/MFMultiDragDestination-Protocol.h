/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MFMultiDragDestination <NSObject>
- (id)supportedDropTypes:(id)arg1;
- (struct CGRect)frameForDroppedItem:(id)arg1;
- (id)destinationViewForDrop;
- (void)willDropItems:(id)arg1;
- (void)dropItems:(id)arg1;
- (void)dragExitedWithItems:(id)arg1;
- (void)dragMovedToPoint:(struct CGPoint)arg1 withItems:(id)arg2;
- (void)dragEnteredAtPoint:(struct CGPoint)arg1 withItems:(id)arg2;
@end
