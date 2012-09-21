/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SUNetworkObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SUManagerClientDelegate.h"

@class SUManagerClient, SUDownload;

__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateController : XXUnknownSuperclass <SUManagerClientDelegate, SUNetworkObserver> {
	SUManagerClient* _client;
	SUDownload* _updateToInstall;
	int _currentNetworkType;
	int _iCloudRestoreToken;
	BOOL _showOrScheduleForcedInstallAlertAfterNextUnlock;
	BOOL _scheduleForcedInstallAlertAfterNextUnlock;
	BOOL _scheduleForcedInstallAlertWhenAble;
	BOOL _settingsResetPrefsBadgedFlag;
}
+(id)stringFromReasons:(int)reasons;
+(id)sharedInstance;
-(void)_toggleSettingsBadge:(BOOL)badge;
-(BOOL)_isSettingsBadgedForSoftwareUpdate;
-(void)_clearLegacyBadgeIfNecessary:(id)necessary;
-(void)_migrateForNewOSVersionIfNecessary;
-(void)_saveLastKnownVersionPreference:(id)preference;
-(id)_stringForCurrentVersionPreference;
-(void)_savePreferencesBadgeFlag:(id)flag;
-(void)_autoDownloadUnknownToUserFailedForDescriptor:(id)descriptor error:(id)error;
-(void)_resetState;
-(BOOL)_isSettingsActive;
-(void)_handleInstallError:(id)error;
-(BOOL)_forceInstallAfterDownload;
-(void)_scheduleForcedInstallRepeatAlert:(double)alert;
-(void)_showForcedInstallAlert;
-(void)_isUpdateInstallable:(id)installable;
-(void)_showOrScheduleNextForcedInstallAlertWithReasons:(int)reasons;
-(void)_showOrScheduleNextForcedInstallAlert;
-(void)_resetAndCancelExistingScheduledForcedInstallAlerts;
-(void)_setUpdateToInstall:(id)install;
-(void)_registerForInstallRelatedNotifications;
-(void)_unregisterForInstallRelatedNotifications;
-(void)client:(id)client installDidFinish:(id)install;
-(void)client:(id)client installDidFail:(id)install withError:(id)error;
-(void)client:(id)client installDidStart:(id)install;
-(void)client:(id)client downloadDidFinish:(id)download;
-(void)client:(id)client downloadDidFail:(id)download withError:(id)error;
-(void)client:(id)client downloadDidStart:(id)download;
-(void)client:(id)client automaticDownloadDidFailToStartForNewUpdateAvailable:(id)automaticDownload withError:(id)error;
-(void)client:(id)client downloadWasInvalidatedForNewUpdateAvailable:(id)newUpdateAvailable;
-(void)_iTunesRestoreStateChanged:(id)changed;
-(void)_iCloudStatusChanged;
-(void)_lockStateChanged:(id)changed;
-(void)_callCountChanged:(id)changed;
-(void)_syncDidEnd:(id)_sync;
-(void)_syncWillStart:(id)_sync;
-(void)_completeMigrationForSettingsReset;
-(void)_prepareMigrationForSettingsReset;
-(void)delayForcedInstallWithDefaultDurationAfterNextUnlock;
-(void)delayForcedInstallWithDefaultDurationFromNow;
-(void)delayForcedInstallUntilAble;
-(void)installUpdate;
-(void)isDownloading:(id)downloading;
-(void)dealloc;
-(id)init;
@end

