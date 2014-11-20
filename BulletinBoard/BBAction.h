@interface BBAction : NSObject

+ (id)actionWithTextReplyCallblock:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id)arg2;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id)arg2;
+ (id)actionWithCallblock:(id)arg1;

@end
