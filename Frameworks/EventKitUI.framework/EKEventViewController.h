/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "EKEventTitleDetailItemDelegate-Protocol.h"
#import "EKUIEventStatusButtonsViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class EKEvent, EKEventDetailItem, EKUIEventStatusButtonsView, EKUIRecurrenceAlertController, NSArray, SingleToolbarItemContainerView, UITableView, UIView, _UIAccessDeniedView;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate>
{
    _Bool _ignoreDBChanges;
    long long _lastAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
    EKEventDetailItem *_selectedEditItem;
    long long _disclosedTableSection;
    struct _NSRange _disclosedTableRange;
    int _pendingStatus;
    id _editor;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    double _statusButtonsViewCachedFontSize;
    long long _lastOrientation;
    EKEventDetailItem *_currentEditItem;
    UITableView *_tableView;
    _Bool _didAppear;
    _Bool _autoPop;
    _Bool _allowsSubitems;
    _Bool _showsPreview;
    _Bool _forcePreview;
    _Bool _trustsStatus;
    _Bool _allowsInviteResponses;
    _Bool _showsAddToCalendar;
    _Bool _ICSPreview;
    _Bool _needsReload;
    _Bool _showsDoneButton;
    _Bool _showsOutOfDateMessage;
    _Bool _showsDelegatorMessage;
    _Bool _showsDelegateMessage;
    _Bool _dead;
    _Bool _tableIsBeingEdited;
    NSArray *_items;
    NSArray *_currentSections;
    int _scrollToSection;
    UIView *_blankFooterView;
    _Bool _showingBlankFooterView;
    _Bool _allowsEditing;
    _Bool _hideNavigationBar;
    _Bool _leaveNavBarHidden;
    _Bool _minimalMode;
    int _editorShowTransition;
    int _editorHideTransition;
    id <EKEventViewDelegate> _delegate;
    EKEvent *_event;
    double _leftInset;
    double _rightInset;
    long long _interfaceOrientationStartingModalEditingSession;
}

+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4;
+ (void)setDefaultDatesForEvent:(id)arg1;
@property(nonatomic) long long interfaceOrientationStartingModalEditingSession; // @synthesize interfaceOrientationStartingModalEditingSession=_interfaceOrientationStartingModalEditingSession;
@property(nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) int editorHideTransition; // @synthesize editorHideTransition=_editorHideTransition;
@property(nonatomic) int editorShowTransition; // @synthesize editorShowTransition=_editorShowTransition;
@property(nonatomic) _Bool minimalMode; // @synthesize minimalMode=_minimalMode;
@property(nonatomic) _Bool leaveNavBarHidden; // @synthesize leaveNavBarHidden=_leaveNavBarHidden;
@property(nonatomic) _Bool hideNavigationBar; // @synthesize hideNavigationBar=_hideNavigationBar;
@property(nonatomic) _Bool showsDelegateMessage; // @synthesize showsDelegateMessage=_showsDelegateMessage;
@property(nonatomic) _Bool showsDelegatorMessage; // @synthesize showsDelegatorMessage=_showsDelegatorMessage;
@property(nonatomic) _Bool showsOutOfDateMessage; // @synthesize showsOutOfDateMessage=_showsOutOfDateMessage;
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(nonatomic) _Bool allowsSubitems; // @synthesize allowsSubitems=_allowsSubitems;
@property(nonatomic) _Bool showsAddToCalendar; // @synthesize showsAddToCalendar=_showsAddToCalendar;
@property(nonatomic, getter=isICSPreview) _Bool ICSPreview; // @synthesize ICSPreview=_ICSPreview;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) __weak id <EKEventViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)editButtonPressed;
- (_Bool)shouldShowEditButtonInline;
- (void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)detailItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(id)arg3;
- (unsigned long long)_sectionForDetailItem:(id)arg1;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_layoutStatusButtonsForInterfaceOrientation:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;
- (double)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2;
- (id)_statusButtons;
- (_Bool)_shouldDisplayStatusButtons;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_addToCalendarClicked:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_saveStatus:(int)arg1;
- (void)invokeAction:(long long)arg1;
- (void)_prepareEventForEdit;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)_dismissEditor:(_Bool)arg1 deleted:(_Bool)arg2;
- (id)viewControllerForEventItem:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)_presentDetachSheet;
- (struct CGSize)preferredContentSize;
- (void)_performDelete:(int)arg1;
- (void)_presentValidationAlert:(id)arg1;
- (_Bool)_performSave:(int)arg1 animated:(_Bool)arg2;
- (void)_saveStatus:(int)arg1 span:(int)arg2;
- (void)resumeEventEditing;
- (void)editEvent;
- (void)doneButtonPressed;
- (id)_statusButtonsContainerView;
- (id)_statusButtonsView;
- (void)_setUpForEvent;
- (id)_footerLabelContainingText:(id)arg1;
- (void)_updateFooterIfNeeded;
- (_Bool)_isDisplayingInvitation;
- (_Bool)_isDisplayingDeletableEvent;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (id)_items;
- (void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_keyboardWasHidden:(id)arg1;
- (void)_keyboardWasShown:(id)arg1;
- (void)_localeChanged;
- (void)_storeChanged:(id)arg1;
- (void)_refreshEventAndReload;
- (void)_updateFrameForInsets;
@property(nonatomic) double topInset;
- (id)accessDeniedView;
@property(nonatomic) int scrollToSection;
- (void)completeWithAction:(int)arg1;
@property(nonatomic) _Bool alwaysShowsCalendarPreview;
@property(nonatomic) _Bool allowsCalendarPreview;
- (void)_reloadIfNeeded;
- (void)_setNeedsReload;
- (void)_pop;
- (struct CGSize)_idealSize;
- (_Bool)_shouldShowEditButton;
- (void)_updateNavBarAnimated:(_Bool)arg1;
- (_Bool)_shouldDisplayDoneButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (void)_updateTableContentForSizeCategoryChange:(id)arg1;
- (_Bool)_hidesNavBar;
- (void)openAttendeesDetailItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_indexPathForAttendeesDetailItem;
- (id)_indexPathForSection:(int)arg1;
- (void)loadView;
- (id)tableView;
- (void)dealloc;
- (void)_teardownTableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithEvent:(id)arg1;

@end

