/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSURL;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject
{
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_storeQueue;
    NSMutableDictionary *_bannedURLStringsToEntriesMap;
}

- (void).cxx_destruct;
- (void)_writeOutBannedURLStringsAsynchronously;
- (id)_bannedURLStringsToEntriesMap;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)removeAllURLStrings;
- (void)removeURLStrings:(id)arg1;
- (void)addURLString:(id)arg1;
- (_Bool)containsURLString:(id)arg1;
- (void)dealloc;
- (id)initWithStoreURL:(id)arg1 history:(id)arg2;

@end
