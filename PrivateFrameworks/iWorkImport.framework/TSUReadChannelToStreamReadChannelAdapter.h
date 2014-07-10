/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSUReadChannel-Protocol.h"
#import "TSUStreamReadChannel-Protocol.h"

// Not exported
@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel>
{
    id <TSUReadChannel> _readChannel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (void)addBarrier:(id)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id)arg4;
- (void)close;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;
- (id)initWithReadChannel:(id)arg1;

@end
