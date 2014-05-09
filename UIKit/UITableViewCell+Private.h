
@interface UITableViewCell (Private)

@property(nonatomic, retain) UIColor* separatorColor;
@property(nonatomic, readwrite) BOOL _drawsSeparatorAtTopOfSection;
@property(nonatomic, readwrite) BOOL _drawsSeparatorAtBottomOfSection;


@end 