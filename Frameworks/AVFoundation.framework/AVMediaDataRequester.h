/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AVMediaDataRequester : NSObject
{
    id <AVMediaDataRequesterConsumer> _mediaDataConsumer;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _requestBlock;
}

@property(readonly, nonatomic) id requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)_requestMediaDataIfReady;
- (void)invalidate;
- (void)startRequestingMediaData;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(id)arg3;

@end
