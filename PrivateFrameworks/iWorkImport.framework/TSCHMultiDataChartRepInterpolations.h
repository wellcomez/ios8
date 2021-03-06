/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CAMediaTimingFunction;

// Not exported
@interface TSCHMultiDataChartRepInterpolations : NSObject
{
    CAMediaTimingFunction *mOverallTimingFunction;
    CAMediaTimingFunction *mIndividualTimingFunction;
}

+ (id)interpolationsWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;
@property(readonly, nonatomic) CAMediaTimingFunction *individual; // @synthesize individual=mIndividualTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *overall; // @synthesize overall=mOverallTimingFunction;
- (void)dealloc;
- (id)initWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;

@end

