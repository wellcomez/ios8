/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIShelfViewElement : SKUIViewElement
{
    long long _numberOfRows;
    NSString *_slideshowTitle;
}

@property(readonly, nonatomic) NSString *slideshowTitle; // @synthesize slideshowTitle=_slideshowTitle;
@property(readonly, nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (void).cxx_destruct;
- (long long)pageComponentType;
- (void)enumerateChildrenUsingBlock:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

