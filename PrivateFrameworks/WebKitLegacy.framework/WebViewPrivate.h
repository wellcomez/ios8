/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString, NSURL, WAKWindow, WebFixedPositionContent, WebIndicateLayer, WebInspector, WebNodeHighlight, WebPreferences, WebVideoFullscreenController;

// Not exported
@interface WebViewPrivate : NSObject
{
    struct Page *page;
    struct RefPtr<WebViewGroup> group;
    id UIDelegate;
    id UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    id policyDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    id <WebFormDelegate> formDelegate;
    id editingDelegate;
    id editingDelegateForwarder;
    id scriptDebugDelegate;
    id historyDelegate;
    id resourceProgressDelegateForwarder;
    id formDelegateForwarder;
    WebInspector *inspector;
    WebNodeHighlight *currentNodeHighlight;
    _Bool allowsUndo;
    float zoomMultiplier;
    _Bool zoomsTextOnly;
    NSString *applicationNameForUserAgent;
    struct String userAgent;
    _Bool userAgentOverridden;
    WebPreferences *preferences;
    _Bool useSiteSpecificSpoofing;
    NSURL *userStyleSheetLocation;
    WAKWindow *hostWindow;
    int programmaticFocusCount;
    struct WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;
    struct WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;
    struct WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;
    struct WebHistoryDelegateImplementationCache historyDelegateImplementations;
    void *observationInfo;
    _Bool closed;
    _Bool closing;
    _Bool shouldCloseWithWindow;
    _Bool mainFrameDocumentReady;
    _Bool drawsBackground;
    _Bool tabKeyCyclesThroughElementsChanged;
    _Bool becomingFirstResponder;
    _Bool becomingFirstResponderFromOutside;
    _Bool usesPageCache;
    struct CGColor *backgroundColor;
    NSString *mediaStyle;
    _Bool hasSpellCheckerDocumentTag;
    long long spellCheckerDocumentTag;
    _Bool isStopping;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    _Bool allowsMessaging;
    NSMutableSet *_caretChangeListeners;
    id <WebCaretChangeListener> _caretChangeListener;
    struct CGSize fixedLayoutSize;
    _Bool mainViewIsScrollingOrZooming;
    int didDrawTiles;
    struct Mutex pendingFixedPositionLayoutRectMutex;
    struct CGRect pendingFixedPositionLayoutRect;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>> identifierMap;
    _Bool _keyboardUIModeAccessed;
    int _keyboardUIMode;
    _Bool shouldUpdateWhileOffscreen;
    _Bool includesFlattenedCompositingLayersWhenDrawingToBitmap;
    _Bool needsOneShotDrawingSynchronization;
    _Bool postsAcceleratedCompositingNotifications;
    struct RefPtr<LayerFlushController> layerFlushController;
    struct CGSize lastLayoutSize;
    WebVideoFullscreenController *fullscreenController;
    WebIndicateLayer *indicateLayer;
    id <WebGeolocationProvider> _geolocationProvider;
    id <WebDeviceOrientationProvider> m_deviceOrientationProvider;
    id <WebNotificationProvider> _notificationProvider;
    struct RefPtr<WebCore::HistoryItem> _globalHistoryItem;
    _Bool interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    float customDeviceScaleFactor;
    WebFixedPositionContent *_fixedPositionContent;
    struct RetainPtr<NSData> sourceApplicationAuditData;
    _Bool _didPerformFirstNavigation;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
