/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSAccountControllerDelegate-Protocol.h"
#import "IDSConnectionDelegatePrivate-Protocol.h"

@class IDSAccountController, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _IDSService : NSObject <IDSAccountControllerDelegate, IDSConnectionDelegatePrivate>
{
    IDSAccountController *_accountController;
    NSMutableDictionary *_uniqueIDToConnection;
    NSSet *_commands;
    NSString *_rerouteService;
    NSMapTable *_delegateToInfo;
    id _delegateContext;
    NSString *_domain;
    NSMutableDictionary *_protobufSelectors;
    NSMutableSet *_lastIsActiveSet;
    _Bool _everHadDelegate;
    unsigned short _domainHash;
    unsigned int _listenerCaps;
}

- (id)deviceForFromID:(id)arg1;
- (void)acceptAttachmentInvite:(id)arg1 fromAccount:(id)arg2;
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (_Bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (_Bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendFile:(id)arg1 userInfo:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (id)_sendingAccount;
- (SEL)protobufActionForType:(unsigned short)arg1 isResponse:(_Bool)arg2;
- (void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, copy, nonatomic) NSSet *accounts;
@property(readonly, copy, nonatomic) NSString *serviceDomain;
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 withOptions:(id)arg6;
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(_Bool)arg3 error:(id)arg4;
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 updatedWithResponseCode:(long long)arg3 error:(id)arg4 lastCall:(_Bool)arg5;
- (void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)connection:(id)arg1 devicesChanged:(id)arg2;
- (void)connection:(id)arg1 isActiveChanged:(_Bool)arg2;
- (void)connection:(id)arg1 attachmentReceived:(id)arg2 fileURL:(id)arg3 fromID:(id)arg4;
- (void)connection:(id)arg1 attachmentInviteReceived:(id)arg2 userInfo:(id)arg3 fromID:(id)arg4;
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;
- (void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3;
- (void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)_callIsActiveChanged;
- (void)_processAccountSet:(id)arg1;
- (void)_tearDownConnectionForUniqueID:(id)arg1;
- (void)_setupNewConnectionForAccount:(id)arg1;
- (void)_logConnectionMap;
- (void)_callDelegatesWithBlock:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2 delegateContext:(id)arg3;
- (id)initWithService:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;

@end

