/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBUIBannerAction : NSObject
{
    id _actionBlock;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
}

+ (id)actionWithBlock:(id)arg1;
@property(copy, nonatomic) NSString *remoteServiceBundleIdentifier; // @synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier;
@property(copy, nonatomic) NSString *remoteViewControllerClassName; // @synthesize remoteViewControllerClassName=_remoteViewControllerClassName;
@property(copy, nonatomic) id actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)dealloc;
- (id)initWithActionBlock:(id)arg1 remoteViewControllerClassName:(void)arg2 remoteServiceBundleIdentifier:(id)arg3;

@end
