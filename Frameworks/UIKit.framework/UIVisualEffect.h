/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>
{
    _UIVisualEffectConfig *_effectConfig;
    _UIBackdropViewSettings *_effectSettings;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _UIBackdropViewSettings *effectSettings; // @synthesize effectSettings=_effectSettings;
@property(readonly, nonatomic) _UIVisualEffectConfig *effectConfig; // @synthesize effectConfig=_effectConfig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
