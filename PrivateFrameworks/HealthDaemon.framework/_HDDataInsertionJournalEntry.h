/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HDJournalEntry-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class HKObject;

@interface _HDDataInsertionJournalEntry : NSObject <HDJournalEntry, NSSecureCoding>
{
    HKObject *_dataObject;
    unsigned long long _provenance;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) HKObject *dataObject; // @synthesize dataObject=_dataObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)applyWithDaemon:(id)arg1;
- (id)description;
- (id)initWithDataObject:(id)arg1 provenance:(unsigned long long)arg2;

@end

