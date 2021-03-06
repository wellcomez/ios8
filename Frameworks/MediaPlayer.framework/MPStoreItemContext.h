/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class MPMediaItem, NSDictionary, NSString, NSURL;

@interface MPStoreItemContext : NSObject <NSCopying>
{
    MPMediaItem *_mediaItem;
    long long _storeID;
    NSString *_buyParametersString;
    unsigned long long _mediaType;
    NSString *_downloadIdentifier;
    NSDictionary *_buyParametersDictionary;
}

+ (id)contextWithStoreID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned long long)arg3;
+ (id)contextsWithMediaItems:(id)arg1;
+ (id)contextWithMediaItem:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *buyParametersDictionary; // @synthesize buyParametersDictionary=_buyParametersDictionary;
@property(copy, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *buyParametersString; // @synthesize buyParametersString=_buyParametersString;
@property(readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_ITunesStoreContentInfo:(_Bool)arg1;
- (id)URLFromPath:(id)arg1;
- (void)_setBuyParameters:(id)arg1;
- (void)_fetchMediaItemPropertyValues;
@property(copy, nonatomic) NSString *localFilePath;
@property(readonly, nonatomic) float volumeNormalization;
@property(readonly, nonatomic) _Bool isDownloadInProgress;
- (id)buyOfferForVariant:(long long)arg1;
@property(readonly, nonatomic) _Bool isDownloadableStoreOffer;
@property(readonly, nonatomic) _Bool isPurchasableStoreOffer;
@property(readonly, nonatomic) _Bool isDownloadable;
@property(readonly, nonatomic) unsigned long long persistentStorageIdentifier;
@property(readonly, copy, nonatomic) NSString *contentTitle;
@property(readonly, nonatomic) _Bool localFileIsTemporaryCloudDownload;
@property(readonly, nonatomic) _Bool localFileIsValidForPlayback;
@property(readonly, copy, nonatomic) NSString *localFileName;
@property(readonly, nonatomic) _Bool localFileIsStreamingQuality;
@property(readonly, copy, nonatomic) NSURL *protectedContentSupportStorageURL;
@property(readonly, copy, nonatomic) NSDictionary *ITunesStoreContentDownloadInfo;
@property(readonly, copy, nonatomic) NSDictionary *ITunesStoreContentStreamingInfo;
- (unsigned long long)itemType;
@property(readonly, nonatomic) long long purchaseHistoryID;
@property(readonly, nonatomic) long long matchID;
- (id)initWithStoreID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned long long)arg3;
- (id)initWithMediaItem:(id)arg1;

@end

