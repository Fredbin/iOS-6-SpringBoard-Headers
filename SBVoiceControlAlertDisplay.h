/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "VSRecognitionSessionDelegate.h"
#import "VSSpeechSynthesizerDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"

@class UITextField, UIView, NSTimer, NSMutableSet, AVController, NSMutableArray, NSDictionary, VSRecognitionSession, NSInvocation, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface SBVoiceControlAlertDisplay : SBSlidingAlertDisplay <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate> {
	VSRecognitionSession* _session;
	BOOL _wasRecognizing;
	BOOL _didConfigureRouting;
	NSInvocation* _postSoundInvocation;
	UIView* _leftFadeView;
	UIView* _rightFadeView;
	UIView* _labelsView;
	int _clipCount;
	int _currentClipNo;
	BOOL _voiceTranscription;
	UITextField* _textField;
	NSMutableArray* _transcripts;
	NSMutableArray* _voiceClips;
	AVController* _avController;
	NSMutableArray* _waves;
	NSMutableSet* _labels;
	int _keywordCount;
	int _lastKeywordIndex;
	NSTimer* _levelTimer;
	NSMutableIndexSet* _occupiedLabelSlots;
	NSDictionary* _locStrings;
	BOOL _labelsOn;
	BOOL _animatingToCall;
	BOOL _didDismiss;
	BOOL _awaitingButtonRelease;
	BOOL _isBecomingVisible;
	BOOL _labelsHaveDisplayed;
}
+(id)bottomBarForInstance:(id)instance;
+(id)bottomLockBarForDisplay:(id)display;
-(void)_keywordsChanged:(id)changed;
-(void)_stopMovingLabels;
-(void)_fadeOutCurrentLabels;
-(void)_startMovingLabels;
-(void)_labelFinishedAnimating:(id)animating finished:(id)finished label:(id)label;
-(void)_startKeywordIfNecessary;
-(void)_startLabelForKeywordAtIndex:(int)index now:(BOOL)now delayStart:(BOOL)start;
-(int)_keywordCount;
-(void)_setWaveAlpha:(float)alpha withDuration:(double)duration;
-(void)_stopUpdatingLevels;
-(void)_startUpdatingLevels;
-(void)_updateLevels;
-(void)recognitionSession:(id)session didFinishSpeakingFeedbackStringWithError:(id)error;
-(void)_speakText:(id)text;
-(void)_speakFeedbackText;
-(void)_performConfirmationAction;
-(void)_continueWithRecognitionAction;
-(id)recognitionSession:(id)session openURL:(id)url;
-(id)_openVideoURL:(id)url;
-(id)_openTelURL:(id)url;
-(void)_animateToAwayInCallController;
-(void)_finishedFadingToAwayInCallController;
-(void)recognitionSession:(id)session didCompleteActionWithError:(id)error;
-(void)_exitVoiceTranscriptView;
-(void)_playAudioAtPath:(id)path;
-(void)_getAudioClipsFromDirectory;
-(void)_startTrancribeAudio;
-(void)_userEnteredTextForVoiceClip:(id)voiceClip;
-(void)_mediaPlayerDied;
-(void)_promptUserForVoiceTranscription;
-(void)_performNoMatchFound;
-(void)recognitionSessionDidBeginAction:(id)recognitionSession;
-(void)_continueRecognitionAction;
-(BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;
-(void)_resetSession;
-(void)_startSession;
-(void)_playSound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(BOOL)_attemptPlaySound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(void)_performSoundCompletionAction;
-(void)_configureRoutingIfNecessary;
-(void)_pickedRouteChanged:(id)changed;
-(id)_desiredRouteDictionary;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
-(void)handleButtonUpCancel;
-(void)_dismissSlightlyLater;
-(void)_dismissIfWeHavent;
-(void)_notifyDeviceTermination;
-(void)_invalidateRouting;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)lockBarUnlocked:(id)unlocked;
-(void)alertWillBeDismissed;
-(void)alertDisplayWillBecomeVisible;
-(void)setStatusText:(id)text;
-(void)setTitleText:(id)text;
-(id)_localizedStringForKey:(id)key;
-(BOOL)alphanumericKeyboard;
-(void)dealloc;
-(void)updateDesktopImage:(id)image;
-(BOOL)_wasTriggeredByMenu;
-(id)initWithFrame:(CGRect)frame session:(id)session;
@end

