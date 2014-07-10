/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray;

// Not exported
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView
{
    NSMutableArray *m_menuOptions;
    struct CGSize m_preferredSize;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (long long)defaultSelectedIndex;
- (struct CGSize)preferredSize;
- (long long)numberOfItems;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
