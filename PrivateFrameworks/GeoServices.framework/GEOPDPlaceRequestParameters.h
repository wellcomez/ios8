/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPDGeocodingParameters, GEOPDPlaceLookupParameters, GEOPDPlaceRefinementParameters, GEOPDReverseGeocodingParameters, GEOPDSearchParameters, GEOPDSiriSearchParameters;

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying>
{
    GEOPDGeocodingParameters *_geocodingParameters;
    GEOPDPlaceLookupParameters *_placeLookupParameters;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOPDReverseGeocodingParameters *_reverseGeocodingParameters;
    GEOPDSearchParameters *_searchParameters;
    GEOPDSiriSearchParameters *_siriSearchParameters;
}

@property(retain, nonatomic) GEOPDSiriSearchParameters *siriSearchParameters; // @synthesize siriSearchParameters=_siriSearchParameters;
@property(retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters; // @synthesize placeRefinementParameters=_placeRefinementParameters;
@property(retain, nonatomic) GEOPDPlaceLookupParameters *placeLookupParameters; // @synthesize placeLookupParameters=_placeLookupParameters;
@property(retain, nonatomic) GEOPDReverseGeocodingParameters *reverseGeocodingParameters; // @synthesize reverseGeocodingParameters=_reverseGeocodingParameters;
@property(retain, nonatomic) GEOPDGeocodingParameters *geocodingParameters; // @synthesize geocodingParameters=_geocodingParameters;
@property(retain, nonatomic) GEOPDSearchParameters *searchParameters; // @synthesize searchParameters=_searchParameters;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSiriSearchParameters;
@property(readonly, nonatomic) _Bool hasPlaceRefinementParameters;
@property(readonly, nonatomic) _Bool hasPlaceLookupParameters;
@property(readonly, nonatomic) _Bool hasReverseGeocodingParameters;
@property(readonly, nonatomic) _Bool hasGeocodingParameters;
@property(readonly, nonatomic) _Bool hasSearchParameters;
- (void)dealloc;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithMUIDs:(id)arg1;

@end
