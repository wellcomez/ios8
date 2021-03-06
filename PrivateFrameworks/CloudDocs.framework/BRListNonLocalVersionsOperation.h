/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSError, NSMutableArray, NSURL;

@interface BRListNonLocalVersionsOperation : NSOperation
{
    NSURL *_documentURL;
    NSMutableArray *_versions;
    NSError *_error;
    id <BRNonLocalVersionSending> _sender;
    id <BRNonLocalVersionReceiving> _receiver;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSMutableArray *versions; // @synthesize versions=_versions;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (id)description;
- (void)start;
- (void)cancel;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)isConcurrent;
- (void)dealloc;
- (id)initWithDocumentURL:(id)arg1;

@end

