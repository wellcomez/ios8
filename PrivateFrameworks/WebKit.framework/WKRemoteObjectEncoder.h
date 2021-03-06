/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCoder.h"

// Not exported
@interface WKRemoteObjectEncoder : NSCoder
{
    struct RefPtr<WebKit::MutableDictionary> _rootDictionary;
    struct Array *_objectStream;
    struct MutableDictionary *_currentDictionary;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)requiresSecureCoding;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (_Bool)allowsKeyedCoding;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (struct ImmutableDictionary *)rootObjectDictionary;
- (id)init;

@end

