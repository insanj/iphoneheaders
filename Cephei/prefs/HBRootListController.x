#import "HBRootListController.h"
#import <Twitter/Twitter.h>

@implementation HBRootListController

#pragma mark - Constants

+ (NSString *)hb_shareText {
	return nil;
}

+ (NSURL *)hb_shareURL {
	return nil;
}

#pragma mark - UIViewController

- (void)loadView {
	[super loadView];

	if ([self.class hb_shareText] && [self.class hb_shareURL]) {
		self.navigationItem.rightBarButtonItem = [[[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAction target:self action:@selector(hb_shareTapped)] autorelease];
	}
}

#pragma mark - Callbacks

- (void)hb_shareTapped {
	if (%c(UIActivityViewController)) {
		UIActivityViewController *viewController = [[[UIActivityViewController alloc] initWithActivityItems:@[ [self.class hb_shareText], [self.class hb_shareURL] ] applicationActivities:nil] autorelease];
		[self.navigationController presentViewController:viewController animated:YES completion:nil];
	} else if ([TWTweetComposeViewController canSendTweet]) {
		TWTweetComposeViewController *viewController = [[[TWTweetComposeViewController alloc] init] autorelease];
		viewController.initialText = [self.class hb_shareText];
		[viewController addURL:[self.class hb_shareURL]];
		[self.navigationController presentViewController:viewController animated:YES completion:nil];
	} else {
		[[UIApplication sharedApplication] openURL:[NSURL URLWithString:[NSString stringWithFormat:@"https://twitter.com/intent/tweet?text=%@%%20%@", URL_ENCODE([self.class hb_shareText]), URL_ENCODE([self.class hb_shareURL].absoluteString)]]];
	}
}

@end
