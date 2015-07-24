#import <UIKit/UIKit.h>

@class UIStatusBarItem;

@interface UIStatusBarItemView : UIView
+ (id)createViewForItem:(UIStatusBarItem *)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;

- (BOOL)isVisible;
- (int)textStyle;
- (void)setLayoutManager:(id)arg1; // UIStatusBarLayoutManager *
- (id)layoutManager;
- (void)beginDisablingRasterization;
- (id)imageWithText:(id)arg1;
- (void)performPendedActions;
- (BOOL)animatesDataChange;
- (float)maximumOverlap;
- (float)addContentOverlap:(float)arg1;
- (float)resetContentOverlap;
- (float)extraRightPadding;
- (float)extraLeftPadding;
- (id)textFont;
- (void)drawText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textSize:(CGSize)arg5;
- (float)setStatusBarData:(id)arg1 actions:(int)arg2;
- (float)currentRightOverlap;
- (float)currentLeftOverlap;
- (float)currentOverlap;
- (void)setCurrentOverlap:(float)arg1;
- (void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3;
- (void)endDisablingRasterization;
- (BOOL)cachesImage;
- (float)shadowPadding;
- (float)standardPadding;
- (void)setLayerContentsImage:(id)arg1;
- (float)legibilityStrength;
- (BOOL)allowsUpdates;
- (float)updateContentsAndWidth;
- (void)setAllowsUpdates:(BOOL)arg1;
- (id)initWithItem:(UIStatusBarItem *)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (int)legibilityStyle;
- (_UILegibilityImageSet *)contentsImage;

// iOS 6
- (UIImage *)contentsImageForStyle:(int)arg1;

- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)endImageContext;
- (id)imageFromImageContextClippedToWidth:(float)arg1;
- (void)beginImageContextWithMinimumWidth:(float)arg1;
- (id)foregroundStyle; //UIStatusBarForegroundStyleAttributes *
- (id)imageWithShadowNamed:(id)arg1;
- (UIStatusBarItem *)item;
- (int)textAlignment;
- (void)setVisible:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setContentMode:(int)arg1;
@end
