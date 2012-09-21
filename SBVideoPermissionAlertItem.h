/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, SBApplication, NSString;

__attribute__((visibility("hidden")))
@interface SBVideoPermissionAlertItem : XXUnknownSuperclass {
	NSURL* _url;
	SBApplication* _appHandlingURL;
	NSString* _sender;
}
-(BOOL)allowMenuButtonDismissal;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(id)initWithURL:(id)url applicationHandlingURL:(id)url2 sender:(id)sender;
@end

