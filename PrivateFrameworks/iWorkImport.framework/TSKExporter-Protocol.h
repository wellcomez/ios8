/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TSKExporter <NSObject>
- (void)setProgressContext:(id)arg1;
- (id)progressContext;
- (_Bool)isCancelled;
- (void)quit;
- (void)cancel;
- (_Bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDocumentRoot:(id)arg1;

@optional
- (void)enableRenderAllContent;
- (_Bool)isExportSupported;
- (id)documentSpecificTypeUTI;
- (id)savePanelMessage;
- (void)setOptions:(id)arg1;
- (void)setSaveToURL:(id)arg1;
- (void)setTypeUTI:(id)arg1;
- (id)typeUTI;
- (id)exportPathForOutputPath:(id)arg1;
- (_Bool)needsSupplementalFiles;
- (id)progress;
- (void)setUsePackageFormat:(_Bool)arg1;
- (void)setQuickLookThumbnail:(id)arg1;
- (void)setBuildVersionHistory:(id)arg1;
@end
