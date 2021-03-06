/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _longValue;
    NSData *_bytesValue;
    NSMutableArray *_fieldValues;
    NSMutableArray *_listValues;
    NSString *_stringValue;
    int _type;
    _Bool _boolValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int longValue:1;
        unsigned int type:1;
        unsigned int boolValue:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property(retain, nonatomic) NSMutableArray *fieldValues; // @synthesize fieldValues=_fieldValues;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long longValue; // @synthesize longValue=_longValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)listValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (void)addListValues:(id)arg1;
- (void)clearListValues;
- (id)fieldValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldValuesCount;
- (void)addFieldValues:(id)arg1;
- (void)clearFieldValues;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasLongValue;
@property(nonatomic) _Bool hasBoolValue;
@property(readonly, nonatomic) _Bool hasBytesValue;
@property(nonatomic) _Bool hasType;

@end

