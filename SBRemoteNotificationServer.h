/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "APSConnectionDelegate.h"

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationServer : XXUnknownSuperclass <APSConnectionDelegate> {
	NSMutableDictionary* _bundleIdentifiersToClients;
	NSMutableDictionary* _environmentsToConnections;
	NSString* _lastNotificationReceivedBundleIdentifier;
}
+(id)sharedInstance;
-(id)_allPushRegisteredThirdPartyBundleIDs;
-(id)getMessageUserInfoForBundleIdentifier:(id)bundleIdentifier;
-(void)setMessageUserInfo:(id)info forBundleIdentifier:(id)bundleIdentifier;
-(void)postSettingsChangedNotificationForBundleIdentifier:(id)bundleIdentifier;
-(void)setSettingsTypes:(unsigned)types forBundleIdentifier:(id)bundleIdentifier;
-(unsigned)settingsEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
-(unsigned)appEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
-(void)notePermissionAlertAcceptedTypes:(unsigned)types forBundleIdentifier:(id)bundleIdentifier;
-(BOOL)hasRegisteredBundleIdentifiers;
-(void)setSystemwideEnabled:(BOOL)enabled;
-(BOOL)isSystemwideEnabled;
-(unsigned)getEffectiveEnabledTypesForApplication:(id)application;
-(void)unregisterApplication:(id)application;
-(void)registerApplication:(id)application forEnvironment:(id)environment withTypes:(unsigned)types;
-(void)calculateTopics;
-(id)allSettingsEnabledTypeValues;
-(id)allAppEnabledTypeValues;
-(id)lastNotificationReceivedBundleIdentifier;
-(void)connection:(id)connection didReceiveIncomingMessage:(id)message;
-(void)noteApplicationFinishedLaunching:(id)launching;
-(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)run;
-(void)dealloc;
-(id)init;
@end

