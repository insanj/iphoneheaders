#import "UIStatusBarItemView.h"

@interface UIStatusBarBatteryItemView : UIStatusBarItemView  {
    int _capacity;
    int _state;
    UIView *_accessoryView;
}

- (float)_batteryYOffsetWithBackground:(id)arg1;
- (id)_accessoryImage;
- (BOOL)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (float)extraRightPadding;
- (float)legibilityStrength;
- (id)contentsImage;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
@end