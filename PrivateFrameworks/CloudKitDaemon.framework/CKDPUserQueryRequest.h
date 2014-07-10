/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@class CKDPUserAlias, NSMutableArray;

@interface CKDPUserQueryRequest : PBRequest <NSCopying>
{
    CKDPUserAlias *_alias;
    NSMutableArray *_sortedBys;
}

+ (id)options;
@property(retain, nonatomic) NSMutableArray *sortedBys; // @synthesize sortedBys=_sortedBys;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)sortedByAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortedBysCount;
- (void)addSortedBy:(id)arg1;
- (void)clearSortedBys;
@property(readonly, nonatomic) _Bool hasAlias;

@end
