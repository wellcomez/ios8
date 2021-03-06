/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSLock, RURadioGetTracksOperation, RadioRequestContext, RadioStation;

@interface RUPrepareRadioPlaybackOperation : NSOperation
{
    id _firstTrackBlock;
    RURadioGetTracksOperation *_getTracksOperation;
    NSLock *_lock;
    id _preparedBlock;
    RadioRequestContext *_requestContext;
    RadioStation *_station;
}

- (void).cxx_destruct;
- (void)main;
- (void)cancel;
@property(copy) RadioRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy) id preparedBlock;
- (id)initWithStation:(id)arg1;

@end

