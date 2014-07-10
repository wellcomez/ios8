/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableArray, NSXPCConnection, NSXPCInterface;

@interface TransactionManager : CHSynchronizedLoggable
{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

- (void).cxx_destruct;
- (void)setupConnectionHandlers_sync;
- (void)appendTransactions:(id)arg1;
- (void)createXpcConnection_sync;
- (void)createXpcConnection;
- (void)dealloc;
- (id)init;

@end
