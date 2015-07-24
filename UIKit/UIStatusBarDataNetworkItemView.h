#import "UIStatusBarItemView.h"

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView  {
    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

- (id)_dataNetworkImage;
- (id)_stringForRSSI;
- (float)maximumOverlap;
- (float)extraLeftPadding;
- (id)contentsImage;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@end