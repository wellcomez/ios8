/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEORoute, MKPolyline, MKRoutePolyline, NSArray, NSString;

@interface MKRoute : NSObject
{
    GEORoute *_geoRoute;
    MKRoutePolyline *_polyline;
    NSArray *_steps;
}

@property(readonly, nonatomic, getter=_geoRoute) GEORoute *geoRoute; // @synthesize geoRoute=_geoRoute;
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, nonatomic) MKPolyline *polyline; // @synthesize polyline=_polyline;
- (void).cxx_destruct;
@property(readonly, nonatomic) double expectedTravelTime;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSArray *advisoryNotices;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long transportType;
- (id)_initWithGEORoute:(id)arg1;
- (id)_maneuverImageForStep:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end
