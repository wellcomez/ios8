/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class BSSettings, NSSet;

@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying>
{
    long long _preferredInterfaceOrientation;
    NSSet *_occlusions;
    BSSettings *_otherSettings;
}

+ (_Bool)_isMutable;
+ (id)settings;
@property(readonly, copy, nonatomic) NSSet *occlusions; // @synthesize occlusions=_occlusions;
@property(readonly, nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (id)otherSettings;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;

@end
