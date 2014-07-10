/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface TTSSpeechVoice : NSObject
{
    id <TTSSpeechService> _service;
    _Bool _isDefault;
    _Bool _isCustomVoice;
    NSString *_name;
    NSString *_language;
    NSString *_identifier;
    long long _footprint;
    long long _gender;
}

@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool isCustomVoice; // @synthesize isCustomVoice=_isCustomVoice;
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)setService:(id)arg1;
- (id)service;

@end
