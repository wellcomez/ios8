/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EKCancellableRemoteOperation-Protocol.h"

@class EKEventStore, NSPredicate;

// Not exported
@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation>
{
    id _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id _cancellationToken;
    _Bool _finished;
    _Bool _isCancelled;
}

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (void)cancel;
- (id)startWithCompletion:(id)arg1;
- (void)terminate;
- (void)dealloc;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

@end
