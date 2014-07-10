/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface MPRemoteCommand : NSObject
{
    NSMutableArray *_targetInvocations;
    unsigned int _mediaRemoteCommandType;
    _Bool _enabled;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_addTarget:(id)arg1 action:(SEL)arg2 retainTarget:(_Bool)arg3;
- (id)_mediaRemoteCommandInfoOptions;
- (id)keyPathsForValuesTriggeringCommandsChanged;
- (struct _MRMediaRemoteCommandInfo *)createCommandInfoRepresentation;
- (id)invokeCommandWithEvent:(id)arg1;
- (_Bool)hasTargets;
- (unsigned int)mediaRemoteCommandType;
- (_Bool)isSupported;
- (id)addTargetWithHandler:(id)arg1;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)init;

@end
