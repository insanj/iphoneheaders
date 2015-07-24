#import <UIKit/UIKit.h>

@interface _UIScrollsToTopInitiatorView : UIView
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@end
