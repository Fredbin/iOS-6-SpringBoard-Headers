/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBApplication.h"
#import "SpringBoard-Structs.h"

@class UIWebClip;

__attribute__((visibility("hidden")))
@interface SBWebApplication : SBApplication {
	UIWebClip* _webClip;
	BOOL _isLastWebApplication;
}
@property(retain) UIWebClip* webClip;
+(id)displayIdentifierForWebClipIdentifier:(id)webClipIdentifier;
+(id)displayIdentifierForWebClip:(id)webClip;
-(void)willActivateOtherWebApplication:(id)application;
-(void)_setActivationState:(int)state;
-(void)didExitWithInfo:(id)info type:(int)type;
-(void)disableContextHostingForRequester:(id)requester;
-(void)enableContextHostingForRequester:(id)requester orderFront:(BOOL)front;
-(id)contextHostViewForRequester:(id)requester;
-(id)_contextHostRequesterForRequester:(id)requester;
-(void)clearContextHostManager;
-(void)setContextHostManager:(id)manager;
-(void)setRunning:(BOOL)running;
-(void)setProcessInfo:(id)info;
-(id)_newDefaultImageInfoForLaunchingOrientation:(int)launchingOrientation scale:(float)scale;
-(BOOL)isWebApplication;
-(id)activationSettings;
-(id)_urlForLaunch;
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
@end

