/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UIViewServiceViewControllerOperatorDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, _UIAsyncInvocation;

// Not exported
@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;
    id _terminationHandler;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
    id _delegate;
}

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;
@property id delegate; // @synthesize delegate=_delegate;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)checkDeputyForRotation:(id)arg1;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(id)arg2;
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

