/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSKCOOperation-Protocol.h"

// Not exported
@interface TSKCOAbstractOperation : NSObject <TSKCOOperation>
{
    _Bool mNoop;
}

@property(readonly, nonatomic) _Bool isNoop; // @synthesize isNoop=mNoop;
- (void)dealloc;
- (id)initWithNoop:(_Bool)arg1;

@end
