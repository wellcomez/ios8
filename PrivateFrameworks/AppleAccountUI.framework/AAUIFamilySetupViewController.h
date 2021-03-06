/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

#import "AAUIFamilySetupPageDelegate-Protocol.h"
#import "RemoteUIControllerDelegate-Protocol.h"

@class AAGrandSlamSigner, ACAccount, ACAccountStore, NSMutableURLRequest, RemoteUIController, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <AAUIFamilySetupPageDelegate, RemoteUIControllerDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    _Bool _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
}

- (void).cxx_destruct;
- (void)_sendUserToiTunesSettings;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)_loadRemoteUIPages;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_closeButtonWasTapped:(id)arg1;
- (id)_createCloseButton;
- (id)_urlForLaunchingSettings;
- (_Bool)_isRunningInSettings;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)dealloc;
- (id)_initWithGrandSlamSigner:(id)arg1 rootViewController:(id)arg2;
- (id)initTrimmedFlowWithGrandSlamSigner:(id)arg1;
- (id)initWithGrandSlamSigner:(id)arg1 familyEligibilityResponse:(id)arg2;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <AAUIFamilySetupDelegate> delegate;

@end

