/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSSet, TSKSelection;

@protocol TSDEditor <NSObject>
- (id)documentRoot;

@optional
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(retain, nonatomic) TSKSelection *selection;
- (id)inspectorTabTipKey;
- (struct CGRect)coachingTipManager:(id)arg1 coachingTipView:(id)arg2 canvasRectForKey:(id)arg3;
- (id)canvasCoachingTips;
- (void)addContextualMenuItemsToArray:(id)arg1;
- (struct CGRect)targetRectForEditMenu;
- (void)reverseTableDirection:(id)arg1;
- (void)reverseDirection:(id)arg1;
- (_Bool)canBeginEditingRepOnDoubleTap:(id)arg1;
- (_Bool)canBeginPathEditing;
- (_Bool)canAddOrShowComment;
- (_Bool)suppressAutozoom;
- (struct CGRect)zoomRectForSelection:(id)arg1;
- (double)targetPointSizeForSelectionWithViewScale:(double)arg1;
- (double)viewScaleForSelectionWithTargetPointSize:(double)arg1;
- (id)wrapInspectorController;
- (id)extraMenuItems;
- (void)delete:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)shouldProhibitAction:(SEL)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)level2InspectorViewControllers;
- (struct CGSize)topLevelInspectorPreferredPopoverSize;
- (id)topLevelInspectorAutosaveName;
- (id)topLevelInspectorViewControllers;
- (id)editingSearchReference;
- (_Bool)wantsToBePushedBackOntoStackForSelection:(id)arg1;
- (_Bool)shouldEndEditingToBeginEditingRep:(id)arg1;
- (void)didResignTextInputEditor;
- (void)willResignTextInputEditor;
- (void)didBecomeTextInputEditor;
- (void)willResignCurrentEditor;
- (void)didBecomeCurrentEditor;
- (_Bool)readyToAcceptSelection:(id)arg1 onInfo:(id)arg2;
- (_Bool)ignoreSetSelection:(id)arg1 onInfo:(id)arg2;
- (void)setSelectionWithSearchReference:(id)arg1;
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)model;
@end

