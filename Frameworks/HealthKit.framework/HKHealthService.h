/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface HKHealthService : NSObject <NSSecureCoding>
{
    long long _type;
    NSUUID *_identifier;
    NSString *_name;
    double _lastConnection;
    NSString *_serviceId;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(nonatomic) double lastConnection; // @synthesize lastConnection=_lastConnection;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_localizedHealthServiceType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 serviceId:(id)arg4;
- (id)initUnknownServiceWithIdentifier:(id)arg1 name:(id)arg2 serviceId:(id)arg3;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)init;

@end

