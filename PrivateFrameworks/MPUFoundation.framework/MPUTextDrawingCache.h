/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSDictionary, NSHashTable, NSMutableDictionary, NSOperationQueue, UILabel;

@interface MPUTextDrawingCache : NSObject
{
    unsigned long long _cacheCostScale;
    unsigned long long _cacheSize;
    NSMutableDictionary *_cachesForOtherAllowedSizes;
    NSCache *_drawingsForCurrentAllowedSize;
    struct CGSize _referenceSizeForCostComputation;
    NSHashTable *_invalidationObservers;
    unsigned long long _invalidationNotificationCoalescingRequestsCount;
    _Bool _wasInvalidatedWithoutNotifyingObservers;
    NSOperationQueue *_preHeatingOperationQueue;
    _Bool _opaque;
    UILabel *_templateLabel;
    double _displayScale;
    id _textEmphasizer;
    NSDictionary *_emphasizedTextAttributes;
    NSDictionary *_regularTextAttributes;
    struct CGSize _allowedSize;
}

+ (id)_drawingForText:(id)arg1 fromCache:(id)arg2 usingTemplateLabel:(id)arg3 allowedSize:(struct CGSize)arg4 opaque:(_Bool)arg5 displayScale:(double)arg6 textEmphasizer:(id)arg7 regularTextAttributes:(void)arg8 emphasizedTextAttributes:(id)arg9 cacheSize:(id)arg10 cacheCostScale:(unsigned long long)arg11 referenceSizeForCostComputation:(unsigned long long)arg12;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
@property(copy, nonatomic) NSDictionary *emphasizedTextAttributes; // @synthesize emphasizedTextAttributes=_emphasizedTextAttributes;
@property(copy, nonatomic) id textEmphasizer; // @synthesize textEmphasizer=_textEmphasizer;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) struct CGSize allowedSize; // @synthesize allowedSize=_allowedSize;
@property(retain, nonatomic) UILabel *templateLabel; // @synthesize templateLabel=_templateLabel;
- (void).cxx_destruct;
- (struct CGSize)_validateAllowedSize:(struct CGSize)arg1;
- (void)_updateReferenceSizeForCostComputation;
- (void)_notifyInvalidationObservers;
- (id)_keyForAllowedSize:(struct CGSize)arg1;
- (void)_ensureDrawingsForCurrentAllowedSizeCacheIsReady;
- (void)_drawingsForCurrentAllowedSizeWereInvalidated;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (void)preHeatForStrings:(id)arg1 usingTemplateLabel:(id)arg2;
- (void)endCoalescingInvalidationNotifications;
- (void)beginCoalescingInvalidationNotifications;
- (void)removeInvalidationObserver:(id)arg1;
- (void)addInvalidationObserver:(id)arg1;
- (void)invalidate;
- (id)drawingForText:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateLabel:(id)arg1 allowedSize:(struct CGSize)arg2;
- (id)init;

@end

