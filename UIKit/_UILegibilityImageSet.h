#import <UIKit/UIKit.h>

@interface _UILegibilityImageSet : NSObject
@property(retain) UIImage *image;
@property(retain) UIImage *shadowImage;

+ (id)imageFromImage:(UIImage *)arg1 withShadowImage:(UIImage *)arg2;

- (void)setImage:(UIImage *)arg1;
- (UIImage *)image;
- (id)initWithImage:(UIImage *)arg1 shadowImage:(UIImage *)arg2;
- (void)setShadowImage:(UIImage *)arg1;
- (UIImage *)shadowImage;
@end