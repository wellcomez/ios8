/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface RCCaptureFormat : NSObject
{
}

+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1;
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 outputExtensionWithFallbacks:(id)arg2 completionHandler:(id)arg3;
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 preferredOutputExtension:(id)arg2 completionHandler:(id)arg3;
+ (id)AVAssetExportPresetForExportingToExtension:(id)arg1;
+ (id)AVMediaTypeForFileExtension:(id)arg1;
+ (id)AVFileTypeUTIForFileExtension:(id)arg1;
+ (id)fileFormatsDirectlyImportable;
+ (id)fileExtensionsSupported;
+ (id)fileExtensionForAssetExport;
+ (id)fileExtensionForIntermediateAssetCapture;

@end
