/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSPredicate, NSString;

@interface PHFetchOptions : NSObject <NSCopying>
{
    _Bool _includeAllBurstAssets;
    _Bool _wantsIncrementalChangeDetails;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchPropertyHint;
    long long _chunkSizeForFetch;
    NSString *_transientIdentifier;
    NSArray *_customObjectIDSortOrder;
}

@property(retain, nonatomic) NSArray *customObjectIDSortOrder; // @synthesize customObjectIDSortOrder=_customObjectIDSortOrder;
@property(retain, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property(nonatomic) long long chunkSizeForFetch; // @synthesize chunkSizeForFetch=_chunkSizeForFetch;
@property(nonatomic) unsigned long long fetchPropertyHint; // @synthesize fetchPropertyHint=_fetchPropertyHint;
@property(nonatomic) _Bool wantsIncrementalChangeDetails; // @synthesize wantsIncrementalChangeDetails=_wantsIncrementalChangeDetails;
@property(nonatomic) _Bool includeAllBurstAssets; // @synthesize includeAllBurstAssets=_includeAllBurstAssets;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
