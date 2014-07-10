/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, NSArray, NSMutableArray, NSString;

@interface GEOBusiness : PBCodable <NSCopying>
{
    unsigned long long _uID;
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSMutableArray *_photos;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    NSString *_uRL;
    _Bool _isClosed;
    struct {
        unsigned int uID:1;
        unsigned int isClosed:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *starRatings; // @synthesize starRatings=_starRatings;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *localizedCategories; // @synthesize localizedCategories=_localizedCategories;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) NSMutableArray *openHours; // @synthesize openHours=_openHours;
@property(retain, nonatomic) NSMutableArray *attributeKeyValues; // @synthesize attributeKeyValues=_attributeKeyValues;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *categorys; // @synthesize categorys=_categorys;
@property(retain, nonatomic) NSMutableArray *ratings; // @synthesize ratings=_ratings;
@property(retain, nonatomic) NSString *mapsURL; // @synthesize mapsURL=_mapsURL;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long uID; // @synthesize uID=_uID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)starRatingAtIndex:(unsigned long long)arg1;
- (unsigned long long)starRatingsCount;
- (void)addStarRating:(id)arg1;
- (void)clearStarRatings;
- (id)sourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourcesCount;
- (void)addSource:(id)arg1;
- (void)clearSources;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategoriesCount;
- (void)addLocalizedCategories:(id)arg1;
- (void)clearLocalizedCategories;
@property(readonly, nonatomic) _Bool hasCenter;
- (id)openHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)openHoursCount;
- (void)addOpenHours:(id)arg1;
- (void)clearOpenHours;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeyValuesCount;
- (void)addAttributeKeyValue:(id)arg1;
- (void)clearAttributeKeyValues;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photosCount;
- (void)addPhoto:(id)arg1;
- (void)clearPhotos;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
- (id)ratingAtIndex:(unsigned long long)arg1;
- (unsigned long long)ratingsCount;
- (void)addRating:(id)arg1;
- (void)clearRatings;
@property(readonly, nonatomic) _Bool hasMapsURL;
@property(nonatomic) _Bool hasIsClosed;
@property(readonly, nonatomic) _Bool hasURL;
@property(readonly, nonatomic) _Bool hasTelephone;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasUID;
- (void)dealloc;
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
- (_Bool)_booleanValueForAmenity:(id)arg1;
- (id)_stringForAmenity:(id)arg1;
- (_Bool)_hasAmenitiesContainingKeys:(id)arg1;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_allCategoriesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_categoryKeys) NSArray *categoryKeys;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_isYelp) _Bool yelp;
- (id)_attributionMapForResponse:(id)arg1;
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;

@end
