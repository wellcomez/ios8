/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMetadataQueryDelegate-Protocol.h"

@class NSArray, NSDate, NSMetadataQuery, NSObject<OS_dispatch_queue>, NSOperationQueue, NSOrderedSet, NSURL;

// Not exported
@interface _UIDocumentPickerDirectoryObserver : NSObject <NSMetadataQueryDelegate>
{
    NSArray *_sortDescriptors;
    NSArray *_staticItems;
    NSMetadataQuery *_query;
    NSURL *_observedURL;
    id _handler;
    NSOrderedSet *_lastSnapshot;
    NSDate *_lastSnapshotDate;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSOperationQueue *_queryWorkerQueue;
    Class _itemClass;
}

@property(nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(retain, nonatomic) NSOperationQueue *queryWorkerQueue; // @synthesize queryWorkerQueue=_queryWorkerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(retain, nonatomic) NSDate *lastSnapshotDate; // @synthesize lastSnapshotDate=_lastSnapshotDate;
@property(retain, nonatomic) NSOrderedSet *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(copy, nonatomic) id handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSURL *observedURL; // @synthesize observedURL=_observedURL;
@property(retain, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
- (void)_processResults:(id)arg1 changedItems:(id)arg2;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3;
@property(retain, nonatomic) NSArray *staticItems;
- (void)_updateObservers:(id)arg1;
- (id)_queryResults;
- (void)_queryUpdated:(id)arg1;
- (void)_initialGatherFinished:(id)arg1;
@property(retain, nonatomic) NSArray *sortDescriptors;
- (void)dealloc;
- (id)metadataQuery:(id)arg1 replacementObjectForResultObject:(id)arg2;
- (id)initWithURL:(id)arg1 updateHandler:(id)arg2 itemClass:(void)arg3;

@end

