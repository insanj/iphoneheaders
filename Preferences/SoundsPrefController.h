#import <UIKit/UIKit.h>

@interface SoundsPrefController : PSDetailController/* {
	NSString* _ringtoneIdentifier;
	NSString* _texttoneIdentifier;
	float _volume;
	float _rateLimitedVolume;
	int _lastPlayedSound;
	BOOL _hasTelephony;
	BOOL _volumeHUDSupressed;
	double _lastTime;
	PSSpecifier* _voiceMailSpecifier;
	int _voiceMailSpecifierIndex;
}*/

-(void)setCanChangeRingtoneWithButtons:(id)buttons specifier:(id)specifier;
-(id)canChangeRingtoneWithButtons:(id)buttons;
-(void)setPlayKeyboardSound:(id)sound specifier:(id)specifier;
-(void)setPlayLockSound:(id)sound specifier:(id)specifier;
-(void)setVibrate:(id)vibrate specifier:(id)specifier;
-(void)playSound:(int)sound;
-(id)shouldPlayCalendarSound:(id)sound;
-(id)tone:(id)tone;
-(id)ringtone:(id)ringtone;
-(void)setRingtone:(id)ringtone specifier:(id)specifier;
-(id)soundValue:(id)value;
-(void)setVolume:(id)volume specifier:(id)specifier;
-(void)setVolumeAfterRateLimiting;
-(void)volumeChangedExternally:(id)externally;
-(id)volume:(id)volume;
-(id)soundEffects:(id)effects;
-(void)setSoundEffects:(id)effects specifier:(id)specifier;
-(void)dealloc;
-(void)pushController:(id)controller;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)endInterruption;
-(void)updateVolume;
-(void)didLock;
-(id)specifiers;
-(BOOL)_canChangeRingtoneWithButtons;
-(void)updateVoiceMailVisibility;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)willForeground;
-(void)didBackground;
-(void)setVolumeHUDSupression:(BOOL)supression;
-(int)_deviceType;
-(id)init;

@end
