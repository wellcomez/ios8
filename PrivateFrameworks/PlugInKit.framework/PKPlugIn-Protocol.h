/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSBundle, NSDictionary, NSString, NSURL;

@protocol PKPlugIn <NSObject>
@property(copy) id notificationBlock;
@property(readonly) NSBundle *embeddedBundle;
@property(readonly) id embeddedPrincipal;
@property(readonly) id plugInPrincipal;
@property(readonly) _Bool active;
@property(readonly) id <PKPlugIn> supersededBy;
@property long long userElection;
@property(readonly) NSString *localizedContainingName;
@property(readonly) NSString *localizedShortName;
@property(readonly) NSString *localizedName;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) _Bool onSystemVolume;
@property(readonly) NSURL *containingUrl;
@property(readonly) NSURL *url;
@property(readonly) NSString *version;
@property(readonly) NSString *identifier;
- (void)setReplyQueue:(id)arg1;
- (id)defaults;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;
- (void)endUsing:(id)arg1;
- (_Bool)useBundle:(id)arg1 error:(id *)arg2;
- (void)beginUsing:(id)arg1;
@end
