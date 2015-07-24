#import <UIKit/UIKit.h>

@interface UIStatusBarLayoutManager : NSObject
@property BOOL persistentAnimationsEnabled;

- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2;
- (void)itemView:(id)arg1 widthChangedBy:(float)arg2;
- (float)_widthNeededForItemView:(id)arg1;
- (id)_viewForItem:(id)arg1;
- (BOOL)_processDelta:(float)arg1 forView:(id)arg2;
- (CGRect)_repositionedNewFrame:(CGRect)arg1 widthDelta:(float)arg2;
- (float)_positionAfterPlacingItemView:(id)arg1 startPosition:(float)arg2;
- (CGRect)_frameForItemView:(id)arg1 startPosition:(float)arg2;
- (id)_itemViewsSortedForLayout;
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (BOOL)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(BOOL)arg4;
- (id)_itemViews;
- (void)_positionNewItemViewsWithEnabledItems:(BOOL*)arg1;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(BOOL*)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(BOOL*)arg5 itemDisappearing:(BOOL*)arg6;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (BOOL)itemIsVisible:(id)arg1;
- (float)removeOverlap:(float)arg1 fromItems:(id)arg2;
- (float)widthNeededForItem:(id)arg1;
- (float)distributeOverlap:(float)arg1 amongItems:(id)arg2;
- (float)widthNeededForItems:(id)arg1;
- (void)clearOverlapFromItems:(id)arg1;
- (CGRect)rectForItems:(id)arg1;
- (void)makeVisibleItemsPerformPendedActions;
- (void)removeDisabledItems:(BOOL*)arg1;
- (void)positionInvisibleItems;
- (void)setVisibilityOfItem:(id)arg1 visible:(BOOL)arg2;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (void)setVisibilityOfAllItems:(BOOL)arg1;
- (BOOL)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (BOOL)prepareEnabledItems:(BOOL*)arg1 withData:(id)arg2 actions:(int)arg3;
- (void)setForegroundView:(id)arg1;
- (float)_startPosition;
@end
