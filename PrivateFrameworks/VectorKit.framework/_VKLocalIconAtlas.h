/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKIconAtlas.h>

@class VKResourceManager;

// Not exported
@interface _VKLocalIconAtlas : VKIconAtlas
{
    VKResourceManager *_resourceManager;
}

- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longValue:(unsigned long long)arg2 style:(CDStruct_44d855de *)arg3 contentScale:(double)arg4;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 value:(unsigned int)arg2 style:(CDStruct_44d855de *)arg3 contentScale:(double)arg4;
- (struct CGImage *)_createImageForName:(id)arg1 contentScale:(double)arg2;
- (void)dealloc;
- (id)initWithResourceManager:(id)arg1;

@end
