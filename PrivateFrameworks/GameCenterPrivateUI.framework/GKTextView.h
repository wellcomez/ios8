/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextView.h"

@class GKLabel, GKTextStyle, NSString;

@interface GKTextView : UITextView
{
    GKTextStyle *__baseStyle;
    GKTextStyle *_appliedStyle;
    GKLabel *_placeholderLabel;
}

+ (void)initialize;
@property(nonatomic) GKLabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
@property(retain, nonatomic) GKTextStyle *_baseStyle; // @synthesize _baseStyle=__baseStyle;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (void)replayAndApplyStyle;
- (void)applyTextStyle:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *placeholderText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)_gkTextViewDidChange;
- (void)updatePlaceholderVisibility;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

