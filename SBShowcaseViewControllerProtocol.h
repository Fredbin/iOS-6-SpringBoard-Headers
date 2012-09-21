/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class SBShowcaseController;

@protocol SBShowcaseViewControllerProtocol <NSObject>
@property(assign, nonatomic) int revealMode;
@property(assign, nonatomic) SBShowcaseController* showcase;
-(BOOL)activateIgnoringTouches;
-(float)revealAmountForMode:(int)mode;
-(float)bottomBarHeight;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)expectsFaceContact;
-(void)revealModeWillChange:(int)revealMode;
-(void)viewDidRotateFromInterfaceOrientation:(int)view;
-(void)viewWillAnimateRotationToInterfaceOrientation:(int)view;
-(void)viewWillRotateToInterfaceOrientation:(int)view;
-(void)viewDidDisappear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)viewWillAppear;
-(id)view;
@end

