/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@interface GKFriendsDataSource : GKBasicCollectionViewDataSource
{
    long long _kind;
}

@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (void)removeItemAtIndexPath:(id)arg1;
- (id)sectionTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
