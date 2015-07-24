#import "UIStatusBarItemView.h"

@interface UIStatusBarNotChargingItemView : UIStatusBarItemView  {
    NSString *_notChargingString;
}

- (void)dealloc;
- (id)contentsImage;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
@end