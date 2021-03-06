/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class _UITableViewCellActionButton;

// Not exported
@interface UITableViewCellDeleteConfirmationView : UIView
{
    double _visibleWidth;
    double _visibleHeightRatio;
    double _cornerRadius;
    int _sectionLocation;
    _UITableViewCellActionButton *_deleteView;
    _UITableViewCellActionButton *_accessoryView;
}

@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) _UITableViewCellActionButton *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) _UITableViewCellActionButton *deleteView; // @synthesize deleteView=_deleteView;
@property(nonatomic) double visibleHeightRatio; // @synthesize visibleHeightRatio=_visibleHeightRatio;
@property(nonatomic) double visibleWidth; // @synthesize visibleWidth=_visibleWidth;
- (void)updateMaskView:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 deleteView:(id)arg2 accessoryView:(id)arg3;

@end

