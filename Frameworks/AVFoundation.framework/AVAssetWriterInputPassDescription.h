/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterInputPassDescriptionInternal, NSArray;

@interface AVAssetWriterInputPassDescription : NSObject
{
    AVAssetWriterInputPassDescriptionInternal *_internal;
}

@property(readonly, nonatomic) NSArray *sourceTimeRanges;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTimeRanges:(id)arg1;
- (id)init;

@end
