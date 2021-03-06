/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation
{
    id _discoverAllContactsCompletionBlock;
    NSMutableArray *_discoveredUserInfos;
}

@property(retain, nonatomic) NSMutableArray *discoveredUserInfos; // @synthesize discoveredUserInfos=_discoveredUserInfos;
@property(copy, nonatomic) id discoverAllContactsCompletionBlock; // @synthesize discoverAllContactsCompletionBlock=_discoverAllContactsCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (Class)operationInfoClass;
- (id)init;

@end

