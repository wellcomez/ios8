/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSCHStyleOwning-Protocol.h"
#import "TSCHUnretainedParent-Protocol.h"

@class TSCHChartAxisID, TSCHChartModel, TSUFastReadInvalidatingCache;

// Not exported
@interface TSCHChartAxis : NSObject <TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mChartModel;
    TSCHChartAxisID *mAxisID;
    id <TSCHStyleActAlike> mStyle;
    id <TSCHStyleActAlike> mNonStyle;
    unsigned long long mStyleIndex;
    unsigned long long mNonStyleIndex;
    TSUFastReadInvalidatingCache *mAnalysisCache;
    TSUFastReadInvalidatingCache *mInterceptCache;
    TSUFastReadInvalidatingCache *mAxisDataFormatterCache;
    TSCHChartAxis *mNonTransientCounterpart;
}

+ (id)defaultNumberFormat;
+ (id)axisForInfo:(id)arg1;
+ (id)paragraphStyleForLabelsFontForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1;
+ (tvec2_84d5962d)sizeOfSeriesLabelsForInfo:(id)arg1 onlyHeight:(_Bool)arg2;
+ (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 onlyHeight:(_Bool)arg2;
@property(readonly, nonatomic) TSCHChartModel *model; // @synthesize model=mChartModel;
@property(readonly, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (id)nonstyle;
- (id)style;
- (void)propertiesWereMutated:(id)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutationsForImport:(id)arg1;
- (id)swapTuplesForMutations:(id)arg1;
- (id)p_swapTuplesForMutations:(id)arg1 forImport:(_Bool)arg2;
- (id)context;
- (id)drawableInfo;
- (id)chartInfo;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (_Bool)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (_Bool)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (_Bool)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)defaultProperties;
- (id)p_genericToDefaultPropertyMap;
- (void)clearParent;
- (unsigned long long)axisIndex;
- (unsigned long long)nonStyleIndex;
- (unsigned long long)styleIndex;
- (void)setNonStyle:(id)arg1 index:(unsigned long long)arg2;
- (void)setStyle:(id)arg1 index:(unsigned long long)arg2;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (void)updateAxisDateInterceptInAnalysis:(id)arg1;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1;
- (unsigned long long)selectionPathLabelIndexForMultiDataSetIndex:(unsigned long long)arg1;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2;
- (id)formattedStringForAxisValue:(id)arg1;
- (_Bool)supportsFormattedStringForInvalidValue;
- (id)inspectorStringForSeries:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (id)inspectorStringForValue:(id)arg1;
- (id)p_dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 onlyForValidValue:(_Bool)arg3;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2;
- (id)dataFormatter;
- (id)p_axisDataFormatterFromCurrentModel;
- (id)p_fixupNegativeStyleForDataFormatter:(id)arg1;
- (_Bool)editableFormatForValueStrings;
- (double *)unitSpaceCenterValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2;
- (double)unitSpaceCenterValueForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double)unitSpaceCenterValueForValue:(double)arg1;
- (double)unitSpaceCenterValueHalfOffset;
- (double)unitSpaceHalfOffsetForCountSpaceHalfOffset;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1 min:(double)arg2 count:(double)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double *)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double *)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (void)updateMinMaxGridLocationsInAnalysis:(id)arg1;
- (id)gridValueAxisToModelValue:(double)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (double)modelMax;
- (double)modelMin;
- (void)updateModelMinMaxInAnalysis:(id)arg1;
- (int)p_axisGridValueType;
- (_Bool)hasCustomFormatForGridValueType:(int)arg1;
- (id)customFormatForGridValueType:(int)arg1;
- (int)adjustedNumberFormatType;
- (int)gridValueType;
- (id)p_axisAnalysisFromCurrentModel;
- (id)p_interceptAnalysisFromCurrentModel;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (id)description;
- (id)minorGridLocations;
- (id)majorGridLocations;
- (unsigned long long)p_count;
- (unsigned long long)p_rangeCount;
- (double)range;
- (double)max;
- (double)min;
- (double)axisInterceptPosition;
- (double)interceptForAxis:(id)arg1;
@property(readonly, nonatomic) int currentAxisScaleSetting;
- (void)invalidateDataFormatterCache;
- (void)invalidateTransientState;
- (id)analysis;
- (id)interceptAnalysis;
@property(readonly) _Bool isRangeContinuous;
@property(readonly) _Bool isCategory;
- (void)dealloc;
- (id)initWithAxisID:(id)arg1 model:(id)arg2;
- (tvec2_84d5962d)sizeOfLabelsForInfo:(id)arg1 enumerator:(id)arg2 onlyHeight:(_Bool)arg3;
- (id)g_genericToDefaultPropertyMap;

@end
