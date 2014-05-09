@interface SpringBoard : UIApplication

@property (nonatomic, retain) UIWindow *window;
@property (readonly) BOOL isLocked;

- (void)applicationOpenURL:(NSURL *)url publicURLsOnly:(BOOL)publicOnly;
- (void)relaunchSpringBoard;
- (void)_relaunchSpringBoardNow;
- (void)undim;
- (id)_accessibilityFrontMostApplication;


@end
