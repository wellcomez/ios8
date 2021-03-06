/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableCharacterSet, NSString, UIColor, UITextField;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate>
{
    id <SBUIPasscodeEntryFieldDelegate> _delegate;
    UITextField *_textField;
    NSMutableCharacterSet *_numericTrimmingSet;
    _Bool _ignoreCallbacks;
    _Bool _resigningFirstResponder;
    UIColor *_customBackgroundColor;
}

@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) id <SBUIPasscodeEntryFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)notePasscodeFieldDidAcceptEntry;
- (void)notePasscodeFieldTextDidChange;
- (_Bool)shouldInsertPasscodeText:(id)arg1;
- (void)_autofillForMesaWithCompletion:(id)arg1;
- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;
- (struct CGSize)_viewSize;
@property(readonly, nonatomic, getter=_textField) UITextField *textField; // @synthesize textField=_textField;
- (void)_resetForFailedPasscode:(_Bool)arg1 playUnlockFailedSound:(_Bool)arg2;
- (_Bool)_hasAnyCharacters;
- (void)_deleteLastCharacter;
- (void)_appendString:(id)arg1;
- (_Bool)_baseResignFirstResponder;
- (_Bool)_baseBecomeFirstResponder;
- (void)_setLuminosityBoost:(double)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)setBackgroundAlpha:(double)arg1;
- (void)resetForFailedPasscode;
- (void)reset;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;

@end

