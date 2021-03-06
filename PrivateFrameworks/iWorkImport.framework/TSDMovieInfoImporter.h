/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDInfoImporter.h>

@class AVAsset, AVAssetImageGenerator, NSError, NSObject<OS_dispatch_queue>, TSDDrawableInfo, TSDMovieCompatibilityChecker, TSPData, TSUScaledProgress;

// Not exported
@interface TSDMovieInfoImporter : TSDInfoImporter
{
    NSObject<OS_dispatch_queue> *mImportQueue;
    id mCompletionHandler;
    TSUScaledProgress *mProgress;
    TSPData *mMovieData;
    AVAsset *mAsset;
    TSDMovieCompatibilityChecker *mCompatibilityChecker;
    AVAssetImageGenerator *mPosterImageGenerator;
    TSDDrawableInfo *mInfo;
    NSError *mError;
    _Bool mIsCancelled;
    _Bool mDidMessageDelegateAboutMovieCompatibility;
}

+ (id)supportedMovieRemoteURLSchemes;
+ (_Bool)i_canImportFileAtURL:(id)arg1 type:(id)arg2;
+ (id)i_supportedFileTypesForSubclass;
- (id)error;
- (id)info;
- (id)progress;
- (void)cancel;
- (void)p_finishImportingWithInfo:(id)arg1 error:(id)arg2;
- (void)p_tellMovieCompatibilityProviderToIgnoreCompatibilityLevelIfNeeded;
- (void)p_importInfoFromAnimatedGIF;
- (void)p_importInfoFromAsset;
- (void)p_importInfoFromAssetConvertingIfNeededToRequiredCompatibilityLevel:(long long)arg1 fromCompatibilityLevel:(long long)arg2;
- (void)importInfoWithCompletionHandler:(id)arg1;
- (_Bool)p_isURLRemote;
- (void)dealloc;
- (id)initWithContext:(id)arg1 URL:(id)arg2 theme:(id)arg3;

@end

