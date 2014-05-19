
#import "BBSectionIdentity.h"

@protocol BBDataProviderFactory <BBSectionIdentity>
@required
-(id)dataProviders;
@end
