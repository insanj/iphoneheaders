#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
// #import "PCLoggingDelegate.h"

// @class NSDate, NSObject<OS_dispatch_queue>, NSRunLoop, NSString, PCDispatchTimer;

@interface PCSimpleTimer : NSObject /*<PCLoggingDelegate> {
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    BOOL _triggerOnGMTChange;
    BOOL _disableSystemWaking;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}*/

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;
@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_serviceIdentifier;
@property(nonatomic) BOOL disableSystemWaking; // @synthesize disableSystemWaking=_disableSystemWaking;
@property(readonly, copy) NSString *debugDescription;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)arg1;
- (void)_significantTimeChange;
- (void)_powerNotificationSleepIsImminent;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_setPowerMonitoringEnabled:(BOOL)arg1;
- (void)_fireTimerFired;
- (void)_preventSleepFired;
- (void)_updateTimers;
// - (void)_performBlockOnQueue:(CDUnknownBlockType)arg1;
- (id)_getTimerMode;
- (id)_getTimerRunLoop;
- (id)userInfo;
- (BOOL)firingIsImminent;
- (BOOL)isValid;
- (void)invalidate;
- (void)_scheduleTimer;
- (void)scheduleInQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
- (void)updateFireTime:(double)arg1 triggerOnGMTChange:(BOOL)arg2;
- (void)dealloc;
- (id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end