/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKitUI/HKMedicalIDEditorCell.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMassFormatter, NSNumber, UIPickerView;

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    NSMassFormatter *_massFormatter;
    long long _localWeightUnit;
    NSNumber *_kilogramValue;
}

+ (double)defaultKilogramValue;
@property(retain, nonatomic) NSNumber *kilogramValue; // @synthesize kilogramValue=_kilogramValue;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)commitEditing;
- (void)beginEditing;
- (void)_hidePicker;
- (void)_showPicker;
- (id)formattedValue;
- (id)_formattedValueForKilograms:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
