/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper
{
    double _occurrenceDate;
}

+ (_Bool)supportsSecureCoding;
- (id)occurrenceDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalEntity:(void *)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3;

@end

