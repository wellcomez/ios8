/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class TIKeyboardOutput;

// Not exported
@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldDismiss;
    _Bool _shouldAdvanceInputMode;
    TIKeyboardOutput *_keyboardOutput;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldAdvanceInputMode; // @synthesize shouldAdvanceInputMode=_shouldAdvanceInputMode;
@property(nonatomic) _Bool shouldDismiss; // @synthesize shouldDismiss=_shouldDismiss;
@property(retain, nonatomic) TIKeyboardOutput *keyboardOutput; // @synthesize keyboardOutput=_keyboardOutput;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createKeyboardOutputIfNecessary;
- (void)dealloc;

@end

