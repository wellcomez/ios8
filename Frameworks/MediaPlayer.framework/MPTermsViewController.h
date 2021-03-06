/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSString;

@interface MPTermsViewController : UIViewController
{
    unsigned long long _currentTermsVersion;
    NSString *_terms;
    NSString *_localizedAcceptButtonTitle;
    id <MPTermsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MPTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *localizedAcceptButtonTitle; // @synthesize localizedAcceptButtonTitle=_localizedAcceptButtonTitle;
@property(copy, nonatomic) NSString *terms; // @synthesize terms=_terms;
@property(nonatomic) unsigned long long currentTermsVersion; // @synthesize currentTermsVersion=_currentTermsVersion;
- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (void)_acceptAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)loadView;
- (id)initWithCurrentTermsVersion:(unsigned long long)arg1 terms:(id)arg2;

@end

