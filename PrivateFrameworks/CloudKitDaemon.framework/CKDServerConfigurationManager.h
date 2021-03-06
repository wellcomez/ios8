/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKDGlobalConfigurationOperation, CKDServerConfiguration, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue;

@interface CKDServerConfigurationManager : NSObject
{
    int _iCloudEnvNotifToken;
    NSObject<OS_dispatch_source> *_switchNotifSource;
    NSOperationQueue *_configurationQueue;
    NSMutableDictionary *_containerOperations;
    CKDServerConfiguration *_globalConfiguration;
    CKDGlobalConfigurationOperation *_globalConfigurationOp;
    NSOperationQueue *_containerSpecificInfoQueue;
    NSMutableDictionary *_containerSpecificInfos;
    NSMutableDictionary *_containerSpecificInfoOperations;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
@property(nonatomic) int iCloudEnvNotifToken; // @synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfoOperations; // @synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations;
@property(retain, nonatomic) NSMutableDictionary *containerSpecificInfos; // @synthesize containerSpecificInfos=_containerSpecificInfos;
@property(retain, nonatomic) NSOperationQueue *containerSpecificInfoQueue; // @synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue;
@property(retain, nonatomic) CKDGlobalConfigurationOperation *globalConfigurationOp; // @synthesize globalConfigurationOp=_globalConfigurationOp;
@property(retain, nonatomic) CKDServerConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property(retain, nonatomic) NSMutableDictionary *containerOperations; // @synthesize containerOperations=_containerOperations;
@property(retain, nonatomic) NSOperationQueue *configurationQueue; // @synthesize configurationQueue=_configurationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource; // @synthesize switchNotifSource=_switchNotifSource;
- (void).cxx_destruct;
- (void)expireConfigurationForContext:(id)arg1;
- (void)expireGlobalConfiguration;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (void)containerScopedUserIDForContext:(id)arg1 completionHandler:(id)arg2;
- (void)publicURLForServerType:(long long)arg1 context:(id)arg2 completionHandler:(id)arg3;
- (void)configurationForContext:(id)arg1 completionHandler:(id)arg2;
- (void)fetchContainerSpecificInfoForContext:(id)arg1 needUserID:(_Bool)arg2 completionHandler:(id)arg3;
- (void)fetchGlobalConfigWithContext:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)_watchForSwitchPrefFileChanges;
- (id)_uniqueStringForContainerAndAccount:(id)arg1;

@end

