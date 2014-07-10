/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPUCellInvalidationContext : NSObject
{
    _Bool _invalidateEverything;
    _Bool _invalidateDownloadStatus;
    _Bool _invalidateLayout;
    _Bool _animated;
}

@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool invalidateLayout; // @synthesize invalidateLayout=_invalidateLayout;
@property(nonatomic) _Bool invalidateDownloadStatus; // @synthesize invalidateDownloadStatus=_invalidateDownloadStatus;
@property(nonatomic) _Bool invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;

@end
