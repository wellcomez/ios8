/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIDividerPageComponent;

@interface SKUIDividerPageSection : SKUIStorePageSection
{
}

- (void)willAppearInContext:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (long long)numberOfCells;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SKUIDividerPageComponent *pageComponent; // @dynamic pageComponent;

@end
