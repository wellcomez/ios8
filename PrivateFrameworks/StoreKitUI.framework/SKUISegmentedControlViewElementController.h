/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUIFlexibleSegmentedControlDelegate-Protocol.h"
#import "SKUIMenuPopoverDelegate-Protocol.h"
#import "SKUIPickerViewDelegate-Protocol.h"

@class SKUIClientContext, SKUIFlexibleSegmentedControl, SKUIFocusedTouchGestureRecognizer, SKUIMenuPopoverController, SKUIPickerView, SKUISegmentedControlViewElement, UIView, UIViewController;

@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIPickerViewDelegate>
{
    SKUIClientContext *_clientContext;
    long long _defaultMaximumNumberOfVisibleItems;
    double _desiredSegmentedWidth;
    UIViewController *_parentViewController;
    SKUIFocusedTouchGestureRecognizer *_pickerDismissGestureRecognizer;
    SKUIPickerView *_pickerView;
    SKUIMenuPopoverController *_popoverMenuViewController;
    SKUIFlexibleSegmentedControl *_segmentedControl;
    SKUISegmentedControlViewElement *_viewElement;
    double _desiredSegmentWidth;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) double desiredSegmentWidth; // @synthesize desiredSegmentWidth=_desiredSegmentWidth;
@property(nonatomic) long long defaultMaximumNumberOfVisibleItems; // @synthesize defaultMaximumNumberOfVisibleItems=_defaultMaximumNumberOfVisibleItems;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showPopoverMoreListWithTitles:(id)arg1;
- (void)_showPickerViewMoreListWithTitles:(id)arg1;
- (id)_segmentedControl;
- (void)_reloadPropertiesForSegmentedControl:(id)arg1;
- (void)_dismissPickerView;
- (void)_destroyPopoverController;
- (void)_connectToSegmentedControl:(id)arg1;
- (void)_dismissPickerViewAction:(id)arg1;
- (void)pickerView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)segmentedControl:(id)arg1 showMoreListWithTitles:(id)arg2;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopoverDidCancel:(id)arg1;
@property(readonly, nonatomic) UIView *segmentedControlView;
- (void)reloadAfterDocumentUpdate;
- (void)dealloc;
- (id)initWithViewElement:(id)arg1 segmentedControl:(id)arg2;
- (id)initWithViewElement:(id)arg1;

@end
