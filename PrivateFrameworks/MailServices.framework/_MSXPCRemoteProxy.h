/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MSXPCConnection, NSXPCInterface;

// Not exported
@interface _MSXPCRemoteProxy : NSObject
{
    int _selectorLock;
    struct __CFDictionary *_knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    id _errorHandler;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(id)arg3;

@end
