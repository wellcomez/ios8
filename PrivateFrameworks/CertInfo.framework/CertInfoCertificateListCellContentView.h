/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_expirationLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(_Bool)arg3;
- (void)_setupLabel:(id)arg1 isSubtitle:(_Bool)arg2;
- (void)setExpiration:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
