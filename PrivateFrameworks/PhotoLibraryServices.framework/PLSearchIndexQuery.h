/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface PLSearchIndexQuery : NSObject
{
    id _resultsHandler;
    NSObject<OS_dispatch_queue> *_queue;
    id _strongSelf;
    _Bool _isCancelled;
    _Bool _isFinished;
    _Bool _isCanceled;
    int _searchId;
    NSString *_searchText;
}

+ (void)getSearchIndexProgress:(id)arg1;
@property(readonly, nonatomic) int searchId; // @synthesize searchId=_searchId;
@property(readonly) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)_inqCleanUp;
- (void)_inqCancel;
- (void)cancel;
- (void)runWithResultsHandler:(id)arg1;
- (_Bool)isCancelled;
@property(readonly) _Bool isFinished;
- (void)appendSearchResults:(id)arg1 hasMoreSearchResults:(_Bool)arg2;
- (void)dealloc;
- (id)initWithSearchText:(id)arg1;
- (id)initWithSearchText:(id)arg1 searchId:(int)arg2;

@end

