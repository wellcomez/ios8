/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray;

// Not exported
@interface _UIAlertControllerTextFieldViewController : UITableViewController
{
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
    id <_UIAlertControllerTextFieldViewControllerContaining> _container;
}

@property(nonatomic) id <_UIAlertControllerTextFieldViewControllerContaining> container; // @synthesize container=_container;
@property(readonly) NSArray *textFields; // @synthesize textFields;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeAllTextFields;
- (long long)numberOfTextFields;
- (id)textFieldAtIndex:(long long)arg1;
- (void)_updatePreferredContentSize;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(_Bool)arg2;
- (double)_bottomMarginForTextFields;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

