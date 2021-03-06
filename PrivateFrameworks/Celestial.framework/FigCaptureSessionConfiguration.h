/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray;

@interface FigCaptureSessionConfiguration : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_connections;
    long long _configurationID;
    _Bool _usesAppAudioSession;
    _Bool _configuresAppAudioSession;
}

+ (void)initialize;
@property(nonatomic) _Bool configuresAppAudioSession; // @synthesize configuresAppAudioSession=_configuresAppAudioSession;
@property(nonatomic) _Bool usesAppAudioSession; // @synthesize usesAppAudioSession=_usesAppAudioSession;
@property(nonatomic) long long configurationID; // @synthesize configurationID=_configurationID;
@property(readonly, nonatomic) NSArray *sinkConfigurations;
@property(readonly, nonatomic) NSArray *sourceConfigurations;
@property(readonly, nonatomic) NSArray *connectionConfigurations;
- (void)removeConnectionConfiguration:(id)arg1;
- (void)addConnectionConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

