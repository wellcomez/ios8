/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MapsHistoryPersisting-Protocol.h"

@class GEOMapRegion, MSPSearchRequestStorage, NSData, NSString;

// Not exported
@interface MapsQuerySearch : NSObject <MapsHistoryPersisting>
{
    MSPSearchRequestStorage *_storage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) id <RAPUserSearch> rapUserSearch;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *locationDisplayString;
@property(readonly, nonatomic) NSString *searchQuery;
- (id)initWithSearchRequestStorage:(id)arg1;

@end

