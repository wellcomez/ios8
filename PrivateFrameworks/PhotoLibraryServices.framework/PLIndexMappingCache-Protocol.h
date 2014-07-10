/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PLIndexMappingCache <NSObject>
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (Class)derivedChangeNotificationClass;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;

@optional
- (id)currentStateForChange;
@end
