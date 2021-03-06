/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLChangeSessionImplementation-Protocol.h"

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>
{
}

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 completionHandler:(id)arg3;
- (void)dispatchBlockWhenLibraryIsOpen:(id)arg1;
- (void)tearDownWithCompletionHandler:(id)arg1;
- (void)finalizeWithCompletionHandler:(id)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (id)proxyWithErrorHandler:(id)arg1;
- (id)proxyLibraryManager;

@end

