/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, NSObject<PLAlbumContainer>;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification
{
    NSDictionary *_userInfo;
}

+ (id)notificationWithSimulatedReloadRequestForContainerList:(id)arg1;
+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;
@property(readonly, retain, nonatomic) NSObject<PLAlbumContainer> *albumList;
@property(readonly, retain, nonatomic) id <PLAssetContainerList> assetContainerList;
- (id)description;
- (id)userInfo;
- (id)name;
- (void)dealloc;
- (id)_contentRelationshipName;

@end
