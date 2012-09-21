/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIImageView;
@protocol SBUIBannerItemView;

__attribute__((visibility("hidden")))
@interface SBBannerAndShadowView : XXUnknownSuperclass {
	UIView<SBUIBannerItemView>* _banner;
	UIImageView* _shadow[5];
	CGRect _shadowFrame[5];
	CGSize _bannerSize;
	CGPoint _bannerOrigin;
	float _sideWidth;
	float _bottomHeight;
	BOOL _shadowsInPortraitWindow;
	UIView* _rollerContainer;
	UIImageView* _roller;
}
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)clearRoller;
-(void)setRollerProgress:(float)progress;
-(void)prepareRoller;
-(void)setShadowAlpha:(float)alpha;
-(void)pullShadowsBack;
-(void)moveShadowsToPortraitWindow:(id)portraitWindow fromOrientation:(int)orientation;
-(void)_layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(CGRect)_frameForBannerFrame:(CGRect)bannerFrame;
-(BOOL)_showsSideShadows;
-(void)setBannerFrame:(CGRect)frame;
-(void)replaceBannerWithBanner:(id)banner;
-(id)banner;
-(void)dealloc;
-(id)initWithBanner:(id)banner;
@end

