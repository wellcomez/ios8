/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTextMessagePartChatItem.h>

@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem
{
    NSArray *_subparts;
}

@property(copy, nonatomic) NSArray *subparts; // @synthesize subparts=_subparts;
@property(readonly, copy, nonatomic) NSString *title;
- (id)pasteboardItems;
- (Class)balloonViewClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)composition;

@end

