/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying>
{
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    int _phoneticType;
    NSString *_shield;
    int _shieldType;
    int _signType;
    struct {
        unsigned int phoneticType:1;
        unsigned int shieldType:1;
        unsigned int signType:1;
    } _has;
}

@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) int signType; // @synthesize signType=_signType;
@property(nonatomic) int phoneticType; // @synthesize phoneticType=_phoneticType;
@property(nonatomic) int shieldType; // @synthesize shieldType=_shieldType;
@property(retain, nonatomic) NSString *shield; // @synthesize shield=_shield;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLocale;
@property(nonatomic) _Bool hasSignType;
@property(nonatomic) _Bool hasPhoneticType;
@property(nonatomic) _Bool hasShieldType;
@property(readonly, nonatomic) _Bool hasShield;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(readonly, nonatomic) _Bool hasName;
- (void)dealloc;

@end

