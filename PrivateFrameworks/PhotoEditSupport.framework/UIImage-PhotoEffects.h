/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImage.h"

@interface UIImage (PhotoEffects)
+ (float)inkEffectsSaturationFromAmount:(float)arg1;
+ (float)defaultFXValue;
+ (id)defaultForFXKey:(id)arg1;
+ (id)defaultForFXKey:(id)arg1 groupIndex:(int)arg2 value:(float)arg3;
+ (_Bool)integerOnlyValuesForGroupIndex:(int)arg1;
+ (int)maximumValueForGroupIndex:(int)arg1;
+ (int)minimumValueForGroupIndex:(int)arg1;
+ (_Bool)wantFXAsymetricWidthDisplayForGroup:(int)arg1 value:(float)arg2;
+ (_Bool)wantFXCenterWidthDisplayForGroup:(int)arg1 value:(float)arg2;
+ (_Bool)wantFXAngleInteractionForGroup:(int)arg1 value:(float)arg2;
+ (_Bool)wantFXCenterSizeInteractionForGroup:(int)arg1 value:(float)arg2;
+ (_Bool)wantFXSingleTouchCenterAndSizeInteractionForGroup:(int)arg1 value:(float)arg2;
+ (_Bool)wantFXCenterPointInteractionForGroup:(int)arg1 value:(float)arg2;
+ (id)imageWithInk_colorThumbnails:(float)arg1 sourceImageBuffer:(id)arg2;
+ (id)ciImageWithInk_renderWithInput:(id)arg1 withTexture1:(id)arg2 withTexture2:(id)arg3 withTexture3:(id)arg4 withStrength:(double)arg5 withSaturation:(float)arg6 thumbnailMode:(_Bool)arg7;
+ (id)imageBufferWithInk_blendTexture:(id)arg1 options:(id)arg2 gradientRect:(struct CGRect)arg3 padding:(double)arg4 liveInteraction:(_Bool)arg5 textureName:(id)arg6;
+ (int)imageWithTiltShift:(float)arg1 withBufferIn:(void *)arg2 withBufferOut:(void *)arg3 withBytesPerRow:(unsigned long long)arg4 withBytesPerRowOrg:(unsigned long long)arg5 withWidth:(int)arg6 withHeight:(int)arg7 withTiltShiftData:(void *)arg8 withCenter:(struct CGPoint)arg9 withSize:(double)arg10 withAngle:(float)arg11 destRect:(struct CGRect)arg12 padding:(double)arg13 scale:(int)arg14;
+ (void)tiltShiftPrepareLivePreview:(void *)arg1 fromBuffer:(id)arg2;
+ (int)imageWithArtisticEdge:(float)arg1 withBufferIn:(void *)arg2 withBufferOut:(void *)arg3 withBytesPerRow:(unsigned long long)arg4 withBytesPerRowOrg:(unsigned long long)arg5 withWidth:(int)arg6 withHeight:(int)arg7 destRect:(struct CGRect)arg8 padding:(double)arg9 scale:(int)arg10;
- (void)dumpTexture:(struct __CVBuffer *)arg1;
@end

