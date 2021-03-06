/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSArray, NSMutableSet;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController
{
    NSMutableSet *_monthsOfTheYearSet;
}

- (void).cxx_destruct;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)refreshCells;
- (void)prepareForDisplay;
- (long long)gridViewType;
- (id)cellLabels;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (int)frequency;
@property(retain, nonatomic) NSArray *monthsOfTheYear;
- (id)initWithDate:(id)arg1;

@end

