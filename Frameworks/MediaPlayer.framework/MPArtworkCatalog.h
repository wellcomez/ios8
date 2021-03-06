/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSString;

@interface MPArtworkCatalog : NSObject
{
    struct CGSize _fittingSize;
    _Bool _loadingRepresentation;
    double _destinationScale;
    id _token;
    id <MPArtworkDataSource> _dataSource;
    NSString *_cacheIdentifier;
    id _requestingContext;
    id _destination;
    id _configurationBlock;
}

+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;
+ (void)setCachePurgesWhenEnteringBackground:(_Bool)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCacheLimit:(unsigned long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
@property(getter=isLoadingRepresentation) _Bool loadingRepresentation; // @synthesize loadingRepresentation=_loadingRepresentation;
@property(copy, nonatomic) id configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(nonatomic) __weak id destination; // @synthesize destination=_destination;
@property(nonatomic) __weak id requestingContext; // @synthesize requestingContext=_requestingContext;
@property(copy, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(nonatomic) __weak id <MPArtworkDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id token; // @synthesize token=_token;
@property(nonatomic) double destinationScale; // @synthesize destinationScale=_destinationScale;
- (void).cxx_destruct;
- (void)_updateWithRepresentation:(id)arg1;
- (void)_updateRepresentation;
- (void)_loadBestRepresentationIfNeeded;
@property(readonly, nonatomic) NSCache *cache;
- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (_Bool)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (void)setDestination:(id)arg1 configurationBlock:(id)arg2;
- (void)requestImageWithCompletionHandler:(id)arg1;
@property(nonatomic) struct CGSize fittingSize;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;

@end

