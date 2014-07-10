/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMMessageReceiver-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class HMHome, HMMessageDispatcher, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMZone : NSObject <HMMessageReceiver, NSSecureCoding>
{
    NSString *_name;
    NSUUID *_uuid;
    HMMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMHome *_home;
    NSMutableArray *_currentRooms;
    NSMutableDictionary *_pendingRequests;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)handleZoneRenamedNotification:(id)arg1;
- (void)handleRoomRemovedNotification:(id)arg1;
- (void)removeRoom:(id)arg1;
- (void)handleRoomAddedNotification:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (void)removeRoom:(id)arg1 completionHandler:(id)arg2;
- (void)addRoom:(id)arg1 completionHandler:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *rooms;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (void)invalidate;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)init;

@end
