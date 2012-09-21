/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinFadeOverlayOwner.h"

@class UIView, SBBulletinLinenFadeView;

__attribute__((visibility("hidden")))
@interface SBLinenFadeContainer : XXUnknownSuperclass <SBBulletinFadeOverlayOwner> {
	UIView* _linenView;
	SBBulletinLinenFadeView* _fadeView;
}
-(void)setLinenGradientAlpha:(float)alpha;
-(void)setRasterizesFadeOverlay:(BOOL)overlay;
-(void)layoutSubviews;
-(void)setShouldShowFadeOverlay:(BOOL)showFadeOverlay;
-(void)dealloc;
-(id)initWithLinenView:(id)linenView;
-(id)initWithFrame:(CGRect)frame;
@end

