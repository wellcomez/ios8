/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AXHADeviceControllerProtocol <NSObject>
- (void)writeValue:(id)arg1 forProperty:(long long)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(long long)arg1 forDeviceID:(id)arg2;
- (void)stopPropertyUpdates;
- (void)registerForPropertyUpdates:(id)arg1;
- (void)device:(id)arg1 didUpdateProperty:(long long)arg2;
@end

