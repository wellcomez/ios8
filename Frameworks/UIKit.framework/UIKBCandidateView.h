/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKBKeyView.h>

#import "UIKeyboardCandidateGridCollectionViewControllerDelegate-Protocol.h"

@class TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, UIView;

// Not exported
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate>
{
    UIView *_clippingView;
    UIView *_topBorder;
    unsigned long long _selectedSortIndex;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    UIKeyboardCandidateSortControl *_scrollViewSortControl;
    CDStruct_961fb75c _visualStyling;
}

@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(retain, nonatomic) UIKeyboardCandidateSortControl *scrollViewSortControl; // @synthesize scrollViewSortControl=_scrollViewSortControl;
@property(retain, nonatomic) UIKeyboardCandidateGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) unsigned long long selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;
@property(readonly, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;
- (id)headerViewForCandidateSet:(id)arg1;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned long long)arg2;
- (void)sortSelectionBarAction:(id)arg1;
- (void)clearCollectionViewController;
- (void)updateCollectionViewController:(_Bool)arg1;
- (void)updateCollectionViewController;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (_Bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (_Bool)isHiddenCandidatesList;
- (_Bool)isExtendedList;
- (_Bool)isTenKey;
- (id)candidateList;
- (void)setRenderConfig:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

