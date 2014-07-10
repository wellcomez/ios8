/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "CKAudioRecorderDelegate-Protocol.h"
#import "CKInlineAudioReplyButtonDelegate-Protocol.h"
#import "CKJoystickControllerDelegate-Protocol.h"
#import "CKMessageEntryContentViewDelegate-Protocol.h"
#import "CKMessageEntryRecordedAudioViewDelegate-Protocol.h"

@class CADisplayLink, CAMShutterButton, CKAudioRecorder, CKComposition, CKConversation, CKInlineAudioReplyButtonController, CKJoystickController, CKMessageEntryContentView, CKMessageEntryRecordedAudioView, CKMessageEntryWaveformView, NSDate, UIButton, UIImageView, UILabel, _UIBackdropView, _UITextFieldRoundedRectBackgroundViewNeue;

@interface CKMessageEntryView : UIView <CKMessageEntryContentViewDelegate, CKAudioRecorderDelegate, CKJoystickControllerDelegate, CKMessageEntryRecordedAudioViewDelegate, CKInlineAudioReplyButtonDelegate>
{
    UIView *_dimmingView;
    int _animationState;
    _Bool _shouldShowSendButton;
    _Bool _shouldShowSubject;
    _Bool _shouldShowPhotoButton;
    _Bool _shouldShowCharacterCount;
    _Bool _dimmed;
    _Bool _shouldKnockoutCoverView;
    _Bool _keyboardVisible;
    _Bool _composingRecipient;
    _Bool _sendingMessage;
    _Bool _characterCountHidden;
    id <CKMessageEntryViewDelegate> _delegate;
    CKConversation *_conversation;
    CKMessageEntryContentView *_contentView;
    CKMessageEntryWaveformView *_waveformView;
    UIButton *_photoButton;
    UIButton *_deleteAudioRecordingButton;
    UIButton *_sendButton;
    UIButton *_audioButton;
    CKInlineAudioReplyButtonController *_audioReplyButton;
    CAMShutterButton *_shutterButton;
    UILabel *_characterCountLabel;
    _UITextFieldRoundedRectBackgroundViewNeue *_coverView;
    _UIBackdropView *_backdropView;
    UIView *_knockoutCoverView;
    UIView *_dividerLine;
    CKAudioRecorder *_recorder;
    CKComposition *_audioComposition;
    CKJoystickController *_audioJoystickController;
    CKMessageEntryRecordedAudioView *_recordedAudioView;
    CADisplayLink *_displayLink;
    unsigned long long _waveformUpdateCounter;
    UILabel *_audioHintLabel;
    UIImageView *_audioHintImageView;
    NSDate *_audioLongPressGestureBeginDate;
    struct CGSize _photoButtonSize;
    struct CGSize _deleteAudioRecordingButtonSize;
    struct CGSize _sendButtonSize;
    struct CGSize _audioButtonSize;
    struct CGSize _characterCountSize;
    struct CGSize _waveformViewSize;
    struct UIEdgeInsets _sendTextAlignmentInsets;
}

