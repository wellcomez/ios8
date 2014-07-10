/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, CLLocation, NSDate, NSString, NSURL, PHAdjustmentData, UIImage;

@interface PHContentEditingInput : NSObject
{
    long long _sandboxExtensionHandle;
    int _fullSizeImageOrientation;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    NSDate *_creationDate;
    CLLocation *_location;
    NSString *_uniformTypeIdentifier;
    PHAdjustmentData *_adjustmentData;
    UIImage *_displaySizeImage;
    NSURL *_fullSizeImageURL;
    AVAsset *_avAsset;
    long long _baseVersion;
}

@property(nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
- (void)setAVAsset:(id)arg1;
@property(retain) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property int fullSizeImageOrientation; // @synthesize fullSizeImageOrientation=_fullSizeImageOrientation;
@property(copy) NSURL *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
@property(retain) UIImage *displaySizeImage; // @synthesize displaySizeImage=_displaySizeImage;
@property(retain) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(copy) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy) CLLocation *location; // @synthesize location=_location;
@property(copy) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)description;
- (void)consumeSandboxExtensionToken:(id)arg1;
- (void)requestFullSizeImageURLWithCompletionHandler:(id)arg1;
- (id)videoComposition;
- (id)audioMix;
- (id)imagePreview;
- (void)loadFullSizeImageDataWithCompletionHandler:(id)arg1;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
- (void)dealloc;

@end
