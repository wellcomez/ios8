/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, SGMicrodataDocument;

@interface SGMicrodataParserStackItem : NSObject
{
    SGMicrodataDocument *_document;
    SGMicrodataParserStackItem *_parent;
    NSArray *_textConsumers;
    NSArray *_itemScopes;
}

@property(readonly) NSArray *itemScopes; // @synthesize itemScopes=_itemScopes;
@property(readonly) NSArray *textConsumers; // @synthesize textConsumers=_textConsumers;
@property(readonly) SGMicrodataParserStackItem *parent; // @synthesize parent=_parent;
@property(readonly) SGMicrodataDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)initWithParent:(id)arg1 item:(id)arg2 htmlId:(id)arg3 textConsumer:(id)arg4;
- (id)initWithDocument:(id)arg1;

@end

