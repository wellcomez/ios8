/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface MPRemotePlaybackQueue : NSObject
{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
    NSDictionary *_userInfo;
}

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end
