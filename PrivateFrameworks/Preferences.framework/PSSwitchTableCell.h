/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSControlTableCell.h>

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell
{
    UIActivityIndicatorView *_activityIndicator;
}

- (void)layoutSubviews;
- (void)setValue:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1 animated:(_Bool)arg2;
- (id)controlValue;
- (void)dealloc;
@property(nonatomic) _Bool loading;
- (void)setCellEnabled:(_Bool)arg1;
- (_Bool)canReload;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
