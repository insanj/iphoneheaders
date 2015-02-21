@class TKTonePicker;

@interface RingtonePane : PSViewController {
	TKTonePicker* _picker;
}

+(id)tonePickerWithFrame:(CGRect)frame;
-(void)layoutSubviews;
-(void)viewDidBecomeVisible;
-(void)stopPlaying;
-(void)ringtonePicker:(id)picker selectedRingtoneWithIdentifier:(id)identifier;
-(id)preferenceValue;
-(void)setPreferenceValue:(id)value;
-(void)setPreferenceSpecifier:(id)specifier;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;

@end