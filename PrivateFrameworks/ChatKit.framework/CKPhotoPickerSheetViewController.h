/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ALAssetsLibrary, CKDispatchQueue, CKTranscriptController, NSArray, NSMutableArray, NSObject<OS_dispatch_group>, NSString, UICollectionView, UITableView, UIView, UIWindow;

@interface CKPhotoPickerSheetViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    CKTranscriptController *_owner;
    ALAssetsLibrary *_library;
    NSMutableArray *_thumbnails;
    NSMutableArray *_largePhotos;
    NSArray *_assets;
    _Bool _isDesaturated;
    _Bool _largeView;
    _Bool _initialLoadFinished;
    NSObject<OS_dispatch_group> *_loadingGroup;
    _Bool _presented;
    _Bool _presenting;
    NSString *_takePhotoText;
    id <CKCameraSheetViewControllerDelegate> _delegate;
    UIWindow *_window;
    UIView *_bgDimmingView;
    UIView *_sheetView;
    UITableView *_buttonsTableView;
    UICollectionView *_photosCollectionView;
    CKDispatchQueue *_largePhotoQueue;
    UIView *_zoomingView;
}

@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) UIView *zoomingView; // @synthesize zoomingView=_zoomingView;
@property(retain, nonatomic) CKDispatchQueue *largePhotoQueue; // @synthesize largePhotoQueue=_largePhotoQueue;
@property(retain, nonatomic) UICollectionView *photosCollectionView; // @synthesize photosCollectionView=_photosCollectionView;
@property(retain, nonatomic) UITableView *buttonsTableView; // @synthesize buttonsTableView=_buttonsTableView;
@property(retain, nonatomic) UIView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UIView *bgDimmingView; // @synthesize bgDimmingView=_bgDimmingView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) id <CKCameraSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *takePhotoText; // @synthesize takePhotoText=_takePhotoText;
- (void)_cancelPhotoPickerTap;
- (void)_sendSelectedAssets:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_thumbnailForIndex:(unsigned long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismissPhotoPickerSheetWithCompletion:(id)arg1;
- (void)presentPhotoPickerSheetWithCompletion:(id)arg1;
- (void)_endDesaturation;
- (void)_beginDesaturation;
- (double)_heightOfTableView:(id)arg1;
- (void)loadView;
- (void)_finishedLoadingAssets;
- (struct CGSize)preferredContentSize;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithPresentationViewController:(id)arg1;

@end

