/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>
{
    long long _status;
    long long _request;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCompatibleStatus:(long long)arg1;
- (_Bool)requestedReading;
- (_Bool)requestedSharing;
@property(readonly) long long request;
@property(readonly) long long status;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2;

@end

