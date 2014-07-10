/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKPropertyCoding-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSURL;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding>
{
    NSDictionary *_values;
    NSDate *_expiry;
    NSURL *_baseUrl;
    NSMutableDictionary *_allowedAppVersionsCache;
}

@property(retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache; // @synthesize allowedAppVersionsCache=_allowedAppVersionsCache;
@property(readonly, nonatomic) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property(retain, nonatomic) NSDictionary *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;
@property(readonly, nonatomic) long long tokenRegisterDays;
- (_Bool)shouldSignForMessageType:(int)arg1 inDatabaseScope:(long long)arg2;
@property(readonly, nonatomic) NSURL *mescalSessionURL;
@property(readonly, nonatomic) NSURL *mescalCertURL;
@property(readonly, nonatomic) unsigned int mescalServerVersion;
- (_Bool)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)urlForOperationType:(int)arg1;
- (_Bool)isExpired;
- (id)description;
- (id)init;

@end
