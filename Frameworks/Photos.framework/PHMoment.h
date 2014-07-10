/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Photos/PHAssetCollection.h>

@class NSDate;

@interface PHMoment : PHAssetCollection
{
    short _generationType;
    NSDate *_representativeDate;
}

+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property(readonly, nonatomic) short generationType; // @synthesize generationType=_generationType;
@property(readonly, nonatomic) NSDate *representativeDate; // @synthesize representativeDate=_representativeDate;
- (void).cxx_destruct;
- (id)description;
- (_Bool)collectionHasFixedOrder;
- (id)localizedTitle;
- (_Bool)canShowAvalancheStacks;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (_Bool)isMeaningful;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end
