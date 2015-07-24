#import <Foundation/Foundation.h>

@interface UIStatusBarItem : NSObject
@property(readonly) int type;
@property(readonly) Class viewClass;
@property(readonly) int priority;
@property(readonly) int leftOrder;
@property(readonly) int rightOrder;
@property(readonly) NSString *indicatorName;

+ (BOOL)isItemWithTypeExclusive:(int)arg1;
+ (BOOL)itemType:(int)arg1 idiom:(int)arg2 appearsInRegion:(int)arg3;
+ (BOOL)itemType:(int)arg1 idiom:(int)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;
+ (BOOL)typeIsValid:(int)arg1;
+ (id)itemWithType:(int)arg1 idiom:(int)arg2;

- (id)initWithType:(int)arg1;
- (int)compareRightOrder:(id)arg1;
- (int)compareLeftOrder:(id)arg1;
- (Class)viewClass;
- (int)rightOrder;
- (int)leftOrder;
- (NSString *)indicatorName;
- (int)comparePriority:(id)arg1;
- (BOOL)appearsInRegion:(int)arg1;
- (BOOL)appearsOnRight;
- (BOOL)appearsOnLeft;
- (int)priority;
- (int)type;
@end