+ (id)audioButtonImage;
+ (double)contentViewPortraitWidth:(_Bool)arg1;
+ (double)coverViewPortraitWidth:(_Bool)arg1;
@property(retain, nonatomic) NSDate *audioLongPressGestureBeginDate; // @synthesize audioLongPressGestureBeginDate=_audioLongPressGestureBeginDate;
@property(retain, nonatomic) UIImageView *audioHintImageView; // @synthesize audioHintImageView=_audioHintImageView;
@property(retain, nonatomic) UILabel *audioHintLabel; // @synthesize audioHintLabel=_audioHintLabel;
@property(nonatomic) unsigned long long waveformUpdateCounter; // @synthesize waveformUpdateCounter=_waveformUpdateCounter;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) struct CGSize waveformViewSize; // @synthesize waveformViewSize=_waveformViewSize;
@property(retain, nonatomic) CKMessageEntryRecordedAudioView *recordedAudioView; // @synthesize recordedAudioView=_recordedAudioView;
@property(retain, nonatomic) CKJoystickController *audioJoystickController; // @synthesize audioJoystickController=_audioJoystickController;
@property(retain, nonatomic) CKComposition *audioComposition; // @synthesize audioComposition=_audioComposition;
@property(retain, nonatomic) CKAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic, getter=isCharacterCountHidden) _Bool characterCountHidden; // @synthesize characterCountHidden=_characterCountHidden;
@property(retain, nonatomic) UIView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(retain, nonatomic) UIView *knockoutCoverView; // @synthesize knockoutCoverView=_knockoutCoverView;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) _UITextFieldRoundedRectBackgroundViewNeue *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) struct CGSize characterCountSize; // @synthesize characterCountSize=_characterCountSize;
@property(nonatomic) struct UIEdgeInsets sendTextAlignmentInsets; // @synthesize sendTextAlignmentInsets=_sendTextAlignmentInsets;
@property(nonatomic) struct CGSize audioButtonSize; // @synthesize audioButtonSize=_audioButtonSize;
@property(nonatomic) struct CGSize sendButtonSize; // @synthesize sendButtonSize=_sendButtonSize;
@property(nonatomic) struct CGSize deleteAudioRecordingButtonSize; // @synthesize deleteAudioRecordingButtonSize=_deleteAudioRecordingButtonSize;
@property(nonatomic) struct CGSize photoButtonSize; // @synthesize photoButtonSize=_photoButtonSize;
@property(retain, nonatomic) UILabel *characterCountLabel; // @synthesize characterCountLabel=_characterCountLabel;
@property(retain, nonatomic) CAMShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(retain, nonatomic) CKInlineAudioReplyButtonController *audioReplyButton; // @synthesize audioReplyButton=_audioReplyButton;
@property(retain, nonatomic) UIButton *audioButton; // @synthesize audioButton=_audioButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *deleteAudioRecordingButton; // @synthesize deleteAudioRecordingButton=_deleteAudioRecordingButton;
@property(nonatomic, getter=isSendingMessage) _Bool sendingMessage; // @synthesize sendingMessage=_sendingMessage;
@property(nonatomic, getter=isComposingRecipient) _Bool composingRecipient; // @synthesize composingRecipient=_composingRecipient;
@property(nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) _Bool shouldKnockoutCoverView; // @synthesize shouldKnockoutCoverView=_shouldKnockoutCoverView;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) int animationState; // @synthesize animationState=_animationState;
@property(retain, nonatomic) UIButton *photoButton; // @synthesize photoButton=_photoButton;
@property(retain, nonatomic) CKMessageEntryWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(retain, nonatomic) CKMessageEntryContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) id <CKMessageEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowCharacterCount; // @synthesize shouldShowCharacterCount=_shouldShowCharacterCount;
@property(nonatomic) _Bool shouldShowPhotoButton; // @synthesize shouldShowPhotoButton=_shouldShowPhotoButton;
@property(nonatomic) _Bool shouldShowSubject; // @synthesize shouldShowSubject=_shouldShowSubject;
@property(nonatomic) _Bool shouldShowSendButton; // @synthesize shouldShowSendButton=_shouldShowSendButton;
- (BOOL)sendButtonColorWithPreferredServiceManagerError:(BOOL)arg1;
- (_Bool)photoButtonEnabledWithPreferredServiceManagerError:(BOOL)arg1;
- (_Bool)sendButtonEnabledWithPreferredServiceManagerError:(BOOL)arg1;
- (void)clearResponseContext;
- (void)updateResponseContext;
- (void)updateEntryView;
- (_Bool)shouldRecord;
- (void)messageReceived:(id)arg1;
- (void)conversationPreferredServiceChanged:(id)arg1;
- (struct UIEdgeInsets)contentTextAlignmentInsets;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)touchUpAudioButton:(id)arg1;
- (void)touchDownAudioButton:(id)arg1;
- (void)stopRecordingForRaiseGesture;
- (void)startRecordingForRaiseGesture;
- (void)touchUpInsideDeleteAudioRecordingButton:(id)arg1;
- (void)cancelRecordingAndShowAudioHint;
- (void)presentAudioJoystick;
- (void)displayLinkFired:(id)arg1;
- (void)joystickCancelAction:(id)arg1;
- (void)joystickSendAction:(id)arg1;
- (void)joystickShutterButtonDownAction:(id)arg1;
- (void)_toggleAudioPlaybackJoystickIsPlaying:(_Bool)arg1;
- (void)messageEntryRecordedAudioView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)joystickPlaybackButtonUpAction:(id)arg1;
- (void)joystickShutterButtonUpAction:(id)arg1;
- (void)audioReplyButtonCancel:(id)arg1;
- (void)audioReplyButtonStop:(id)arg1;
- (void)audioReplyButtonStart:(id)arg1;
- (void)joystickGestureRecognized:(id)arg1;
- (double)_accessoryViewFadeDuration;
- (void)joystickControllerWillShrinkJoystick:(id)arg1 animated:(_Bool)arg2;
- (void)joystickControllerWillExpandJoystick:(id)arg1 animated:(_Bool)arg2;
- (void)joystickControllerDidDismissJoystick:(id)arg1;
- (void)joystickControllerWillDismissJoystick:(id)arg1 animated:(_Bool)arg2;
- (void)joystickControllerWillPresentJoystick:(id)arg1 animated:(_Bool)arg2;
- (void)audioRecorderRecordingDidChange:(id)arg1;
- (_Bool)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentViewDidEndEditing:(id)arg1;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1;
- (_Bool)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (void)messageEntryContentViewDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic) _Bool isAudioJoystickVisible;
@property(retain, nonatomic) CKComposition *composition;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowSendButton:(_Bool)arg2 shouldShowSubject:(_Bool)arg3 shouldShowPhotoButton:(_Bool)arg4 shouldShowCharacterCount:(_Bool)arg5;
- (double)placeholderHeight;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
