/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayerUI/MPUReportingEvent.h>

@class MPUReportingRadioStationMetadata;

@interface MPUReportingStationChangeEvent : MPUReportingEvent
{
    MPUReportingRadioStationMetadata *_oldStationMetadata;
    MPUReportingRadioStationMetadata *_currentStationMetadata;
}

@property(retain, nonatomic) MPUReportingRadioStationMetadata *currentStationMetadata; // @synthesize currentStationMetadata=_currentStationMetadata;
@property(retain, nonatomic) MPUReportingRadioStationMetadata *oldStationMetadata; // @synthesize oldStationMetadata=_oldStationMetadata;
- (void).cxx_destruct;
- (_Bool)isValid;

@end
