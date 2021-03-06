/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BSProcessDeathWatcher, FBProcessState, FBWorkspace, NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface FBProcess : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    FBProcessState *_state;
    NSString *_name;
    NSString *_jobLabel;
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBWorkspace *_workspace;
    NSHashTable *_observers;
    id <FBProcessDelegate> _delegate;
    int _unsafe_pid;
    BSProcessDeathWatcher *_processDeathObserver;
}

@property(readonly, retain, nonatomic) FBWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)_queue_toggleProcessDeathObserver:(_Bool)arg1;
- (void)_queue_processDidExit;
- (void)_queue_enumerateObserversWithBlock:(id)arg1;
- (id)_createWorkspace;
- (id)_queue;
@property(nonatomic, getter=_queue_visibility, setter=_queue_setVisibility:) int queue_visibility;
@property(nonatomic, getter=_queue_taskState, setter=_queue_setTaskState:) int queue_taskState;
- (_Bool)_queue_isForeground;
@property(copy, nonatomic, getter=_queue_jobLabel, setter=_queue_setJobLabel:) NSString *queue_jobLabel;
@property(nonatomic, getter=_queue_isRunning, setter=_queue_setRunning:) _Bool queue_running;
@property(copy, nonatomic, getter=_queue_name, setter=_queue_setName:) NSString *queue_name;
@property(nonatomic, getter=_queue_pid, setter=_queue_setPid:) int queue_pid;
- (void)_queue_updateStateWithBlock:(id)arg1;
@property(nonatomic, getter=_queue_delegate) id <FBProcessDelegate> delegate;
- (id)_workspace;
- (id)description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) FBProcessState *state;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (_Bool)isSystemApplicationProcess;
- (_Bool)isApplicationProcess;

@end

