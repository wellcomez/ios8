/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMDAccessoryManagerDelegate-Protocol.h"
#import "HMMessageReceiver-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class HMDAccessoryManager, HMDHomeManager, HMDLocation, HMDRoom, HMMessageDispatcher, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDHome : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver, NSSecureCoding>
{
    _Bool _primary;
    NSString *_name;
    HMDHomeManager *_homeManager;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMDAccessoryManager *_accessoryManager;
    NSMutableArray *_rooms;
    NSMutableArray *_zones;
    NSMutableArray *_accessories;
    NSMutableArray *_services;
    NSMutableArray *_serviceGroups;
    NSMutableArray *_actionSets;
    NSMutableArray *_triggers;
    NSMutableDictionary *_objectNames;
    HMDLocation *_location;
    HMDRoom *_roomForEntireHome;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDRoom *roomForEntireHome; // @synthesize roomForEntireHome=_roomForEntireHome;
@property(retain, nonatomic) HMDLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSMutableDictionary *objectNames; // @synthesize objectNames=_objectNames;
@property(retain, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSMutableArray *actionSets; // @synthesize actionSets=_actionSets;
@property(retain, nonatomic) NSMutableArray *serviceGroups; // @synthesize serviceGroups=_serviceGroups;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableArray *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) NSMutableArray *zones; // @synthesize zones=_zones;
@property(retain, nonatomic) NSMutableArray *rooms; // @synthesize rooms=_rooms;
@property(retain, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_removeAllAccessoriesWithCompletionHandler:(id)arg1 queue:(void)arg2;
- (void)_removeAccessories:(id)arg1 message:(id)arg2;
- (void)_handleRemoveAccessory:(id)arg1;
- (void)_addNewAccessories:(id)arg1 message:(id)arg2;
- (void)_handleAddAccessory:(id)arg1;
- (id)_addAccessory:(id)arg1 configurationApp:(id)arg2;
- (void)_handleRemoveTrigger:(id)arg1;
- (void)_handleAddTimerTrigger:(id)arg1;
- (void)_handleAddTrigger:(id)arg1;
- (void)_handleExecuteActionSet:(id)arg1;
- (void)_handleRemoveActionSet:(id)arg1;
- (void)_handleAddActionSet:(id)arg1;
- (void)_handleRemoveServiceGroup:(id)arg1;
- (void)_handleAddServiceGroup:(id)arg1;
- (void)_handleRemoveZone:(id)arg1;
- (void)_handleAddZone:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_registerForMessages;
- (id)isValidName:(id)arg1;
- (void)removeObjectName:(id)arg1;
- (void)addObjectName:(id)arg1 type:(Class)arg2;
- (id)isValidNameInHome:(id)arg1;
- (void)removeObjectNameFromHome:(id)arg1;
- (void)addObjectNameToHome:(id)arg1 type:(Class)arg2;
- (void)removeAllAccessoriesWithCompletionHandler:(id)arg1 queue:(void)arg2;
- (void)removeActionFromTriggers:(id)arg1;
- (void)removeActionSetFromTriggers:(id)arg1;
- (void)currentLocationHasChanged:(id)arg1;
- (_Bool)isAtLocation:(id)arg1;
- (id)ServiceGroupWithUUID:(id)arg1;
- (id)ServiceGroupWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)accessoryWithUUID:(id)arg1;
- (id)accessoryWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (void)save;
- (void)addAccessoryToCollection:(id)arg1;
- (void)configure:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 homeManager:(id)arg2;

@end

