/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "RadiosPreferencesDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString, RadiosPreferences, NSTimer, SBAlertItem;

__attribute__((visibility("hidden")))
@interface SBTelephonyManager : XXUnknownSuperclass <RadiosPreferencesDelegate> {
	NSString* _cachedCTRegistrationStatus;
	BOOL _emergencyCallsOnly;
	int _registrationStatus;
	void* _suspendDormancyAssertion;
	BOOL _signalStrengthHasBeenSet;
	long _signalStrength;
	long _signalStrengthBars;
	NSString* _operatorName;
	NSString* _lastKnownNetworkCountryCode;
	unsigned _suspendDormancyEnabled;
	unsigned _usingWifi : 1;
	unsigned _usingVPN : 1;
	unsigned _iTunesNeedsToRecheckActivation : 1;
	unsigned _pretendingToSearch : 1;
	unsigned _callForwardingIndicator : 2;
	BOOL _isNetworkTethering;
	int _numberOfNetworkTetheredDevices;
	unsigned _hasShownWaitingAlert : 1;
	SBAlertItem* _activationAlertItem;
	int _numActivationFailures;
	int _inEmergencyCallbackMode;
	unsigned _loggingCallAudio : 1;
	NSString* _inCallStatusPreamble;
	NSTimer* _inCallTimer;
	RadiosPreferences* _radioPrefs;
	int _needsUserIdentificationModule;
	NSString* _simStatus;
	int _wantsToHideDataIndicators;
	int _modemDataConnectionType;
	BOOL _modemDataConnectionTypeIsKnown;
}
+(id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)necessary;
+(id)sharedTelephonyManager;
-(void)_wokeFromSleep:(id)sleep;
-(void)noteWirelessModemChanged;
-(void)setIsNetworkTethering:(BOOL)tethering withNumberOfDevices:(int)devices;
-(int)numberOfNetworkTetheredDevices;
-(BOOL)isNetworkTethering;
-(void)noteSIMUnlockAttempt;
-(int)registrationCauseCode;
-(BOOL)needsUserIdentificationModule;
-(id)SIMStatus;
-(void)_setSIMStatus:(id)status;
-(BOOL)canOnlyMakeEmergencyCalls;
-(int)registrationStatus;
-(id)operatorName;
-(void)operatorBundleChanged;
-(void)setOperatorName:(id)name;
-(void)_reallySetOperatorName:(id)name;
-(void)_fetchOperatorNameWithCompletion:(id)completion;
-(long)signalStrengthBars;
-(long)signalStrength;
-(void)_setSignalStrength:(long)strength andBars:(long)bars;
-(void)carrierBundleChanged;
-(void)_prepareToAnswerCall;
-(BOOL)_pretendingToSearch;
-(void)_stopFakeService;
-(void)_startFakeServiceIfNecessary;
-(void)_cancelFakeService;
-(void)_updateRegistrationNow;
-(void)_setRegistrationStatus:(int)status;
-(void)_updateCanOnlyMakeEmergencyCalls;
-(void)_setCachedCTRegistrationStatus:(CFStringRef)status;
-(CFStringRef)_cachedCTRegistrationStatus;
-(void)postponementStatusChanged;
-(void)_proximityChanged:(id)changed;
-(void)_headphoneChanged:(id)changed;
-(void)_resetCTMMode;
-(id)ttyTitle;
-(BOOL)shouldPromptForTTY;
-(void)configureForTTY:(BOOL)tty;
-(void)exitEmergencyCallbackMode;
-(void)_setIsInEmergencyCallbackMode:(unsigned char)emergencyCallbackMode;
-(BOOL)isInEmergencyCallbackMode;
-(BOOL)isEmergencyCallActive;
-(void)_provisioningUpdateWithStatus:(int)status;
-(void)_setCurrentActivationAlertItem:(id)item;
-(id)copyTelephonyCapabilities;
-(id)copyMobileEquipmentInfo;
-(BOOL)isUsingVPNConnection;
-(void)setIsUsingVPNConnection:(BOOL)connection;
-(void)setIsUsingWiFiConnection:(BOOL)connection;
-(BOOL)isTTYEnabled;
-(BOOL)isUsingSlowDataConnection;
-(BOOL)isInAirplaneMode;
-(void)setIsInAirplaneMode:(BOOL)airplaneMode;
-(BOOL)EDGEIsOn;
-(BOOL)cellularRadioCapabilityIsActive;
-(void)_setWantsToHideDataIndicators:(int)hideDataIndicators;
-(void)_postDataConnectionTypeChanged;
-(int)dataConnectionType;
-(int)_updateModemDataConnectionTypeWithCTInfo:(id)ctinfo;
-(void)_resetModemConnectionType;
-(void)setNetworkRegistrationEnabled:(BOOL)enabled;
-(BOOL)isNetworkRegistrationEnabled;
-(BOOL)MALoggingEnabled;
-(void)dumpBasebandState:(id)state;
-(void)_setIsLoggingCallAudio:(BOOL)audio;
-(BOOL)isLoggingCallAudio;
-(void)setIncomingVoiceCallsEnabled:(BOOL)enabled;
-(void)unmute;
-(void)disconnectCallAndActivateHeld;
-(void)disconnectCall;
-(void)disconnectAllCalls;
-(void)swapCalls;
-(BOOL)isCallAmbiguous;
-(void)disconnectIncomingCall;
-(BOOL)inCall;
-(BOOL)shouldHangUpOnLock;
-(BOOL)callWouldUseReceiver:(BOOL)receiver;
-(BOOL)inCallUsingReceiverForcingRoutingToReceiver:(BOOL)receiver;
-(BOOL)inCallUsingSpeakerOrReceiver;
-(BOOL)multipleCallsExist;
-(BOOL)outgoingCallExists;
-(BOOL)incomingCallExists;
-(BOOL)heldCallExists;
-(BOOL)activeCallExists;
-(int)callCount;
-(id)allMissedCallsAfterRowID:(long long)anId;
-(long long)getRowIDOfLastCallInsert;
-(void)_delayedAudioResume;
-(void)updateDisplaySettings:(id)settings forOutgoingCallURL:(id)outgoingCallURL outURL:(id*)url;
-(id)urlWithScheme:(id)scheme fromDialingNumber:(id)dialingNumber abUID:(int)uid urlPathAddition:(id)addition forceAssist:(BOOL)assist suppressAssist:(BOOL)assist6 wasAlreadyAssisted:(BOOL)assisted;
-(id)lastKnownNetworkCountryCode;
-(void)_updateLastKnownNetworkCountryCode;
-(void)updateNetworkLocale;
-(BOOL)updateLocale;
-(void)_updateState;
-(void)updateCalls;
-(void)airplaneModeChanged;
-(void)updateAirplaneMode;
-(void)setFastDormancySuspended:(BOOL)suspended;
-(void)setLimitTransmitPowerPerBandEnabled:(BOOL)enabled;
-(void)updateStatusBarCallDuration;
-(void)_phoneActivationStateChanged:(id)changed;
-(void)updateStatusBarCallState:(BOOL)state;
-(id)_phoneApp;
-(void)updateSpringBoard;
-(int)callForwardingIndicator;
-(void)updateCallForwardingIndicator;
-(void)setCallForwardingIndicator:(int)indicator;
-(double)inCallDuration;
-(void)updateTTYIndicator;
-(void)SBTelephonyDaemonRestartHandler;
-(void)_serverConnectionDidError:(XXStruct_K5nmsA)_serverConnection;
-(void)_avSystemControllerDidError:(id)_avSystemController;
-(CTServerConnectionRef)_serverConnection;
-(void)_performQueryInBackground:(id)background withMainQueueResultHandler:(id)mainQueueResultHandler;
-(void)_postStartupNotification;
-(id)init;
@end

