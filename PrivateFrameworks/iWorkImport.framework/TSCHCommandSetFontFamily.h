/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartCommand.h>

@class NSDictionary, NSString, TSKCommand;

// Not exported
@interface TSCHCommandSetFontFamily : TSCHChartCommand
{
    NSString *mFwdFontFamily;
    NSString *mRevFontFamily;
    NSDictionary *mFwdParaStyleMutationMaps;
    NSDictionary *mRevParaStyleMutationMaps;
    TSKCommand *mImplementation;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;
- (id)p_paragraphStyleMutationMapsToReverseChangeToFontFamily:(id)arg1;
- (id)p_styleSwapCommandToChangeAllChartFontsToFamilyName:(id)arg1;
- (void)p_breakUpFontName:(id)arg1 isBold:(_Bool *)arg2 isItalic:(_Bool *)arg3;
- (id)p_findSingleExistingFontFamily;
- (void)redoPrimitive;
- (void)undoPrimitive;
- (void)commitPrimitive;
- (id)makeInverse;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 fontFamilyName:(id)arg2;
- (id)initWithChartInfo:(id)arg1 fwdFontFamilyName:(id)arg2 revFontFamilyName:(id)arg3 fwdParagraphStyleMutationMaps:(id)arg4;

@end
