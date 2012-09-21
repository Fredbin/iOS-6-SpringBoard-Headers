/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertView.h"

@class TPBottomSingleButtonBar, TPTopLockBar, UIView, NSTimer;
@protocol SBPowerDownViewDelegate;

__attribute__((visibility("hidden")))
@interface SBPowerDownView : SBAlertView {
	id<SBPowerDownViewDelegate> _delegate;
	UIView* _dimView;
	TPTopLockBar* _lockView;
	TPBottomSingleButtonBar* _cancelView;
	NSTimer* _autoDismissTimer;
}
@property(assign, nonatomic) id<SBPowerDownViewDelegate> delegate;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)isSupportedInterfaceOrientation:(int)orientation;
-(void)animateDark;
-(void)animateOut;
-(void)animateIn;
-(void)notifyDelegateOfPowerDown;
-(void)finishedAnimatingOut;
-(void)finishedAnimatingIn;
-(void)powerDown:(id)down;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarUnlocked:(id)unlocked;
-(void)cancel:(id)cancel;
-(void)resetAutoDismissTimer;
-(void)cancelAutoDismissTimer;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
