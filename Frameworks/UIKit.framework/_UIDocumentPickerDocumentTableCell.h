/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewCell.h>

@class NSTimer, NSURL, SKUIItemOfferButton, _UIDocumentPickerDocumentTableViewController;

// Not exported
@interface _UIDocumentPickerDocumentTableCell : UITableViewCell
{
    _UIDocumentPickerDocumentTableViewController *_weak_tableView;
    NSURL *_url;
    NSTimer *_progressTimer;
    SKUIItemOfferButton *_cloudButton;
    id _progressSubscriber;
}

@property(retain, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;
@property(retain, nonatomic) SKUIItemOfferButton *cloudButton; // @synthesize cloudButton=_cloudButton;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic, getter=URL, setter=setURL:) NSURL *url; // @synthesize url=_url;
- (void)updateForDownloadStatus;
- (void)startDownload:(id)arg1;
- (void)updateProgress:(id)arg1;
@property(nonatomic) __weak _UIDocumentPickerDocumentTableViewController *tableView;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

