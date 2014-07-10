/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GKClientProtocol <NSObject>
- (oneway void)setLogBits:(unsigned int)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)achievementSelected:(id)arg1;
- (oneway void)scoreSelected:(id)arg1;
- (oneway void)challengeCompleted:(id)arg1;
- (oneway void)challengeReceived:(id)arg1;
- (oneway void)completedChallengeSelected:(id)arg1;
- (oneway void)receivedChallengeSelected:(id)arg1;
- (oneway void)respondedToNearbyInvite:(id)arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (oneway void)setLocalPlayer:(id)arg1 authenticated:(_Bool)arg2 reply:(id)arg3;
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(id)arg3;
- (oneway void)setPreferencesValues:(id)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)endNetworkActivity;
- (oneway void)beginNetworkActivity;
@end
