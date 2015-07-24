

@interface SBStatusBarStateAggregator

+ (SBStatusBarStateAggregator *)sharedInstance;
- (BOOL)_setItem:(int)item enabled:(BOOL)enabled;

@end

