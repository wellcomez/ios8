/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DAMailboxStreamingContentConsumer-Protocol.h"
#import "NSObject-Protocol.h"

@protocol MFDAStreamingContentConsumer <DAMailboxStreamingContentConsumer, NSObject>
- (double)timeOfLastActivity;
- (_Bool)didBeginStreaming;
- (_Bool)succeeded;
- (id)data;
@end

