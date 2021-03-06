/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKNotification.h>

#import "NSSecureCoding-Protocol.h"

@class CKDiscoveredUserInfo, CKShareID;

@interface CKShareNotification : CKNotification <NSSecureCoding>
{
    long long _shareNotificationReason;
    CKShareID *_shareID;
    CKDiscoveredUserInfo *_participantInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CKDiscoveredUserInfo *participantInfo; // @synthesize participantInfo=_participantInfo;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(nonatomic) long long shareNotificationReason; // @synthesize shareNotificationReason=_shareNotificationReason;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

