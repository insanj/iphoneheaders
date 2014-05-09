@interface PSSpecifier : NSObject

@property(retain) NSString *identifier;
@property(retain) NSString *name;

- (NSDictionary *)properties;
- (void)setProperty:(id)property forKey:(NSString*)key;
- (id)propertyForKey:(NSString*)key;

@end
