/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FMFSession;

@interface IMDLocationSharingController : NSObject
{
    FMFSession *_session;
}

+ (id)sharedInstance;
- (void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3;
- (void)receivedIncomingLocationSharePacket:(id)arg1;
- (void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

