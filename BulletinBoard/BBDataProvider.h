#import "BBSectionInfo.h"
#import "BBSectionIdentity.h"
#import "BBDataProviderFactory.h"

@protocol BBDataProvider <NSObject>

@required
- (NSArray *)bulletinsFilteredBy:(NSUInteger)by count:(NSUInteger)count lastCleared:(NSDate *)cleared;
- (NSString *)sectionIdentifier;
- (NSArray *)sortDescriptors;

@optional
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)sectionDisplayName;
- (NSArray *)sortDescriptors;

@end

@class BBDataProviderIdentity;

@interface BBDataProvider : NSObject <BBSectionIdentity> {

	BBDataProviderIdentity* _identity;

}

//@property (retain) BBDataProviderIdentity * identity;              //@synthesize identity=_identity - In the implementation block
-(id)sortKey;
-(id)identity;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)sectionIdentifier;
-(BOOL)syncsBulletinDismissal;
-(BOOL)canClearAllBulletins;
-(void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)sectionParameters;
-(void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)attachmentAspectRatioForRecordID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 ;
-(BOOL)isPushDataProvider;
-(void)dataProviderDidLoad;
-(id)defaultSectionInfo;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(BOOL)initialized;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/ id)arg1 ;
-(BOOL)canPerformMigration;
-(void)setIdentity:(id)arg1 ;
-(id)sortDescriptors;
@end
