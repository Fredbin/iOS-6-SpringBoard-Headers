/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBAlert;

__attribute__((visibility("hidden")))
@interface SBAlertView : XXUnknownSuperclass {
	SBAlert* _alert;
	unsigned _displaysAboveStatusBar : 1;
	unsigned _shouldAnimateIn : 1;
}
+(id)imageForPerson:(void*)person display:(id)display isFullscreen:(BOOL*)fullscreen;
-(BOOL)shouldAddClippingViewDuringRotation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)isSupportedInterfaceOrientation:(int)orientation;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
-(BOOL)shouldAnimateIn;
-(void)setShouldAnimateIn:(BOOL)animateIn;
-(BOOL)isReadyToBeRemovedFromView;
-(void)setDisplaysAboveStatusBar:(BOOL)bar;
-(BOOL)displaysAboveStatusBar;
-(void)alertDisplayBecameVisible;
-(void)alertDisplayWillBecomeVisible;
-(void)setHandlerAlreadyActive:(BOOL)active;
-(void)dismiss;
-(void)launchURL:(id)url;
-(id)alert;
-(void)setAlert:(id)alert;
-(id)initWithFrame:(CGRect)frame;
@end

