/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"
#import "SBUIAnimationControllerDelegate.h"

@class SBApplication, BKSApplicationActivationAssertion, SBUIAnimationController, SBAlert;

__attribute__((visibility("hidden")))
@interface SBAppToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBApplication* _topApplication;
	BKSApplicationActivationAssertion* _topApplicationActivationAssertion;
	BOOL _topApplicationSuppressesSpringBoardStatusBar;
	SBAlert* _activatingAlert;
	SBUIAnimationController* _animation;
	id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
}
@property(copy, nonatomic) id alertActivationBlock;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller didCommitAnimation:(BOOL)animation withDuration:(double)duration afterDelay:(double)delay;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_transactionComplete;
-(BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
-(BOOL)selfAlertWillActivate:(id)selfAlert overAlerts:(id)alerts;
-(void)_commit;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager alert:(id)alert overTopApplication:(id)application;
@end

