/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CKCameraSheetViewControllerDelegate <NSObject>
- (void)ckPhotoPickerViewController:(id)arg1 resizeToSize:(struct CGSize)arg2;
- (void)ckPhotoPickerViewController:(id)arg1 selectedAssets:(id)arg2 shouldSend:(_Bool)arg3;
- (void)ckPhotoPickerViewControllerCancel:(id)arg1;
- (void)ckPhotoPickerViewControllerProceedToChooseExisting:(id)arg1;
- (void)ckPhotoPickerViewControllerProceedToTakeAPicture:(id)arg1;
@end

