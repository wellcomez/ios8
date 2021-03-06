/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CertInfoTrustDescription-Protocol.h"

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>
{
    struct __SecTrust *_trust;
    int _action;
}

- (id)_expirationDate;
- (id)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (unsigned long long)certificateCount;
- (_Bool)isRootCertificate;
- (_Bool)isTrusted;
- (id)summaryDescriptionItems;
- (id)summarySubtitle;
- (id)summaryTitle;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2;

@end

