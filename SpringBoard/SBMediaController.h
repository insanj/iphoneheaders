@class SBApplication;

@interface SBMediaController : NSObject

@property(assign, nonatomic, getter=isRingerMuted) BOOL ringerMuted;

+ (instancetype)sharedInstance;

- (NSDictionary *)_nowPlayingInfo;
- (SBApplication *)nowPlayingApplication;
- (NSString *)nowPlayingTitle;
- (NSString *)nowPlayingArtist;
- (NSString *)nowPlayingAlbum;

@end
