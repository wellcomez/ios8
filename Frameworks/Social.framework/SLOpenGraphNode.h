/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSURL;

@interface SLOpenGraphNode : NSObject
{
    _Bool _likedByMe;
    unsigned long long _numberOfLikes;
    unsigned long long _numberOfFriendLikes;
    int _fetchState;
    NSURL *_URL;
    NSArray *_likedByFriends;
}

@property(nonatomic) int fetchState; // @synthesize fetchState=_fetchState;
@property(readonly) NSArray *likedByFriends; // @synthesize likedByFriends=_likedByFriends;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)invalidate;
- (void)unlikeWithCompletion:(id)arg1;
- (void)likeWithCompletion:(id)arg1;
@property(readonly) unsigned long long friendLikeCount;
@property(readonly) unsigned long long globalLikeCount;
@property(readonly) _Bool likedByMe;
- (void)_startUpdateIfNeeded;
- (id)initWithURL:(id)arg1;
- (id)cache;

@end
