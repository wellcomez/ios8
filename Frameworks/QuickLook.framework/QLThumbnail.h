/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURL;

@interface QLThumbnail : NSObject
{
    NSURL *_url;
}

+ (id)thumbnailForDocumentAtURL:(id)arg1 maximumDimension:(double)arg2 error:(id *)arg3;
+ (id)defaultDescriptors;
@property(retain) NSURL *url; // @synthesize url=_url;
- (_Bool)provideImages:(id)arg1 error:(void)arg2;
- (id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(_Bool)arg3 contentRect:(struct CGRect *)arg4 error:(id *)arg5;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

