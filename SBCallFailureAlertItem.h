/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBCallFailureAlertItem : XXUnknownSuperclass {
	long _causeCode;
	NSString* _address;
	CTCallRef _call;
}
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)performUnlockAction;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)shortLockLabel;
-(id)lockLabel;
-(void)_callback;
-(void)dealloc;
-(id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
@end

