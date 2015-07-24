#import <UIKit/UIKit.h>

@class UIStatusBar;

@interface UIStatusBarWindow : UIWindow  {
    UIStatusBar *_statusBar;
    int _orientation;
    float _topCornersOffset;
    BOOL _cornersHidden;
}

+ (CGRect)statusBarWindowFrame;
+ (BOOL)isIncludedInClassicJail;

- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;

- (int)orientation;
- (BOOL)_isStatusBarWindow;
- (BOOL)_shouldZoom;

- (void)setTopCornerStyle:(int)arg1 topCornersOffset:(float)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4;
- (void)setCornersHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;

- (void)_rotate;
- (BOOL)_disableViewScaling;
- (BOOL)_disableGroupOpacity;
- (void)_updateTransformLayerForClassicPresentation;

- (id)hitTest:(CGRect)arg1 withEvent:(id)arg2;
@end