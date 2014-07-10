/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HKQueryClient-Protocol.h"

@class HKSampleType, NSObject<OS_dispatch_queue>, NSPredicate, NSUUID, _HKFilter;

@interface HKQuery : NSObject <HKQueryClient>
{
    HKSampleType *_sampleType;
    NSPredicate *_predicate;
    NSObject<OS_dispatch_queue> *_activationQueue;
    _Bool _hasBeenExecuted;
    id <HKQueryDelegate> _delegate;
    NSUUID *_activationUUID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <NSXPCProxyCreating> _serverProxy;
    _HKFilter *_filter;
}

+ (void)_configureServerInterface:(id)arg1;
+ (void)_configureClientInterface:(id)arg1;
+ (id)_serverInterfaceProtocol;
+ (id)_clientInterfaceProtocol;
+ (id)serverInterface;
+ (id)clientInterface;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
@property(retain, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) id <NSXPCProxyCreating> serverProxy; // @synthesize serverProxy=_serverProxy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSUUID *activationUUID; // @synthesize activationUUID=_activationUUID;
@property(readonly, nonatomic) _Bool hasBeenExecuted; // @synthesize hasBeenExecuted=_hasBeenExecuted;
@property(readonly, nonatomic) __weak id <HKQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) NSPredicate *predicate;
@property(readonly) HKSampleType *sampleType;
- (void)deliverError:(id)arg1 forQuery:(id)arg2;
- (void)_deliverError:(id)arg1;
- (_Bool)_shouldStayAliveAfterInitialResults;
- (void)_validate;
- (void)_cleanupAfterDeactivation;
- (void)_prepareToActivateWithServerProxy:(id)arg1 isReactivation:(_Bool)arg2;
- (void)_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_activateWithConnection:(id)arg1 isReactivation:(_Bool)arg2 withCompletion:(id)arg3;
- (id)_predicateFilterClasses;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (void)_receivedInitialResults;
- (void)_dispatchToClientForUUID:(id)arg1 block:(id)arg2;
- (void)deactivate;
- (void)reactivateWithConnection:(id)arg1;
- (void)activateWithClientQueue:(id)arg1 connection:(id)arg2 delegate:(id)arg3 withCompletion:(id)arg4;
- (id)_initWithDataType:(id)arg1 predicate:(id)arg2;
- (id)init;

@end
