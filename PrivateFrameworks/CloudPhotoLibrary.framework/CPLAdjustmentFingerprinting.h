/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPLAdjustments, CPLResource;

@interface CPLAdjustmentFingerprinting : NSObject
{
    _Bool _hasRedEye;
    _Bool _hasAutoEnhance;
    _Bool _hasSimpleLightenDarken;
    _Bool _hasOtherAdjustments;
    CPLAdjustments *_otherAdjustments;
    CPLResource *_baseImage;
    CPLResource *_largeAdjustmentData;
    CPLResource *_secondaryAdjustmentData;
}

@property(retain, nonatomic) CPLResource *secondaryAdjustmentData; // @synthesize secondaryAdjustmentData=_secondaryAdjustmentData;
@property(retain, nonatomic) CPLResource *largeAdjustmentData; // @synthesize largeAdjustmentData=_largeAdjustmentData;
@property(retain, nonatomic) CPLResource *baseImage; // @synthesize baseImage=_baseImage;
@property(retain, nonatomic) CPLAdjustments *otherAdjustments; // @synthesize otherAdjustments=_otherAdjustments;
@property(nonatomic) _Bool hasOtherAdjustments; // @synthesize hasOtherAdjustments=_hasOtherAdjustments;
@property(nonatomic) _Bool hasSimpleLightenDarken; // @synthesize hasSimpleLightenDarken=_hasSimpleLightenDarken;
@property(nonatomic) _Bool hasAutoEnhance; // @synthesize hasAutoEnhance=_hasAutoEnhance;
@property(nonatomic) _Bool hasRedEye; // @synthesize hasRedEye=_hasRedEye;
- (void).cxx_destruct;
- (id)otherAdjustmentsFingerprint;
- (id)similarToOriginalAdjustmentsFingerprint;

@end

