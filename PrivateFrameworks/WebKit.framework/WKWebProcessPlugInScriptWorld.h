/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <WebKit/WKObject-Protocol.h>

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;
}

+ (id)normalWorld;
+ (id)world;
- (id).cxx_construct;
@property(readonly) struct Object *_apiObject;
@property(readonly) struct InjectedBundleScriptWorld *_scriptWorld;
- (void)clearWrappers;
- (void)dealloc;

@end
