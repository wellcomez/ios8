/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPropertySimpleEditingCell.h>

#import "ABPickerControllerDelegate-Protocol.h"

@class CNInstantMessageAddress;

@interface ABPropertyInstantMessageEditingCell : ABPropertySimpleEditingCell <ABPickerControllerDelegate>
{
}

- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)labelButtonClicked:(id)arg1;
@property(readonly, nonatomic) CNInstantMessageAddress *profile;

@end
