/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/ESDObject.h>

@class CHDChart, NSData, NSMutableArray;

// Not exported
@interface EBEscherShape : ESDObject
{
    NSData *mChartData;
    NSMutableArray *mChartColorLocators;
    _Bool mShowLegend;
    CHDChart *mChart;
}

- (void)setChart:(id)arg1;
- (id)chart;
- (void)setShowLegend:(_Bool)arg1;
- (_Bool)showLegend;
- (void)setChartColorLocators:(id)arg1;
- (id)chartColorLocators;
- (void)setChartData:(id)arg1;
- (id)chartData;
- (void)dealloc;

@end
