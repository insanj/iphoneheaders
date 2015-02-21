@class SBApplication;

@interface SBApplicationController : NSObject

+ (SBApplicationController *)sharedInstance;
- (SBApplication *)applicationWithDisplayIdentifier:(NSString *)bundleIdentifier;
- (id)applicationWithBundleIdentifier:(id)arg1;

// from SBLockScreenNotificationModel?
- (id)listItemAtIndexPath:(id)indexPath;

@end
