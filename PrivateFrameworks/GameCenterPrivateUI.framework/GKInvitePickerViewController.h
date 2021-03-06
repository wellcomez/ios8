/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKPlayerPickerViewController.h>

@class GKInvitePickerDataSource, NSSet;

@interface GKInvitePickerViewController : GKPlayerPickerViewController
{
    GKInvitePickerDataSource *_invitePickerDataSource;
    NSSet *_hiddenPlayers;
}

@property(retain, nonatomic) NSSet *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain, nonatomic) GKInvitePickerDataSource *invitePickerDataSource; // @synthesize invitePickerDataSource=_invitePickerDataSource;
- (void)didEnterNoContentState;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)configureNearbyDataSource;
- (void)setSupportsNearby:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configureDataSource;
- (id)splitingDataSource;
- (void)dealloc;
- (id)initWithGame:(id)arg1 hiddenPlayers:(id)arg2;

@end

