@protocol BBSectionIdentity <NSObject>
@optional
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)defaultSectionInfo;
-(id)sectionIconData;

@required
-(id)sectionIdentifier;
@end