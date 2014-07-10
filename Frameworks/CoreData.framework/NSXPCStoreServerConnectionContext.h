/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject
{
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (void)setNotificationManager:(id)arg1;
- (id)notificationManager;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setManagedObjectContext:(id)arg1;
- (id)managedObjectContext;
- (CDStruct_4c969caf)auditToken;
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (void)dealloc;
- (id)description;
- (id)initWithConnectionInfo:(id)arg1;

@end
