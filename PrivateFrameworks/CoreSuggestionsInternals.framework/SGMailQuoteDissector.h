/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SGPipelineDissector-Protocol.h"

@interface SGMailQuoteDissector : NSObject <SGPipelineDissector>
{
}

+ (void)initialize;
- (void)dissect:(id)arg1;
- (id)quotedRegionsFrom:(id)arg1;
- (id)_xWrote:(id)arg1 utf16:(id)arg2;
- (id)_tofuRegions:(id)arg1 utf16:(id)arg2;
- (id)_quotedLineRegions:(id)arg1 utf16:(id)arg2;
- (id)_blockquoteRegions:(id)arg1 utf16:(id)arg2;

@end

