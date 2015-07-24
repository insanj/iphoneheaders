#import "UIStatusBarItemView.h"

@interface UIStatusBarTimeItemView : UIStatusBarItemView {
    NSString *_timeString;
}

- (id)contentsImage;
- (void)dealloc;
- (int)textStyle;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
@end

