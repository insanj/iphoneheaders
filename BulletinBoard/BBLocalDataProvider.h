#import "BBDataProvider.h"
#import <Foundation/Foundation.h>

@interface BBLocalDataProvider : BBDataProvider {
    id <BBDataProvider> _dataProvider;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_localQueue;
    NSObject<OS_dispatch_queue> *_remoteQueue;
    BOOL _unresponsive;
    NSObject<OS_dispatch_source> *_watchdogTimer;
}

@property (nonatomic, retain) id<BBDataProvider> dataProvider;

+ (id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2;
+ (id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(id /* block */)arg3;

@end
