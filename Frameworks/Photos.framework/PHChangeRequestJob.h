/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLDaemonJob.h"

@class NSObject<OS_xpc_object>, NSSet;

@interface PHChangeRequestJob : PLDaemonJob
{
    NSSet *_inserts;
    NSSet *_updates;
    NSSet *_deletes;
    id _completionHandler;
    NSObject<OS_xpc_object> *_xpcInserts;
    NSObject<OS_xpc_object> *_xpcUpdates;
    NSObject<OS_xpc_object> *_xpcDeletes;
}

+ (void)_addChangeRequests:(id)arg1 toXPCDict:(id)arg2 withKey:(const char *)arg3;
+ (void)applyPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 completionHandler:(id)arg4;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcDeletes; // @synthesize xpcDeletes=_xpcDeletes;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcUpdates; // @synthesize xpcUpdates=_xpcUpdates;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcInserts; // @synthesize xpcInserts=_xpcInserts;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSSet *deletes; // @synthesize deletes=_deletes;
@property(copy, nonatomic) NSSet *updates; // @synthesize updates=_updates;
@property(copy, nonatomic) NSSet *inserts; // @synthesize inserts=_inserts;
- (void).cxx_destruct;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (void)run;
- (long long)daemonOperation;

@end

