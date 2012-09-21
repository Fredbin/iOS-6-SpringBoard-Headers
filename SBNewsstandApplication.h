/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBApplication.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandApplication : SBApplication {
	BOOL _isMagazineApp;
	BOOL _iconIsBoundOnRight;
	unsigned _supportsNewsstandContentBackgroundMode : 1;
	unsigned _allowedContentNotificationsPerDay;
	unsigned char _newsstandWakes;
	unsigned _lastPostedState;
}
@property(readonly, assign, nonatomic) BOOL iconIsBoundOnRight;
@property(readonly, assign, nonatomic) BOOL isMagazineApp;
-(BOOL)isNewsstandApplication;
-(BOOL)shouldThrottleContentNotificationOnDate:(id)date withLastCount:(unsigned*)lastCount onDay:(int*)day;
-(BOOL)isFakeApp;
-(void)resumeForContentAvailable;
-(void)setApplicationState:(unsigned)state;
-(void)activate;
-(Class)iconClass;
-(id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
@end

