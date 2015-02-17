#import "HBTwitterCell.h"
#import <Preferences/PSSpecifier.h>
#import <UIKit/UIColor+Private.h>
#import <UIKit/UIImage+Private.h>
#import <version.h>

@interface HBTwitterCell () {
	NSString *_user;
	UIImage *_defaultImage;
	UIImage *_highlightedImage;

	UIView *_avatarView;
	UIImageView *_avatarImageView;

	BOOL _isBig;
}

@end

@implementation HBTwitterCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier specifier:(PSSpecifier *)specifier {
	BOOL isBig = specifier.properties[@"big"] && ((NSNumber *)specifier.properties[@"big"]).boolValue;
	self = [super initWithStyle:isBig ? UITableViewCellStyleSubtitle : UITableViewCellStyleValue1 reuseIdentifier:reuseIdentifier specifier:specifier];

	if (self) {
		_isBig = isBig;
		_user = [specifier.properties[@"user"] isEqualToString:@"thekirbylover"] ? @"hbkirb" : [specifier.properties[@"user"] copy];
		_defaultImage = [[UIImage imageNamed:@"twitter" inBundle:globalBundle] retain];

		if (!IS_MODERN) {
			_highlightedImage = [[UIImage imageNamed:@"twitter_selected" inBundle:globalBundle] retain];
		}

		self.detailTextLabel.text = [@"@" stringByAppendingString:_user];
		self.detailTextLabel.textColor = IS_MODERN ? [UIColor colorWithWhite:0.5568627451f alpha:1] : [UIColor tableCellValue1BlueColor];
		self.selectionStyle = UITableViewCellSelectionStyleBlue;
		self.accessoryView = [[UIImageView alloc] initWithImage:_defaultImage];

		if (!specifier.properties[@"showAvatar"] || ((NSNumber *)specifier.properties[@"showAvatar"]).boolValue) {
			CGFloat size = _isBig ? 38.f : 29.f;

			UIGraphicsBeginImageContextWithOptions(CGSizeMake(size, size), NO, [UIScreen mainScreen].scale);
			specifier.properties[@"iconImage"] = UIGraphicsGetImageFromCurrentImageContext();
			UIGraphicsEndImageContext();

			_avatarView = [[UIView alloc] initWithFrame:CGRectMake(IS_MODERN ? 15.f : 8.f, 0, size, size)];
			_avatarView.autoresizingMask = UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
			_avatarView.center = CGPointMake(_avatarView.center.x, self.contentView.frame.size.height / 2);
			_avatarView.backgroundColor = [UIColor colorWithWhite:0.9f alpha:1];
			_avatarView.userInteractionEnabled = NO;
			_avatarView.clipsToBounds = YES;
			_avatarView.layer.cornerRadius = IS_MODERN ? size / 2 : 4.f;
			[self.contentView addSubview:_avatarView];

			_avatarImageView = [[UIImageView alloc] initWithFrame:_avatarView.bounds];
			_avatarImageView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
			_avatarImageView.alpha = 0;
			_avatarImageView.userInteractionEnabled = NO;
			[_avatarView addSubview:_avatarImageView];

			[self loadAvatarIfNeeded];
		}
	}

	return self;
}

- (void)setSelectionStyle:(UITableViewCellSelectionStyle)style {
	[super setSelectionStyle:UITableViewCellSelectionStyleBlue];
}

- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated {
	[super setHighlighted:highlighted animated:animated];

	if (!IS_MODERN) {
		((UIImageView *)self.accessoryView).image = highlighted ? _highlightedImage : _defaultImage;
	}
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
	if (!selected) {
		[super setSelected:selected animated:animated];
		return;
	}

	NSString *user = URL_ENCODE(_user);
	NSURL *url = nil;

	if ([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"aphelion://"]]) {
		url = [NSURL URLWithString:[@"aphelion://profile/" stringByAppendingString:user]];
	} else if ([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"tweetbot://"]]) {
		url = [NSURL URLWithString:[@"tweetbot:///user_profile/" stringByAppendingString:user]];
	} else if ([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"twitterrific://"]]) {
		url = [NSURL URLWithString:[@"twitterrific:///profile?screen_name=" stringByAppendingString:user]];
	} else if ([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"tweetings://"]]) {
		url = [NSURL URLWithString:[@"tweetings:///user?screen_name=" stringByAppendingString:user]];
	} else if ([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"twitter://"]]) {
		url = [NSURL URLWithString:[@"twitter://user?screen_name=" stringByAppendingString:user]];
	} else {
		url = [NSURL URLWithString:[@"https://mobile.twitter.com/" stringByAppendingString:user]];
	}

	[[UIApplication sharedApplication] openURL:url];
}

#pragma mark - Avatar

- (void)loadAvatarIfNeeded {
	if (!_avatarView || _avatarImageView.image) {
		return;
	}

	dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
		NSError *error = nil;
		NSData *data = [NSURLConnection sendSynchronousRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:[NSString stringWithFormat:@"https://twitter.com/%@/profile_image?size=bigger", URL_ENCODE(_user)]]] returningResponse:nil error:&error];

		if (error) {
			NSLog(@"libcephei: error loading twitter avatar: %@", error);
			return;
		}

		dispatch_async(dispatch_get_main_queue(), ^{
			_avatarImageView.image = [UIImage imageWithData:data];

			[UIView animateWithDuration:0.15 animations:^{
				_avatarImageView.alpha = 1;
			}];
		});
	});
}

#pragma mark - Memory management

- (void)dealloc {
	[_user release];
	[_defaultImage release];
	[_highlightedImage release];
	[_avatarView release];
	[_avatarImageView release];

	[super dealloc];
}

@end
