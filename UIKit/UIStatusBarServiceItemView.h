#import "UIStatusBarItemView.h"

@interface UIStatusBarServiceItemView : UIStatusBarItemView {
    int _contentType;
    unsigned int _crossfadeStep;
    NSString *_crossfadeString;
    float _crossfadeWidth;
    float _letterSpacing;
    BOOL _loopNowIfNecessary;
    BOOL _loopingNecessaryForString;
    BOOL _loopingNow;
    float _maxWidth;
    NSString *_serviceString;
    float _serviceWidth;
}

- (id)_cachedContentImageForString:(id)arg1 withWidth:(float)arg2 letterSpacing:(float)arg3;
- (id)_contentsImageFromString:(id)arg1 withWidth:(float)arg2 letterSpacing:(float)arg3;
- (id)_crossfadeContentsImage;
- (void)_crossfadeStepAnimation;
- (BOOL)_crossfaded;
- (void)_finalAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_loopingNecessary;
- (id)_serviceContentsImage;
- (float)addContentOverlap:(float)arg1;
- (BOOL)animatesDataChange;
- (id)contentsImage;
- (void)dealloc;
- (float)extraRightPadding;
- (int)legibilityStyle;
- (void)performPendedActions;
- (float)resetContentOverlap;
- (void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3;
- (float)standardPadding;
- (float)updateContentsAndWidth;
- (BOOL)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(float)arg4 actions:(int)arg5;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end