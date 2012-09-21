/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconAccessoryImageView, UIView, UIImage, UIImageView, NSTimer, SBIconLabelImageView, SBIconImageView, SBIconImageContainerView, SBIcon;
@protocol SBIconViewObserver, SBIconViewDelegate;

__attribute__((visibility("hidden")))
@interface SBIconView : XXUnknownSuperclass <SBIconObserver> {
	SBIcon* _icon;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewObserver> _observer;
	SBIconImageContainerView* _iconImageContainer;
	SBIconImageView* _iconImageView;
	UIImageView* _iconDarkeningOverlay;
	UIImageView* _ghostlyImageView;
	UIImageView* _reflection;
	UIImageView* _shadow;
	SBIconAccessoryImageView* _accessoryView;
	SBIconLabelImageView* _labelView;
	BOOL _labelHidden;
	UIView* _closeBox;
	int _closeBoxType;
	UIImageView* _dropGlow;
	unsigned _drawsLabel : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideShadow : 1;
	NSTimer* _delayedUnhighlightTimer;
	unsigned _ghostlyRequesters;
	int _iconLocation;
	float _iconImageAlpha;
	float _iconImageBrightness;
	float _iconLabelAlpha;
	float _accessoryAlpha;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _longPressTimer;
	unsigned _ghostlyTag;
	UIImage* _ghostlyImage;
	BOOL _ghostlyPending;
}
@property(assign) id<SBIconViewObserver> observer;
@property(assign) id<SBIconViewDelegate> delegate;
@property(readonly, assign) SBIcon* icon;
+(id)_jitterTransformAnimation;
+(id)_jitterPositionAnimation;
+(id)_labelImageParametersForIcon:(id)icon location:(int)location;
+(Class)_labelImageParametersClassForIcon:(id)icon location:(int)location;
+(CGSize)_maxLabelSize;
+(CGSize)defaultIconImageSize;
+(CGSize)defaultIconSize;
-(void)iconLaunchEnabledDidChange:(id)iconLaunchEnabled;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(void)iconImageDidUpdate:(id)iconImage;
-(CGRect)defaultFrameForProgressBar;
-(void)prepareForRecycling;
-(id)createShadowImageView;
-(int)_delegateCloseBoxType;
-(BOOL)_delegateTapAllowed;
-(void)_delegateTouchEnded:(BOOL)ended;
-(BOOL)_delegatePositionIsEditable;
-(void)_updateShadowFrame;
-(void)_updateShadowFrameForShadow:(id)shadow;
-(void)setShadowsHidden:(BOOL)hidden;
-(UIEdgeInsets)snapshotEdgeInsets;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)closeBoxTapped;
-(BOOL)isShowingCloseBox;
-(void)setShowsCloseBox:(BOOL)box animated:(BOOL)animated;
-(void)setShowsCloseBox:(BOOL)box;
-(id)_newCloseBoxOfType:(int)type;
-(void)positionCloseBoxOfType:(int)type;
-(void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;
-(void)setTouchDownInIcon:(BOOL)icon;
-(BOOL)isTouchDownInIcon;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)cancelLongPressTimer;
-(void)longPressTimerFired;
-(int)ghostlyRequesters;
-(BOOL)isGhostly;
-(void)removeGhostlyImageView;
-(void)setPartialGhostly:(float)ghostly requester:(int)requester;
-(void)setGhostly:(BOOL)ghostly requester:(int)requester;
-(void)prepareGhostlyImageView;
-(void)prepareGhostlyImage;
-(void)prepareGhostlyImageIfNeeded;
-(id)_genGhostlyImage:(id)image;
-(void)placeGhostlyImageView;
-(BOOL)isShowingDropGlow;
-(id)dropGlow;
-(void)removeDropGlow;
-(void)showDropGlow:(BOOL)glow;
-(void)prepareDropGlow;
-(CGAffineTransform)transformToMakeDropGlowShrinkToIconSize;
-(void)setIsOverlapping:(BOOL)overlapping;
-(BOOL)isGrabbed;
-(void)setIsGrabbed:(BOOL)grabbed;
-(double)grabDurationForEvent:(id)event;
-(BOOL)canReceiveGrabbedIcon:(id)icon;
-(void)setRefusesRecipientStatus:(BOOL)status;
-(void)setIconPosition:(CGPoint)position;
-(void)removeAllIconAnimations;
-(BOOL)allowJitter;
-(void)setAllowJitter:(BOOL)jitter;
-(void)setIsJittering:(BOOL)jittering;
-(void)setFrame:(CGRect)frame;
-(float)_reflectionImageOffset;
-(BOOL)showsReflection;
-(void)updateReflection;
-(void)_updateShadow;
-(id)_shadowImage;
-(BOOL)isInDock;
-(void)_delayedUnhighlight;
-(void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
-(void)setHighlighted:(BOOL)highlighted;
-(BOOL)isHighlighted;
-(BOOL)delaysUnhighlightWhenTapped;
-(BOOL)allowsTapWhileEditing;
-(void)_updateIconBrightness;
-(void)updateIconOverlayView;
-(void)placeIconOverlayView;
-(CGRect)frameForIconOverlay;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(id)_automationID;
-(void)updateBadge;
-(void)_updateAccessoryPosition;
-(id)_superviewForAccessoryView;
-(CGRect)_frameForAccessoryView;
-(id)_iconBoundsForAccessory:(CGRect*)accessory;
-(UIEdgeInsets)_viewInsetsForAccessoryType:(int)accessoryType;
-(void)updateLabel;
-(void)positionLabel;
-(void)setLabelHidden:(BOOL)hidden;
-(id)iconImageView;
-(void)setIconLabelAlpha:(float)alpha;
-(void)setIconImageAlpha:(float)alpha;
-(id)reflectedIconWithBrightness:(float)brightness;
-(id)iconImageSnapshot:(id)snapshot;
-(id)snapshotSettings;
-(void)setDisplayedIconImage:(id)image;
-(void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;
-(void)positionIconImageView;
-(void)setLocation:(int)location;
-(int)location;
-(void)setIcon:(id)icon;
-(void)dealloc;
-(id)initWithDefaultSize;
@end

