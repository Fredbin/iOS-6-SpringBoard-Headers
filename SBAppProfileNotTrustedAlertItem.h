/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplicationIcon;

__attribute__((visibility("hidden")))
@interface SBAppProfileNotTrustedAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBApplicationIcon* _icon;
	BOOL _launchApp;
}
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)didDeactivateForReason:(int)reason;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(id)initWithIcon:(id)icon;
@end

