/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface TSDGLFrameBufferTextureLookupInfo : NSObject
{
    unsigned int _attachment;
    unsigned int _textureName;
    long long _indexOnAttachment;
    NSString *_name;
    struct CGSize _textureSize;
}

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize)arg4 name:(id)arg5;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property(readonly, nonatomic) unsigned int textureName; // @synthesize textureName=_textureName;
@property(nonatomic) long long indexOnAttachment; // @synthesize indexOnAttachment=_indexOnAttachment;
@property(nonatomic) unsigned int attachment; // @synthesize attachment=_attachment;
- (id)description;
- (void)dealloc;
- (id)initWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize)arg4 name:(id)arg5;

@end

