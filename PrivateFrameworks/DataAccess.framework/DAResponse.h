/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DAAction.h>

@interface DAResponse : DAAction
{
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(long long)arg4;

@end

